
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2p_reg_class {size_t channels; scalar_t__* channel; } ;


 size_t VAR_0 ;

__attribute__((used)) static void FUNC_0(struct p2p_reg_class *VAR_1,
          const struct p2p_reg_class *VAR_2)
{
 size_t VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2->channels; VAR_3++) {
  for (VAR_4 = 0; VAR_4 < VAR_1->channels; VAR_4++) {
   if (VAR_2->channel[VAR_3] == VAR_1->channel[VAR_4])
    break;
  }
  if (VAR_4 == VAR_1->channels) {
   if (VAR_1->channels == VAR_0)
    return;
   VAR_1->channel[VAR_1->channels++] = VAR_2->channel[VAR_3];
  }
 }
}
