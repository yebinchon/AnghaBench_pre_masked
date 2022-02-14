
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct ieee80211_node {int ni_macaddr; } ;


 int FUNC_0 (struct ieee80211_node*,struct sbuf*) ;
 int FUNC_1 (struct sbuf*,char*,...) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, struct ieee80211_node *VAR_1)
{

 struct sbuf *VAR_2 = (struct sbuf *) VAR_0;
 FUNC_1(VAR_2, "MAC: %6D\n", VAR_1->ni_macaddr, ":");
 FUNC_0(VAR_1, VAR_2);
 FUNC_1(VAR_2, "\n");
}
