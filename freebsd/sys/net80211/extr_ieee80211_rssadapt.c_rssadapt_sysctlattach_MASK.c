
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct ieee80211vap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int,struct ieee80211vap*,int ,int ,char*,char*) ;
 int FUNC_1 (struct sysctl_oid*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(struct ieee80211vap *VAR_4,
    struct sysctl_ctx_list *VAR_5, struct sysctl_oid *VAR_6)
{

 FUNC_0(VAR_5, FUNC_1(VAR_6), VAR_2,
     "rssadapt_rate_interval", VAR_1 | VAR_0, VAR_4,
     0, VAR_3, "I", "rssadapt operation interval (ms)");
}
