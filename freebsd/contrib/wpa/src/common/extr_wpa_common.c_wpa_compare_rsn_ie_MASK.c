
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_ie_data {scalar_t__ proto; scalar_t__ pairwise_cipher; scalar_t__ group_cipher; scalar_t__ key_mgmt; scalar_t__ capabilities; scalar_t__ mgmt_group_cipher; } ;


 scalar_t__ FUNC_0 (int const*,int const*,size_t) ;
 scalar_t__ FUNC_1 (int const*,size_t,struct wpa_ie_data*) ;

int FUNC_2(int VAR_0,
         const u8 *VAR_1, size_t VAR_2,
         const u8 *VAR_3, size_t VAR_4)
{
 if (VAR_1 == ((void*)0) || VAR_3 == ((void*)0))
  return -1;

 if (VAR_2 == VAR_4 && FUNC_0(VAR_1, VAR_3, VAR_2) == 0)
  return 0;
 return -1;
}
