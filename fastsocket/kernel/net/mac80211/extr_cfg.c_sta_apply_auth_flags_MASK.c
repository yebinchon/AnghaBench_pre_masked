
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sta_info {int dummy; } ;
struct ieee80211_local {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct sta_info*,int ) ;
 scalar_t__ FUNC_2 (struct sta_info*,int ) ;

__attribute__((used)) static int FUNC_3(struct ieee80211_local *VAR_10,
    struct sta_info *VAR_11,
    u32 VAR_12, u32 VAR_13)
{
 int VAR_14;

 if (VAR_12 & FUNC_0(VAR_5) &&
     VAR_13 & FUNC_0(VAR_5) &&
     !FUNC_2(VAR_11, VAR_8)) {
  VAR_14 = FUNC_1(VAR_11, VAR_1);
  if (VAR_14)
   return VAR_14;
 }

 if (VAR_12 & FUNC_0(VAR_4) &&
     VAR_13 & FUNC_0(VAR_4) &&
     !FUNC_2(VAR_11, VAR_7)) {
  VAR_14 = FUNC_1(VAR_11, VAR_0);
  if (VAR_14)
   return VAR_14;
 }

 if (VAR_12 & FUNC_0(VAR_6)) {
  if (VAR_13 & FUNC_0(VAR_6))
   VAR_14 = FUNC_1(VAR_11, VAR_2);
  else if (FUNC_2(VAR_11, VAR_9))
   VAR_14 = FUNC_1(VAR_11, VAR_0);
  else
   VAR_14 = 0;
  if (VAR_14)
   return VAR_14;
 }

 if (VAR_12 & FUNC_0(VAR_4) &&
     !(VAR_13 & FUNC_0(VAR_4)) &&
     FUNC_2(VAR_11, VAR_7)) {
  VAR_14 = FUNC_1(VAR_11, VAR_1);
  if (VAR_14)
   return VAR_14;
 }

 if (VAR_12 & FUNC_0(VAR_5) &&
     !(VAR_13 & FUNC_0(VAR_5)) &&
     FUNC_2(VAR_11, VAR_8)) {
  VAR_14 = FUNC_1(VAR_11, VAR_3);
  if (VAR_14)
   return VAR_14;
 }

 return 0;
}
