
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct cfg80211_scan_request {int n_ssids; int n_channels; scalar_t__ flags; scalar_t__ ie; int ie_len; TYPE_2__** channels; TYPE_1__* ssids; } ;
struct cfg80211_registered_device {int sched_scan_mtx; struct cfg80211_scan_request* scan_req; } ;
struct TYPE_4__ {scalar_t__ center_freq; } ;
struct TYPE_3__ {scalar_t__ ssid; int ssid_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_5,
    struct cfg80211_registered_device *VAR_6)
{
 struct cfg80211_scan_request *VAR_7 = VAR_6->scan_req;
 struct nlattr *VAR_8;
 int VAR_9;

 FUNC_1(&VAR_6->sched_scan_mtx);

 if (FUNC_0(!VAR_7))
  return 0;

 VAR_8 = FUNC_3(VAR_5, VAR_4);
 if (!VAR_8)
  goto nla_put_failure;
 for (VAR_9 = 0; VAR_9 < VAR_7->n_ssids; VAR_9++) {
  if (FUNC_4(VAR_5, VAR_9, VAR_7->ssids[VAR_9].ssid_len, VAR_7->ssids[VAR_9].ssid))
   goto nla_put_failure;
 }
 FUNC_2(VAR_5, VAR_8);

 VAR_8 = FUNC_3(VAR_5, VAR_3);
 if (!VAR_8)
  goto nla_put_failure;
 for (VAR_9 = 0; VAR_9 < VAR_7->n_channels; VAR_9++) {
  if (FUNC_5(VAR_5, VAR_9, VAR_7->channels[VAR_9]->center_freq))
   goto nla_put_failure;
 }
 FUNC_2(VAR_5, VAR_8);

 if (VAR_7->ie &&
     FUNC_4(VAR_5, VAR_1, VAR_7->ie_len, VAR_7->ie))
  goto nla_put_failure;

 if (VAR_7->flags)
  FUNC_5(VAR_5, VAR_2, VAR_7->flags);

 return 0;
 nla_put_failure:
 return -VAR_0;
}
