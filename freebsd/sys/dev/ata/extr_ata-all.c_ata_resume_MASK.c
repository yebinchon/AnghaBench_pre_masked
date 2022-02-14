
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_channel {int flags; int poll_callout; int state_mtx; int sim; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,struct ata_channel*) ;
 struct ata_channel* FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;

int
FUNC_6(device_t VAR_5)
{
    struct ata_channel *VAR_6;
    int VAR_7;


    if (!VAR_5 || !(VAR_6 = FUNC_2(VAR_5)))
 return VAR_1;

 FUNC_3(&VAR_6->state_mtx);
 VAR_7 = FUNC_0(VAR_5);
 FUNC_5(VAR_6->sim, VAR_2);
 FUNC_4(&VAR_6->state_mtx);
 if (VAR_6->flags & VAR_0)
  FUNC_1(&VAR_6->poll_callout, VAR_4, VAR_3, VAR_6);
    return VAR_7;
}
