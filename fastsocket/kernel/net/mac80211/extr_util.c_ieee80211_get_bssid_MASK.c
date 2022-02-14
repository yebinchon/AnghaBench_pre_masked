
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_hdr {int * addr1; int * addr2; int * addr3; int frame_control; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
typedef int __le16 ;





 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;

u8 *FUNC_8(struct ieee80211_hdr *VAR_0, size_t VAR_1,
   enum nl80211_iftype VAR_2)
{
 __le16 VAR_3 = VAR_0->frame_control;


 if (VAR_1 < 16)
  return ((void*)0);

 if (FUNC_5(VAR_3)) {
  if (VAR_1 < 24)
   return ((void*)0);

  if (FUNC_0(VAR_3))
   return ((void*)0);
  if (FUNC_2(VAR_3))
   return VAR_0->addr1;
  if (FUNC_1(VAR_3))
   return VAR_0->addr2;

  return VAR_0->addr3;
 }

 if (FUNC_6(VAR_3)) {
  if (VAR_1 < 24)
   return ((void*)0);
  return VAR_0->addr3;
 }

 if (FUNC_4(VAR_3)) {
  if(FUNC_7(VAR_3))
   return VAR_0->addr1;

  if (FUNC_3(VAR_3)) {
   switch (VAR_2) {
   case 128:
    return VAR_0->addr2;
   case 130:
   case 129:
    return VAR_0->addr1;
   default:
    break;
   }
  }
 }

 return ((void*)0);
}
