
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iop_softc {int mtx; int dev; scalar_t__ ibase; struct i2o_registers* reg; void* r_mem; void* r_irq; } ;
struct i2o_registers {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (int ,int ,int*,int) ;
 int FUNC_2 (int ) ;
 struct iop_softc* FUNC_3 (int ) ;
 int FUNC_4 (struct iop_softc*) ;
 int FUNC_5 (int *,char*,int *,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (void*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_6)
{
    struct iop_softc *VAR_7 = FUNC_3(VAR_6);
    int VAR_8;


    VAR_8 = FUNC_0(0);
    VAR_7->r_mem =
 FUNC_1(VAR_6, VAR_5, &VAR_8, VAR_2);

    if (!VAR_7->r_mem)
 return VAR_0;

    VAR_8 = 0x00;
    VAR_7->r_irq = FUNC_1(VAR_6, VAR_4, &VAR_8,
           VAR_3 | VAR_2);


    FUNC_6(VAR_6);

    VAR_7->ibase = FUNC_7(VAR_7->r_mem);
    VAR_7->reg = (struct i2o_registers *)VAR_7->ibase;
    VAR_7->dev = VAR_6;
    FUNC_5(&VAR_7->mtx, "pst lock", ((void*)0), VAR_1);

    if (!FUNC_4(VAR_7))
 return 0;
    return FUNC_2(VAR_6);
}
