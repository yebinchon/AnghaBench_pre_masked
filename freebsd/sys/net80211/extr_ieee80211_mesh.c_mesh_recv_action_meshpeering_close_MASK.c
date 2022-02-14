
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct ieee80211_node {int ni_mlstate; int ni_mllid; int ni_mlpid; int ni_vap; } ;
struct ieee80211_meshpeer_ie {int dummy; } ;
struct ieee80211_frame {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int FUNC_0 (int ,int,struct ieee80211_node*,char*,char*) ;
 int VAR_4 ;
 int FUNC_1 (struct ieee80211_node*,int ,int ,int *) ;
 int FUNC_2 (struct ieee80211_node*,int const) ;
 struct ieee80211_meshpeer_ie* FUNC_3 (struct ieee80211_node*,struct ieee80211_frame const*,int const*,int const*,struct ieee80211_meshpeer_ie*,int ) ;
 int FUNC_4 (struct ieee80211_node*) ;
 int FUNC_5 (struct ieee80211_node*) ;

__attribute__((used)) static int
FUNC_6(struct ieee80211_node *VAR_5,
 const struct ieee80211_frame *VAR_6,
 const uint8_t *VAR_7, const uint8_t *VAR_8)
{
 struct ieee80211_meshpeer_ie VAR_9;
 const struct ieee80211_meshpeer_ie *VAR_10;
 uint16_t VAR_11[3];


 VAR_10 = FUNC_3(VAR_5, VAR_6, VAR_7+2, VAR_8, &VAR_9,
     VAR_1);
 if (VAR_10 == ((void*)0)) {
  return 0;
 }







 FUNC_0(VAR_5->ni_vap, VAR_2 | VAR_3,
     VAR_5, "%s", "recv PEER CLOSE");

 switch (VAR_5->ni_mlstate) {
 case 130:

  break;
 case 129:
 case 128:
 case 133:
 case 132:
  VAR_11[0] = VAR_5->ni_mlpid;
  VAR_11[1] = VAR_5->ni_mllid;
  VAR_11[2] = VAR_4;
  FUNC_1(VAR_5,
      VAR_0,
      VAR_1,
      VAR_11);
  FUNC_2(VAR_5, 131);
  FUNC_4(VAR_5);
  break;
 case 131:
  FUNC_2(VAR_5, 130);
  FUNC_5(VAR_5);
  break;
 }
 return 0;
}
