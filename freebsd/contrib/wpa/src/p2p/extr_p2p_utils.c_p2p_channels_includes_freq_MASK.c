
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2p_reg_class {size_t channels; int * channel; int reg_class; } ;
struct p2p_channels {size_t reg_classes; struct p2p_reg_class* reg_class; } ;


 int FUNC_0 (int ,int ) ;

int FUNC_1(const struct p2p_channels *VAR_0,
          unsigned int VAR_1)
{
 size_t VAR_2, VAR_3;
 for (VAR_2 = 0; VAR_2 < VAR_0->reg_classes; VAR_2++) {
  const struct p2p_reg_class *VAR_4 = &VAR_0->reg_class[VAR_2];
  for (VAR_3 = 0; VAR_3 < VAR_4->channels; VAR_3++) {
   if (FUNC_0(VAR_4->reg_class,
      VAR_4->channel[VAR_3]) == (int) VAR_1)
    return 1;
  }
 }
 return 0;
}
