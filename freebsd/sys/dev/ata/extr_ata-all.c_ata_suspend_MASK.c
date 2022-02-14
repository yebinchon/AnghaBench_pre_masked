
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_channel {int flags; scalar_t__ state; int state_mtx; int sim; int poll_callout; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 struct ata_channel* FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (struct ata_channel*,int *,int ,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int) ;

int
FUNC_6(device_t VAR_5)
{
    struct ata_channel *VAR_6;


    if (!VAR_5 || !(VAR_6 = FUNC_1(VAR_5)))
 return VAR_2;

    if (VAR_6->flags & VAR_1)
 FUNC_0(&VAR_6->poll_callout);
    FUNC_3(&VAR_6->state_mtx);
    FUNC_5(VAR_6->sim, 1);
    while (VAR_6->state != VAR_0)
 FUNC_2(VAR_6, &VAR_6->state_mtx, VAR_3, "atasusp", VAR_4/100);
    FUNC_4(&VAR_6->state_mtx);
    return(0);
}
