
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct ieee80211vap {struct ieee80211_amrr* iv_rs; } ;
struct ieee80211_amrr {int amrr_min_success_threshold; int amrr_max_success_threshold; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int,struct ieee80211vap*,int ,int ,char*,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,int ,int ,char*,int,int *,int ,char*) ;
 int FUNC_2 (struct sysctl_oid*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3(struct ieee80211vap *VAR_4,
    struct sysctl_ctx_list *VAR_5, struct sysctl_oid *VAR_6)
{
 struct ieee80211_amrr *VAR_7 = VAR_4->iv_rs;

 if (!VAR_7)
  return;

 FUNC_0(VAR_5, FUNC_2(VAR_6), VAR_2,
     "amrr_rate_interval", VAR_1 | VAR_0, VAR_4,
     0, VAR_3, "I", "amrr operation interval (ms)");

 FUNC_1(VAR_5, FUNC_2(VAR_6), VAR_2,
     "amrr_max_sucess_threshold", VAR_0,
     &VAR_7->amrr_max_success_threshold, 0, "");
 FUNC_1(VAR_5, FUNC_2(VAR_6), VAR_2,
     "amrr_min_sucess_threshold", VAR_0,
     &VAR_7->amrr_min_success_threshold, 0, "");
}
