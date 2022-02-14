
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2p_reg_class {unsigned int channels; int * channel; int reg_class; } ;
struct p2p_channels {unsigned int reg_classes; struct p2p_reg_class* reg_class; } ;


 int FUNC_0 (int ,int ) ;

int FUNC_1(const struct p2p_channels *VAR_0, int *VAR_1,
     unsigned int VAR_2)
{
 unsigned int VAR_3, VAR_4;

 if (!VAR_0 || VAR_2 == 0)
  return 0;

 for (VAR_3 = 0, VAR_4 = 0; VAR_3 < VAR_0->reg_classes; VAR_3++) {
  const struct p2p_reg_class *VAR_5 = &VAR_0->reg_class[VAR_3];
  unsigned int VAR_6;

  if (VAR_4 + 1 == VAR_2)
   break;
  for (VAR_6 = 0; VAR_6 < VAR_5->channels; VAR_6++) {
   int VAR_7;
   unsigned int VAR_8;

   if (VAR_4 + 1 == VAR_2)
    break;
   VAR_7 = FUNC_0(VAR_5->reg_class,
         VAR_5->channel[VAR_6]);
   if (VAR_7 < 0)
    continue;

   for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
    if (VAR_1[VAR_8] == VAR_7)
     break;
   }

   if (VAR_8 < VAR_4)
    continue;
   VAR_1[VAR_4++] = VAR_7;
  }
 }

 VAR_1[VAR_4] = 0;

 return VAR_4;
}
