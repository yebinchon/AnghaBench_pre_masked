
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211vap {scalar_t__ iv_opmode; TYPE_1__* iv_des_ssid; } ;
struct ieee80211req_mlme {scalar_t__ im_op; int im_reason; int im_macaddr; int im_ssid; int im_ssid_len; } ;
struct ieee80211req {int i_len; int i_data; } ;
typedef int mlme ;
struct TYPE_2__ {int ssid; int len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,struct ieee80211req_mlme*,int) ;
 int FUNC_1 (struct ieee80211vap*,int ,int ,int ) ;
 int FUNC_2 (struct ieee80211vap*,int ,int ,int ) ;
 int FUNC_3 (struct ieee80211vap*,scalar_t__,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct ieee80211vap *VAR_5, struct ieee80211req *VAR_6)
{
 struct ieee80211req_mlme VAR_7;
 int VAR_8;

 if (VAR_6->i_len != sizeof(VAR_7))
  return VAR_0;
 VAR_8 = FUNC_0(VAR_6->i_data, &VAR_7, sizeof(VAR_7));
 if (VAR_8)
  return VAR_8;
 if (VAR_5->iv_opmode == VAR_4 &&
     VAR_7.im_op == VAR_1)
  return FUNC_2(VAR_5, VAR_7.im_macaddr,
      VAR_5->iv_des_ssid[0].len, VAR_5->iv_des_ssid[0].ssid);
 else if ((VAR_5->iv_opmode == VAR_3 ||
     VAR_5->iv_opmode == VAR_2) &&
     VAR_7.im_op == VAR_1)
  return FUNC_1(VAR_5, VAR_7.im_macaddr,
      VAR_7.im_ssid_len, VAR_7.im_ssid);
 else
  return FUNC_3(VAR_5, VAR_7.im_op,
      VAR_7.im_macaddr, VAR_7.im_reason);
}
