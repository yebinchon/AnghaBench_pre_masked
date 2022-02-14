
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct twed_softc {TYPE_1__* twed_disk; } ;
typedef int device_t ;
struct TYPE_2__ {int d_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
    struct twed_softc *VAR_3 = (struct twed_softc *)FUNC_1(VAR_2);

    FUNC_0(4);

    if (VAR_3->twed_disk->d_flags & VAR_0)
 return(VAR_1);

    FUNC_2(VAR_3->twed_disk);

    return(0);
}
