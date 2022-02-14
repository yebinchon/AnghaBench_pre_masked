
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct mesh_setup {int user_mpm; void* is_secure; void* is_authenticated; int ie_len; int ie; int path_metric; int path_sel_proto; int sync_method; } ;
struct genl_info {int * attrs; struct cfg80211_registered_device** user_ptr; } ;
struct TYPE_2__ {int features; } ;
struct cfg80211_registered_device {TYPE_1__ wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 int FUNC_0 (struct nlattr*) ;
 int VAR_17 ;
 int FUNC_1 (struct nlattr*) ;
 void* FUNC_2 (struct nlattr*) ;
 scalar_t__ FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr*) ;
 scalar_t__ FUNC_5 (struct nlattr**,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct genl_info *VAR_18,
         struct mesh_setup *VAR_19)
{
 struct cfg80211_registered_device *VAR_20 = VAR_18->user_ptr[0];
 struct nlattr *VAR_21[VAR_9 + 1];

 if (!VAR_18->attrs[VAR_7])
  return -VAR_0;
 if (FUNC_5(VAR_21, VAR_9,
        VAR_18->attrs[VAR_7],
        VAR_17))
  return -VAR_0;

 if (VAR_21[VAR_12])
  VAR_19->sync_method =
  (FUNC_3(VAR_21[VAR_12])) ?
   VAR_6 :
   VAR_5;

 if (VAR_21[VAR_11])
  VAR_19->path_sel_proto =
  (FUNC_3(VAR_21[VAR_11])) ?
   VAR_4 :
   VAR_3;

 if (VAR_21[VAR_10])
  VAR_19->path_metric =
  (FUNC_3(VAR_21[VAR_10])) ?
   VAR_2 :
   VAR_1;


 if (VAR_21[VAR_13]) {
  struct nlattr *VAR_22 =
   VAR_21[VAR_13];
  if (!FUNC_0(VAR_22))
   return -VAR_0;
  VAR_19->ie = FUNC_1(VAR_22);
  VAR_19->ie_len = FUNC_4(VAR_22);
 }
 if (VAR_21[VAR_16] &&
     !(VAR_20->wiphy.features & VAR_8))
  return -VAR_0;
 VAR_19->user_mpm = FUNC_2(VAR_21[VAR_16]);
 VAR_19->is_authenticated = FUNC_2(VAR_21[VAR_15]);
 VAR_19->is_secure = FUNC_2(VAR_21[VAR_14]);
 if (VAR_19->is_secure)
  VAR_19->user_mpm = 1;

 return 0;
}
