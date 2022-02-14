
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int lock; int parent_dmat; int irq; int ih; int reg; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct sc_info*) ;
 int FUNC_5 (struct sc_info*,int ) ;
 struct sc_info* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_3)
{
 int VAR_4;
 struct sc_info *VAR_5;

 VAR_4 = FUNC_7(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_5 = FUNC_6(VAR_3);

 FUNC_4(VAR_5);

 FUNC_2(VAR_3, VAR_1, FUNC_0(0), VAR_5->reg);
 FUNC_3(VAR_3, VAR_5->irq, VAR_5->ih);
 FUNC_2(VAR_3, VAR_2, 0, VAR_5->irq);
 FUNC_1(VAR_5->parent_dmat);
 FUNC_8(VAR_5->lock);
 FUNC_5(VAR_5, VAR_0);

 return 0;
}
