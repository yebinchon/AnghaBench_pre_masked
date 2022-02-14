
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {int * dpp_pkex; int dpp; } ;
struct dpp_bootstrap_info {int dummy; } ;


 struct dpp_bootstrap_info* FUNC_0 (int ,int *,int const*,unsigned int) ;

__attribute__((used)) static struct dpp_bootstrap_info *
FUNC_1(struct wpa_supplicant *VAR_0, const u8 *VAR_1,
       unsigned int VAR_2)
{
 struct dpp_bootstrap_info *VAR_3;

 VAR_3 = FUNC_0(VAR_0->dpp, VAR_0->dpp_pkex, VAR_1, VAR_2);
 if (!VAR_3)
  return ((void*)0);
 VAR_0->dpp_pkex = ((void*)0);
 return VAR_3;
}
