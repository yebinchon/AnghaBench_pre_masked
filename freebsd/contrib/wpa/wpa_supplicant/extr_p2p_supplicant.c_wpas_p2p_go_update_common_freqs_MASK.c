
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int* p2p_group_common_freqs; unsigned int p2p_group_common_freqs_num; int p2p_group; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int* FUNC_0 (unsigned int,int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (struct wpa_supplicant*) ;
 int FUNC_3 (int ,int*,unsigned int*) ;
 int FUNC_4 (struct wpa_supplicant*,int ,char*) ;

__attribute__((used)) static void FUNC_5(struct wpa_supplicant *VAR_2)
{
 unsigned int VAR_3 = VAR_1;
 int *VAR_4;
 int VAR_5;

 FUNC_2(VAR_2);
 VAR_4 = FUNC_0(VAR_3, sizeof(int));
 if (!VAR_4)
  return;

 VAR_5 = FUNC_3(VAR_2->p2p_group, VAR_4, &VAR_3);
 if (VAR_5 < 0) {
  FUNC_4(VAR_2, VAR_0,
   "P2P: Failed to get group common freqs");
  FUNC_1(VAR_4);
  return;
 }

 FUNC_1(VAR_2->p2p_group_common_freqs);
 VAR_2->p2p_group_common_freqs = VAR_4;
 VAR_2->p2p_group_common_freqs_num = VAR_3;
 FUNC_2(VAR_2);
}
