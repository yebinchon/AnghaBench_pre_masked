
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct wireless_dev {TYPE_2__* conn; int wiphy; } ;
struct cfg80211_registered_device {int conn_work; } ;
struct cfg80211_bss {int channel; int bssid; } ;
struct TYPE_3__ {int channel; int bssid; int ssid_len; int ssid; scalar_t__ privacy; } ;
struct TYPE_4__ {int state; TYPE_1__ params; int bssid; } ;


 int FUNC_0 (struct wireless_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cfg80211_bss* FUNC_1 (int ,int ,int ,int ,int ,int,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;
 struct cfg80211_registered_device* FUNC_4 (int ) ;

__attribute__((used)) static struct cfg80211_bss *FUNC_5(struct wireless_dev *VAR_4)
{
 struct cfg80211_registered_device *VAR_5 = FUNC_4(VAR_4->wiphy);
 struct cfg80211_bss *VAR_6;
 u16 VAR_7 = VAR_2;

 FUNC_0(VAR_4);

 if (VAR_4->conn->params.privacy)
  VAR_7 |= VAR_3;

 VAR_6 = FUNC_1(VAR_4->wiphy, VAR_4->conn->params.channel,
          VAR_4->conn->params.bssid,
          VAR_4->conn->params.ssid,
          VAR_4->conn->params.ssid_len,
          VAR_2 | VAR_3,
          VAR_7);
 if (!VAR_6)
  return ((void*)0);

 FUNC_2(VAR_4->conn->bssid, VAR_6->bssid, VAR_1);
 VAR_4->conn->params.bssid = VAR_4->conn->bssid;
 VAR_4->conn->params.channel = VAR_6->channel;
 VAR_4->conn->state = VAR_0;
 FUNC_3(&VAR_5->conn_work);

 return VAR_6;
}
