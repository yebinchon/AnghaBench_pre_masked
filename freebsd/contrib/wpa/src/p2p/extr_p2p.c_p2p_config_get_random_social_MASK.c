
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_freq_range_list {int dummy; } ;
struct p2p_config {int channels; } ;


 int FUNC_0 (int *,int *,int *,struct wpa_freq_range_list*,struct wpa_freq_range_list*) ;

int FUNC_1(struct p2p_config *VAR_0, u8 *VAR_1,
     u8 *VAR_2,
     struct wpa_freq_range_list *VAR_3,
     struct wpa_freq_range_list *VAR_4)
{
 return FUNC_0(&VAR_0->channels, VAR_1, VAR_2,
      VAR_3, VAR_4);
}
