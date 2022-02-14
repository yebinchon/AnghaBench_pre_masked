
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct sta_info {int dummy; } ;
struct mesh_path {int flags; scalar_t__ sn; scalar_t__ metric; unsigned long exp_time; int state_lock; } ;
struct TYPE_2__ {int const* addr; } ;
struct ieee80211_sub_if_data {TYPE_1__ vif; struct ieee80211_local* local; } ;
struct ieee80211_mgmt {int * sa; } ;
struct ieee80211_local {int dummy; } ;
typedef enum mpath_frame_type { ____Placeholder_mpath_frame_type } mpath_frame_type ;


 scalar_t__ FUNC_0 (struct mesh_path*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 unsigned long FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 int * FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (int const*) ;
 unsigned long FUNC_5 (int const*) ;
 scalar_t__ FUNC_6 (int const*) ;
 int * FUNC_7 (int const*) ;
 scalar_t__ FUNC_8 (int const*) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 unsigned long FUNC_10 (unsigned long) ;
 scalar_t__ FUNC_11 (struct ieee80211_local*,struct sta_info*) ;
 scalar_t__ FUNC_12 (int const*,int const*) ;
 int FUNC_13 (struct mesh_path*) ;
 struct mesh_path* FUNC_14 (struct ieee80211_sub_if_data*,int const*) ;
 int FUNC_15 (struct mesh_path*,struct sta_info*) ;
 struct mesh_path* FUNC_16 (struct ieee80211_sub_if_data*,int const*) ;
 int FUNC_17 (struct mesh_path*) ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 struct sta_info* FUNC_22 (struct ieee80211_sub_if_data*,int *) ;
 scalar_t__ FUNC_23 (unsigned long,unsigned long) ;

__attribute__((used)) static u32 FUNC_24(struct ieee80211_sub_if_data *VAR_4,
          struct ieee80211_mgmt *VAR_5,
          const u8 *VAR_6, enum mpath_frame_type VAR_7)
{
 struct ieee80211_local *VAR_8 = VAR_4->local;
 struct mesh_path *VAR_9;
 struct sta_info *VAR_10;
 bool VAR_11;
 const u8 *VAR_12, *VAR_13;
 u32 VAR_14, VAR_15;
 unsigned long VAR_16, VAR_17;
 u32 VAR_18, VAR_19;
 bool VAR_20 = 1;

 FUNC_18();
 VAR_10 = FUNC_22(VAR_4, VAR_5->sa);
 if (!VAR_10) {
  FUNC_19();
  return 0;
 }

 VAR_18 = FUNC_11(VAR_8, VAR_10);

 VAR_11 = 1;

 switch (VAR_7) {
 case 128:
  VAR_12 = FUNC_7(VAR_6);
  VAR_14 = FUNC_8(VAR_6);
  VAR_16 = FUNC_5(VAR_6);
  VAR_15 = FUNC_6(VAR_6);
  break;
 case 129:





  VAR_12 = FUNC_3(VAR_6);
  VAR_14 = FUNC_4(VAR_6);
  VAR_16 = FUNC_1(VAR_6);
  VAR_15 = FUNC_2(VAR_6);
  break;
 default:
  FUNC_19();
  return 0;
 }
 VAR_19 = VAR_15 + VAR_18;
 if (VAR_19 < VAR_15)
  VAR_19 = VAR_0;
 VAR_17 = FUNC_10(VAR_16);

 if (FUNC_12(VAR_12, VAR_4->vif.addr)) {



  VAR_20 = 0;
  VAR_11 = 0;
 } else {
  VAR_9 = FUNC_16(VAR_4, VAR_12);
  if (VAR_9) {
   FUNC_20(&VAR_9->state_lock);
   if (VAR_9->flags & VAR_2)
    VAR_11 = 0;
   else if ((VAR_9->flags & VAR_1) &&
       (VAR_9->flags & VAR_3)) {
    if (FUNC_9(VAR_9->sn, VAR_14) ||
        (VAR_9->sn == VAR_14 &&
         VAR_19 >= VAR_9->metric)) {
     VAR_20 = 0;
     VAR_11 = 0;
    }
   }
  } else {
   VAR_9 = FUNC_14(VAR_4, VAR_12);
   if (FUNC_0(VAR_9)) {
    FUNC_19();
    return 0;
   }
   FUNC_20(&VAR_9->state_lock);
  }

  if (VAR_11) {
   FUNC_15(VAR_9, VAR_10);
   VAR_9->flags |= VAR_3;
   VAR_9->metric = VAR_19;
   VAR_9->sn = VAR_14;
   VAR_9->exp_time = FUNC_23(VAR_9->exp_time, VAR_17)
       ? VAR_9->exp_time : VAR_17;
   FUNC_13(VAR_9);
   FUNC_21(&VAR_9->state_lock);
   FUNC_17(VAR_9);



  } else
   FUNC_21(&VAR_9->state_lock);
 }


 VAR_13 = VAR_5->sa;
 if (FUNC_12(VAR_12, VAR_13))
  VAR_11 = 0;
 else {
  VAR_11 = 1;

  VAR_9 = FUNC_16(VAR_4, VAR_13);
  if (VAR_9) {
   FUNC_20(&VAR_9->state_lock);
   if ((VAR_9->flags & VAR_2) ||
    ((VAR_9->flags & VAR_1) &&
     (VAR_18 > VAR_9->metric)))
    VAR_11 = 0;
  } else {
   VAR_9 = FUNC_14(VAR_4, VAR_13);
   if (FUNC_0(VAR_9)) {
    FUNC_19();
    return 0;
   }
   FUNC_20(&VAR_9->state_lock);
  }

  if (VAR_11) {
   FUNC_15(VAR_9, VAR_10);
   VAR_9->metric = VAR_18;
   VAR_9->exp_time = FUNC_23(VAR_9->exp_time, VAR_17)
       ? VAR_9->exp_time : VAR_17;
   FUNC_13(VAR_9);
   FUNC_21(&VAR_9->state_lock);
   FUNC_17(VAR_9);
  } else
   FUNC_21(&VAR_9->state_lock);
 }

 FUNC_19();

 return VAR_20 ? VAR_19 : 0;
}
