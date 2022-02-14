
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ieee80211_node {int ni_mlstate; int ni_mlhtimer; int ni_mlhcnt; int ni_mlpid; int ni_mlrcnt; int ni_vap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int FUNC_0 (int ,int ,struct ieee80211_node*,char*,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ,int ,struct ieee80211_node*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct ieee80211_node*,int ,int ,int *) ;
 int FUNC_3 (struct ieee80211_node*,int const) ;
 int VAR_9 ;
 int FUNC_4 (struct ieee80211_node*) ;
 int FUNC_5 (struct ieee80211_node*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_10)
{
 struct ieee80211_node *VAR_11 = (struct ieee80211_node *)VAR_10;
 uint16_t VAR_12[3];

 FUNC_0(VAR_11->ni_vap, VAR_3,
     VAR_11, "mesh link timeout, state %d, retry counter %d",
     VAR_11->ni_mlstate, VAR_11->ni_mlrcnt);

 switch (VAR_11->ni_mlstate) {
 case 130:
 case 132:
  break;
 case 128:
 case 129:
  if (VAR_11->ni_mlrcnt == VAR_8) {
   VAR_12[0] = VAR_11->ni_mlpid;
   VAR_12[2] = VAR_5;
   FUNC_2(VAR_11,
       VAR_0,
       VAR_1, VAR_12);
   VAR_11->ni_mlrcnt = 0;
   FUNC_3(VAR_11, 131);
   FUNC_5(VAR_11);
  } else {
   VAR_12[0] = VAR_11->ni_mlpid;
   FUNC_2(VAR_11,
       VAR_0,
       VAR_2, VAR_12);
   VAR_11->ni_mlrcnt++;
   FUNC_4(VAR_11);
  }
  break;
 case 133:
  VAR_12[0] = VAR_11->ni_mlpid;
  VAR_12[2] = VAR_4;
  FUNC_2(VAR_11,
      VAR_0,
      VAR_1, VAR_12);
  FUNC_3(VAR_11, 131);
  FUNC_5(VAR_11);
  break;
 case 131:
  VAR_11->ni_mlhcnt++;
  if (VAR_11->ni_mlhcnt >= VAR_7)
   FUNC_1(&VAR_11->ni_mlhtimer,
       VAR_6,
       VAR_9, VAR_11);
  FUNC_3(VAR_11, 130);
  break;
 }
}
