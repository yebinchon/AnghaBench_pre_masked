
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_authenticator {int dummy; } ;


 int VAR_0 ;
 int * VAR_1 ;
 struct ieee80211_authenticator const** VAR_2 ;
 int FUNC_0 (int ) ;

const struct ieee80211_authenticator *
FUNC_1(int VAR_3)
{
 if (VAR_3 >= VAR_0)
  return ((void*)0);
 if (VAR_2[VAR_3] == ((void*)0))
  FUNC_0(VAR_1[VAR_3]);
 return VAR_2[VAR_3];
}
