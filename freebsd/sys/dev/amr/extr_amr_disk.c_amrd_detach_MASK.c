
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amrd_softc {TYPE_1__* amrd_disk; } ;
typedef int device_t ;
struct TYPE_2__ {int d_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_4)
{
    struct amrd_softc *VAR_5 = (struct amrd_softc *)FUNC_2(VAR_4);

    FUNC_1(1);

    if (VAR_5->amrd_disk->d_flags & VAR_0)
 return(VAR_1);





    FUNC_3(VAR_5->amrd_disk);

    return(0);
}
