
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iop_softc {int mtx; int r_mem; int r_irq; int handle; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 struct iop_softc* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2)
{
    struct iop_softc *VAR_3 = FUNC_4(VAR_2);
    int VAR_4;

    VAR_4 = FUNC_1(VAR_2);
    if (VAR_4)
     return (VAR_4);
    FUNC_3(VAR_2, VAR_3->r_irq, VAR_3->handle);
    FUNC_2(VAR_2, VAR_0, 0x00, VAR_3->r_irq);
    FUNC_2(VAR_2, VAR_1, FUNC_0(0), VAR_3->r_mem);
    FUNC_5(&VAR_3->mtx);
    return (0);
}
