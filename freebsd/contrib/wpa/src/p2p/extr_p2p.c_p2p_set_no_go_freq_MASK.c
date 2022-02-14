
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_freq_range_list {int num; int range; } ;
struct wpa_freq_range {int dummy; } ;
struct TYPE_2__ {int num; struct wpa_freq_range* range; } ;
struct p2p_data {TYPE_1__ no_go_freq; } ;


 struct wpa_freq_range* FUNC_0 (int,int) ;
 int FUNC_1 (struct wpa_freq_range*) ;
 int FUNC_2 (struct wpa_freq_range*,int ,int) ;
 int FUNC_3 (struct p2p_data*,char*) ;

int FUNC_4(struct p2p_data *VAR_0,
         const struct wpa_freq_range_list *VAR_1)
{
 struct wpa_freq_range *VAR_2;

 if (VAR_1 == ((void*)0) || VAR_1->num == 0) {
  FUNC_1(VAR_0->no_go_freq.range);
  VAR_0->no_go_freq.range = ((void*)0);
  VAR_0->no_go_freq.num = 0;
  return 0;
 }

 VAR_2 = FUNC_0(VAR_1->num, sizeof(struct wpa_freq_range));
 if (VAR_2 == ((void*)0))
  return -1;
 FUNC_2(VAR_2, VAR_1->range, VAR_1->num * sizeof(struct wpa_freq_range));
 FUNC_1(VAR_0->no_go_freq.range);
 VAR_0->no_go_freq.range = VAR_2;
 VAR_0->no_go_freq.num = VAR_1->num;
 FUNC_3(VAR_0, "Updated no GO chan list");

 return 0;
}
