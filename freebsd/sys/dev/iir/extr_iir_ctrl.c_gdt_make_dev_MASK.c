
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdt_softc {int dummy; } ;
struct cdev {struct gdt_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cdev* FUNC_0 (int *,int ,int ,int ,int,char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_7 ;

struct cdev *
FUNC_3(struct gdt_softc *VAR_8)
{
    struct cdev *VAR_9;






    FUNC_1(&VAR_5);
    if (VAR_6)
        return (((void*)0));
    VAR_9 = FUNC_0(&VAR_4, 0, VAR_3, VAR_0,
                   VAR_1 | VAR_2, "iir");
    VAR_6 = 1;
    FUNC_2(&VAR_5);

    return (VAR_9);
}
