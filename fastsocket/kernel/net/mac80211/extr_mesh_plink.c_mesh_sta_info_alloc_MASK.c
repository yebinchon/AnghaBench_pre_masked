
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sta_info {int dummy; } ;
struct ieee802_11_elems {int total_len; int ie_start; } ;
struct TYPE_3__ {int security; scalar_t__ user_mpm; } ;
struct TYPE_4__ {TYPE_1__ mesh; } ;
struct ieee80211_sub_if_data {int dev; TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sta_info* FUNC_0 (struct ieee80211_sub_if_data*,int *) ;
 int FUNC_1 (int ,int *,int ,int ,int ) ;

__attribute__((used)) static struct sta_info *
FUNC_2(struct ieee80211_sub_if_data *VAR_2, u8 *VAR_3,
      struct ieee802_11_elems *VAR_4)
{
 struct sta_info *VAR_5 = ((void*)0);


 if (VAR_2->u.mesh.user_mpm ||
     VAR_2->u.mesh.security & VAR_1)
  FUNC_1(VAR_2->dev, VAR_3,
         VAR_4->ie_start,
         VAR_4->total_len,
         VAR_0);
 else
  VAR_5 = FUNC_0(VAR_2, VAR_3);

 return VAR_5;
}
