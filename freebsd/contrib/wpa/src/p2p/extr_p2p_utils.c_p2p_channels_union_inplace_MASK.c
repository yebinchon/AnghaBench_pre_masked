
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2p_reg_class {scalar_t__ reg_class; } ;
struct p2p_channels {size_t reg_classes; struct p2p_reg_class* reg_class; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct p2p_reg_class*,struct p2p_reg_class const*,int) ;
 int FUNC_1 (struct p2p_reg_class*,struct p2p_reg_class const*) ;

void FUNC_2(struct p2p_channels *VAR_1,
    const struct p2p_channels *VAR_2)
{
 size_t VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1->reg_classes; VAR_3++) {
  struct p2p_reg_class *VAR_5 = &VAR_1->reg_class[VAR_3];
  for (VAR_4 = 0; VAR_4 < VAR_2->reg_classes; VAR_4++) {
   const struct p2p_reg_class *VAR_6 = &VAR_2->reg_class[VAR_4];
   if (VAR_5->reg_class != VAR_6->reg_class)
    continue;
   FUNC_1(VAR_5, VAR_6);
  }
 }

 for (VAR_4 = 0; VAR_4 < VAR_2->reg_classes; VAR_4++) {
  const struct p2p_reg_class *VAR_7 = &VAR_2->reg_class[VAR_4];

  for (VAR_3 = 0; VAR_3 < VAR_1->reg_classes; VAR_3++) {
   struct p2p_reg_class *VAR_8 = &VAR_1->reg_class[VAR_3];
   if (VAR_8->reg_class == VAR_7->reg_class)
    break;
  }

  if (VAR_3 == VAR_1->reg_classes) {
   if (VAR_1->reg_classes == VAR_0)
    return;
   FUNC_0(&VAR_1->reg_class[VAR_1->reg_classes++],
      VAR_7, sizeof(struct p2p_reg_class));
  }
 }
}
