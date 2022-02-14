
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_sm {scalar_t__ proto; int key_mgmt; int group_cipher; int pairwise_cipher; int mgmt_group_cipher; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,size_t,int ,int ,int ) ;
 int FUNC_1 (int *,size_t,int ,int ,int ,int ,struct wpa_sm*) ;
 int FUNC_2 (int *,size_t,int ,int ,int ) ;

int FUNC_3(struct wpa_sm *VAR_2, u8 *VAR_3, size_t VAR_4)
{
 if (VAR_2->proto == VAR_1)
  return FUNC_1(VAR_3, VAR_4,
       VAR_2->pairwise_cipher,
       VAR_2->group_cipher,
       VAR_2->key_mgmt, VAR_2->mgmt_group_cipher,
       VAR_2);







 else
  return FUNC_2(VAR_3, VAR_4,
       VAR_2->pairwise_cipher,
       VAR_2->group_cipher,
       VAR_2->key_mgmt);
}
