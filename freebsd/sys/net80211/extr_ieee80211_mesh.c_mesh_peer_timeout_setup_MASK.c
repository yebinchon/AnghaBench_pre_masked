
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_node {int ni_mlstate; scalar_t__ ni_mltval; int ni_mltimer; } ;





 int FUNC_0 (int *,scalar_t__,int ,struct ieee80211_node*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_1(struct ieee80211_node *VAR_4)
{
 switch (VAR_4->ni_mlstate) {
 case 129:
  VAR_4->ni_mltval = VAR_1;
  break;
 case 130:
  VAR_4->ni_mltval = VAR_0;
  break;
 case 128:
  VAR_4->ni_mltval = 0;
  break;
 default:
  VAR_4->ni_mltval = VAR_2;
  break;
 }
 if (VAR_4->ni_mltval)
  FUNC_0(&VAR_4->ni_mltimer, VAR_4->ni_mltval,
      VAR_3, VAR_4);
}
