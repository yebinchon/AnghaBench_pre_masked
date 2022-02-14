
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211vap {TYPE_1__* iv_ic; } ;
struct ieee80211req_wpaie2 {int wpa_ie; int rsn_ie; int wpa_macaddr; } ;
struct ieee80211req_wpaie {int dummy; } ;
struct ieee80211req {int i_len; int i_data; } ;
struct TYPE_4__ {int* wpa_ie; int* rsn_ie; } ;
struct ieee80211_node {TYPE_2__ ni_ies; } ;
struct TYPE_3__ {int ic_sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ieee80211req_wpaie2*,int ) ;
 int VAR_4 ;
 struct ieee80211req_wpaie2* FUNC_1 (int,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct ieee80211req_wpaie2*,int ,int) ;
 struct ieee80211_node* FUNC_4 (int *,struct ieee80211vap*,int ) ;
 int FUNC_5 (struct ieee80211_node*) ;
 int FUNC_6 (int ,int*,int) ;

__attribute__((used)) static int
FUNC_7(struct ieee80211vap *VAR_8,
 struct ieee80211req *VAR_9, int VAR_10)
{
 struct ieee80211_node *VAR_11;
 struct ieee80211req_wpaie2 *VAR_12;
 int VAR_13;

 if (VAR_9->i_len < VAR_3)
  return VAR_0;
 VAR_12 = FUNC_1(sizeof(*VAR_12), VAR_7,
     VAR_5 | VAR_6);
 if (VAR_12 == ((void*)0))
  return VAR_2;
 VAR_13 = FUNC_2(VAR_9->i_data, VAR_12->wpa_macaddr, VAR_3);
 if (VAR_13 != 0)
  goto bad;
 VAR_11 = FUNC_4(&VAR_8->iv_ic->ic_sta, VAR_8, VAR_12->wpa_macaddr);
 if (VAR_11 == ((void*)0)) {
  VAR_13 = VAR_1;
  goto bad;
 }
 if (VAR_11->ni_ies.wpa_ie != ((void*)0)) {
  int VAR_14 = VAR_11->ni_ies.wpa_ie[1] + 2;
  if (VAR_14 > sizeof(VAR_12->wpa_ie))
   VAR_14 = sizeof(VAR_12->wpa_ie);
  FUNC_6(VAR_12->wpa_ie, VAR_11->ni_ies.wpa_ie, VAR_14);
 }
 if (VAR_10 == VAR_4) {
  if (VAR_11->ni_ies.rsn_ie != ((void*)0)) {
   int VAR_15 = VAR_11->ni_ies.rsn_ie[1] + 2;
   if (VAR_15 > sizeof(VAR_12->rsn_ie))
    VAR_15 = sizeof(VAR_12->rsn_ie);
   FUNC_6(VAR_12->rsn_ie, VAR_11->ni_ies.rsn_ie, VAR_15);
  }
  if (VAR_9->i_len > sizeof(struct ieee80211req_wpaie2))
   VAR_9->i_len = sizeof(struct ieee80211req_wpaie2);
 } else {


  if (VAR_11->ni_ies.rsn_ie != ((void*)0)) {
   int VAR_16 = VAR_11->ni_ies.rsn_ie[1] + 2;
   if (VAR_16 > sizeof(VAR_12->wpa_ie))
    VAR_16 = sizeof(VAR_12->wpa_ie);
   FUNC_6(VAR_12->wpa_ie, VAR_11->ni_ies.rsn_ie, VAR_16);
  }
  if (VAR_9->i_len > sizeof(struct ieee80211req_wpaie))
   VAR_9->i_len = sizeof(struct ieee80211req_wpaie);
 }
 FUNC_5(VAR_11);
 VAR_13 = FUNC_3(VAR_12, VAR_9->i_data, VAR_9->i_len);
bad:
 FUNC_0(VAR_12, VAR_7);
 return VAR_13;
}
