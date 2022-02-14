
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2p_reg_class {size_t channels; scalar_t__* channel; int reg_class; } ;


 size_t VAR_0 ;

__attribute__((used)) static void FUNC_0(const struct p2p_reg_class *VAR_1,
        const struct p2p_reg_class *VAR_2,
        struct p2p_reg_class *VAR_3)
{
 size_t VAR_4, VAR_5;

 VAR_3->reg_class = VAR_1->reg_class;

 for (VAR_4 = 0; VAR_4 < VAR_1->channels; VAR_4++) {
  for (VAR_5 = 0; VAR_5 < VAR_2->channels; VAR_5++) {
   if (VAR_1->channel[VAR_4] != VAR_2->channel[VAR_5])
    continue;
   VAR_3->channel[VAR_3->channels] = VAR_1->channel[VAR_4];
   VAR_3->channels++;
   if (VAR_3->channels == VAR_0)
    return;
  }
 }
}
