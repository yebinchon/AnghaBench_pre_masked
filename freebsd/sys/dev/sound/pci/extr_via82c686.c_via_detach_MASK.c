
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via_info {int lock; int sgd_dmat; int sgd_dmamap; int sgd_table; int parent_dmat; int irq; int irqid; int ih; int reg; int regid; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct via_info*,int ) ;
 struct via_info* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_3)
{
 int VAR_4;
 struct via_info *VAR_5 = ((void*)0);

 VAR_4 = FUNC_7(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_5 = FUNC_6(VAR_3);
 FUNC_3(VAR_3, VAR_1, VAR_5->regid, VAR_5->reg);
 FUNC_4(VAR_3, VAR_5->irq, VAR_5->ih);
 FUNC_3(VAR_3, VAR_2, VAR_5->irqid, VAR_5->irq);
 FUNC_0(VAR_5->parent_dmat);
 FUNC_1(VAR_5->sgd_dmat, VAR_5->sgd_dmamap);
 FUNC_2(VAR_5->sgd_dmat, VAR_5->sgd_table, VAR_5->sgd_dmamap);
 FUNC_0(VAR_5->sgd_dmat);
 FUNC_8(VAR_5->lock);
 FUNC_5(VAR_5, VAR_0);
 return 0;
}
