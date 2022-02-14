
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ieee80211_node {int ni_mltval; int ni_mltimer; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int,int ,struct ieee80211_node*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct ieee80211_node *VAR_1)
{
 uint32_t VAR_2;

 VAR_2 = FUNC_0();
 VAR_1->ni_mltval += VAR_2 % VAR_1->ni_mltval;
 FUNC_1(&VAR_1->ni_mltimer, VAR_1->ni_mltval, VAR_0,
     VAR_1);
}
