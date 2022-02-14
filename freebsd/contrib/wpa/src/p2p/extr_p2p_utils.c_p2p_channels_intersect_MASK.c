
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2p_reg_class {scalar_t__ reg_class; scalar_t__ channels; } ;
struct p2p_channels {size_t reg_classes; struct p2p_reg_class* reg_class; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct p2p_channels*,int ,int) ;
 int FUNC_1 (struct p2p_reg_class const*,struct p2p_reg_class const*,struct p2p_reg_class*) ;

void FUNC_2(const struct p2p_channels *VAR_1,
       const struct p2p_channels *VAR_2,
       struct p2p_channels *VAR_3)
{
 size_t VAR_4, VAR_5;

 FUNC_0(VAR_3, 0, sizeof(*VAR_3));

 for (VAR_4 = 0; VAR_4 < VAR_1->reg_classes; VAR_4++) {
  const struct p2p_reg_class *VAR_6 = &VAR_1->reg_class[VAR_4];
  for (VAR_5 = 0; VAR_5 < VAR_2->reg_classes; VAR_5++) {
   const struct p2p_reg_class *VAR_7 = &VAR_2->reg_class[VAR_5];
   if (VAR_6->reg_class != VAR_7->reg_class)
    continue;
   FUNC_1(
    VAR_6, VAR_7,
    &VAR_3->reg_class[VAR_3->reg_classes]);
   if (VAR_3->reg_class[VAR_3->reg_classes].channels) {
    VAR_3->reg_classes++;
    if (VAR_3->reg_classes == VAR_0)
     return;
   }
  }
 }
}
