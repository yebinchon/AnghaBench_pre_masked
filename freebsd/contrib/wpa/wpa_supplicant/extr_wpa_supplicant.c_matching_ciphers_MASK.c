
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ssid {int group_cipher; int pairwise_cipher; } ;
struct wpa_ie_data {int group_cipher; int pairwise_cipher; int has_pairwise; int has_group; } ;


 void* FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct wpa_ssid *VAR_0, struct wpa_ie_data *VAR_1,
       int VAR_2)
{
 if (!VAR_1->has_group)
  VAR_1->group_cipher = FUNC_0(VAR_2);
 if (!VAR_1->has_pairwise)
  VAR_1->pairwise_cipher = FUNC_0(VAR_2);
 return (VAR_1->group_cipher & VAR_0->group_cipher) &&
  (VAR_1->pairwise_cipher & VAR_0->pairwise_cipher);
}
