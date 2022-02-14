
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdt_softc {int dummy; } ;
struct cdev {struct gdt_softc* si_drv1; } ;
typedef int * device_t ;
typedef int * devclass_t ;


 int * FUNC_0 (char*) ;
 int * FUNC_1 (int *,int) ;
 struct gdt_softc* FUNC_2 (int *) ;

__attribute__((used)) static struct gdt_softc *
FUNC_3(struct cdev *VAR_0, int VAR_1)
{




    devclass_t VAR_2;
    device_t VAR_3;

    VAR_2 = FUNC_0("iir");
    if (VAR_2 == ((void*)0))
 return (((void*)0));
    VAR_3 = FUNC_1(VAR_2, VAR_1);
    if (VAR_3 == ((void*)0))
 return (((void*)0));
    return (FUNC_2(VAR_3));

}
