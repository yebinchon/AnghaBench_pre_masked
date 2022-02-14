
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int lock; scalar_t__ mpu_reg; int mpu_regid; scalar_t__ reg; int regid; scalar_t__ mpu; scalar_t__ irq; int irqid; int ih; int parent_dmat; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (struct sc_info*,int) ;
 int FUNC_4 (struct sc_info*) ;
 int FUNC_5 (struct sc_info*,int ) ;
 int FUNC_6 (scalar_t__) ;
 struct sc_info* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_3)
{
 struct sc_info *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_8(VAR_3);
 if (VAR_5) return VAR_5;

 VAR_4 = FUNC_7(VAR_3);
 FUNC_4(VAR_4);
 FUNC_3(VAR_4, 3);

 FUNC_0(VAR_4->parent_dmat);
 FUNC_2(VAR_3, VAR_4->irq, VAR_4->ih);
 FUNC_1(VAR_3, VAR_2, VAR_4->irqid, VAR_4->irq);
 if(VAR_4->mpu)
  FUNC_6(VAR_4->mpu);
 FUNC_1(VAR_3, VAR_1, VAR_4->regid, VAR_4->reg);
 if (VAR_4->mpu_reg)
     FUNC_1(VAR_3, VAR_1, VAR_4->mpu_regid, VAR_4->mpu_reg);

 FUNC_9(VAR_4->lock);
 FUNC_5(VAR_4, VAR_0);

 return 0;
}
