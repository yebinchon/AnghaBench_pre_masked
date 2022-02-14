
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ieee80211_node {int * ni_challenge; int ni_vap; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int,struct ieee80211_node*,char*,char*) ;
 int VAR_4 ;

int
FUNC_2(struct ieee80211_node *VAR_5)
{
 if (VAR_5->ni_challenge == ((void*)0))
  VAR_5->ni_challenge = (uint32_t *)
      FUNC_0(VAR_0,
        VAR_4, VAR_3);
 if (VAR_5->ni_challenge == ((void*)0)) {
  FUNC_1(VAR_5->ni_vap,
      VAR_2 | VAR_1, VAR_5,
      "%s", "shared key challenge alloc failed");

 }
 return (VAR_5->ni_challenge != ((void*)0));
}
