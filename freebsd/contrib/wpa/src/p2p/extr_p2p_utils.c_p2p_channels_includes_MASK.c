
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct p2p_reg_class {scalar_t__ reg_class; size_t channels; scalar_t__* channel; } ;
struct p2p_channels {size_t reg_classes; struct p2p_reg_class* reg_class; } ;



int FUNC_0(const struct p2p_channels *VAR_0, u8 VAR_1,
     u8 VAR_2)
{
 size_t VAR_3, VAR_4;
 for (VAR_3 = 0; VAR_3 < VAR_0->reg_classes; VAR_3++) {
  const struct p2p_reg_class *VAR_5 = &VAR_0->reg_class[VAR_3];
  if (VAR_5->reg_class != VAR_1)
   continue;
  for (VAR_4 = 0; VAR_4 < VAR_5->channels; VAR_4++) {
   if (VAR_5->channel[VAR_4] == VAR_2)
    return 1;
  }
 }
 return 0;
}
