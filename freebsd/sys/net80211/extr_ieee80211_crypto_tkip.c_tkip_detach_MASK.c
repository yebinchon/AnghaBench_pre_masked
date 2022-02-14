
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tkip_ctx {int dummy; } ;
struct ieee80211_key {struct tkip_ctx* wk_private; } ;


 int FUNC_0 (struct tkip_ctx*,int ) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct ieee80211_key *VAR_2)
{
 struct tkip_ctx *VAR_3 = VAR_2->wk_private;

 FUNC_0(VAR_3, VAR_0);
 FUNC_1(VAR_1 > 0, ("imbalanced attach/detach"));
 VAR_1--;
}
