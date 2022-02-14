
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm801_info {int parent_dmat; int irq; int irqid; int ih; int reg; int regid; int regtype; int * radio; } ;
typedef int device_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct fm801_info*,int ) ;
 struct fm801_info* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_2)
{
 int VAR_3;
 struct fm801_info *VAR_4;

 FUNC_0("Forte Media FM801 detach\n");

 VAR_4 = FUNC_7(VAR_2);

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  return VAR_3;
 if (VAR_4->radio != ((void*)0)) {
  VAR_3 = FUNC_5(VAR_2, VAR_4->radio);
  if (VAR_3)
   return VAR_3;
  VAR_4->radio = ((void*)0);
 }

 VAR_3 = FUNC_8(VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_3(VAR_2, VAR_4->regtype, VAR_4->regid, VAR_4->reg);
 FUNC_4(VAR_2, VAR_4->irq, VAR_4->ih);
 FUNC_3(VAR_2, VAR_1, VAR_4->irqid, VAR_4->irq);
 FUNC_1(VAR_4->parent_dmat);
 FUNC_6(VAR_4, VAR_0);
 return 0;
}
