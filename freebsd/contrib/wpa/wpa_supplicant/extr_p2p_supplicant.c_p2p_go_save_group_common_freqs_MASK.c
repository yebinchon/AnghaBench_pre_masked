
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {unsigned int p2p_group_common_freqs_num; TYPE_1__* go_params; scalar_t__* p2p_group_common_freqs; } ;
struct p2p_go_neg_results {int dummy; } ;
struct TYPE_2__ {scalar_t__* freq_list; } ;


 unsigned int FUNC_0 (scalar_t__*) ;
 scalar_t__* FUNC_1 (unsigned int,int) ;
 int FUNC_2 (scalar_t__*) ;

__attribute__((used)) static void FUNC_3(struct wpa_supplicant *VAR_0,
        struct p2p_go_neg_results *VAR_1)
{
 unsigned int VAR_2, VAR_3 = FUNC_0(VAR_0->go_params->freq_list);

 VAR_0->p2p_group_common_freqs_num = 0;
 FUNC_2(VAR_0->p2p_group_common_freqs);
 VAR_0->p2p_group_common_freqs = FUNC_1(VAR_3, sizeof(int));
 if (!VAR_0->p2p_group_common_freqs)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  if (!VAR_0->go_params->freq_list[VAR_2])
   break;
  VAR_0->p2p_group_common_freqs[VAR_2] =
   VAR_0->go_params->freq_list[VAR_2];
 }
 VAR_0->p2p_group_common_freqs_num = VAR_2;
}
