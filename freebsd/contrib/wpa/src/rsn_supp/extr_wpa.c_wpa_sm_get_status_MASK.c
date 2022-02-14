
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_sm {scalar_t__ mfp; int mgmt_group_cipher; int ap_rsn_ie_len; scalar_t__ ap_rsn_ie; int proto; int key_mgmt; int group_cipher; int pairwise_cipher; } ;
struct wpa_ie_data {int capabilities; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,char*,int,int ,...) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,struct wpa_ie_data*) ;

int FUNC_5(struct wpa_sm *VAR_3, char *VAR_4, size_t VAR_5,
        int VAR_6)
{
 char *VAR_7 = VAR_4, *VAR_8 = VAR_4 + VAR_5;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_7, VAR_8 - VAR_7,
     "pairwise_cipher=%s\n"
     "group_cipher=%s\n"
     "key_mgmt=%s\n",
     FUNC_2(VAR_3->pairwise_cipher),
     FUNC_2(VAR_3->group_cipher),
     FUNC_3(VAR_3->key_mgmt, VAR_3->proto));
 if (FUNC_1(VAR_8 - VAR_7, VAR_9))
  return VAR_7 - VAR_4;
 VAR_7 += VAR_9;

 if (VAR_3->mfp != VAR_0 && VAR_3->ap_rsn_ie) {
  struct wpa_ie_data VAR_10;
  if (FUNC_4(VAR_3->ap_rsn_ie, VAR_3->ap_rsn_ie_len, &VAR_10)
      >= 0 &&
      VAR_10.capabilities & (VAR_2 |
     VAR_1)) {
   VAR_9 = FUNC_0(VAR_7, VAR_8 - VAR_7, "pmf=%d\n"
       "mgmt_group_cipher=%s\n",
       (VAR_10.capabilities &
        VAR_2) ? 2 : 1,
       FUNC_2(
        VAR_3->mgmt_group_cipher));
   if (FUNC_1(VAR_8 - VAR_7, VAR_9))
    return VAR_7 - VAR_4;
   VAR_7 += VAR_9;
  }
 }

 return VAR_7 - VAR_4;
}
