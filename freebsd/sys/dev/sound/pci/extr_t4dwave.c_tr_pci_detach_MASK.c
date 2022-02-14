
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tr_info {int lock; int parent_dmat; int irq; int irqid; int ih; int reg; int regid; int regtype; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct tr_info*,int ) ;
 struct tr_info* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_2)
{
 int VAR_3;
 struct tr_info *VAR_4;

 VAR_3 = FUNC_5(VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_4 = FUNC_4(VAR_2);
 FUNC_1(VAR_2, VAR_4->regtype, VAR_4->regid, VAR_4->reg);
 FUNC_2(VAR_2, VAR_4->irq, VAR_4->ih);
 FUNC_1(VAR_2, VAR_1, VAR_4->irqid, VAR_4->irq);
 FUNC_0(VAR_4->parent_dmat);
 FUNC_6(VAR_4->lock);
 FUNC_3(VAR_4, VAR_0);

 return 0;
}
