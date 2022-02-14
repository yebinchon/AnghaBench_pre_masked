
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct wmeParams {int wmep_txopLimit; int wmep_logcwmax; int wmep_logcwmin; int wmep_aifsn; int wmep_acm; } ;
struct ieee80211vap {int dummy; } ;
struct TYPE_4__ {int acm; } ;
typedef TYPE_1__ paramType ;


 int FUNC_0 (struct ieee80211vap*,int ,char*,int ,char const*,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct wmeParams*,TYPE_1__ const*) ;
 int * VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct ieee80211vap *VAR_2, const char *VAR_3, int VAR_4,
 struct wmeParams *VAR_5, const paramType *VAR_6)
{
 VAR_5->wmep_acm = VAR_6->acm;
 FUNC_1(VAR_5, VAR_6);

 FUNC_0(VAR_2, VAR_0,
     "set %s (%s) [acm %u aifsn %u logcwmin %u logcwmax %u txop %u]\n",
     VAR_1[VAR_4], VAR_3,
     VAR_5->wmep_acm, VAR_5->wmep_aifsn, VAR_5->wmep_logcwmin,
     VAR_5->wmep_logcwmax, VAR_5->wmep_txopLimit);
}
