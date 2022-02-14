
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_freq_range_list {int dummy; } ;
struct p2p_reg_class {size_t channels; struct p2p_reg_class* channel; int reg_class; } ;
struct p2p_channels {size_t reg_classes; struct p2p_reg_class* reg_class; } ;


 scalar_t__ FUNC_0 (struct wpa_freq_range_list const*,int) ;
 int FUNC_1 (struct p2p_reg_class*,struct p2p_reg_class*,size_t) ;
 int FUNC_2 (int ,struct p2p_reg_class) ;

void FUNC_3(struct p2p_channels *VAR_0,
          const struct wpa_freq_range_list *VAR_1)
{
 size_t VAR_2, VAR_3;

 if (VAR_1 == ((void*)0))
  return;

 VAR_2 = 0;
 while (VAR_2 < VAR_0->reg_classes) {
  struct p2p_reg_class *VAR_4 = &VAR_0->reg_class[VAR_2];

  VAR_3 = 0;
  while (VAR_3 < VAR_4->channels) {
   int VAR_5 = FUNC_2(VAR_4->reg_class,
             VAR_4->channel[VAR_3]);
   if (VAR_5 > 0 && FUNC_0(VAR_1, VAR_5)) {
    VAR_4->channels--;
    FUNC_1(&VAR_4->channel[VAR_3],
        &VAR_4->channel[VAR_3 + 1],
        VAR_4->channels - VAR_3);
   } else
    VAR_3++;
  }

  if (VAR_4->channels == 0) {
   VAR_0->reg_classes--;
   FUNC_1(&VAR_0->reg_class[VAR_2], &VAR_0->reg_class[VAR_2 + 1],
       (VAR_0->reg_classes - VAR_2) *
       sizeof(struct p2p_reg_class));
  } else
   VAR_2++;
 }
}
