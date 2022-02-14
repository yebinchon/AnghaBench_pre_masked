
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ieee80211_hdr {int const* addr3; int const* addr1; int const* addr2; int frame_control; } ;



 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;




 int FUNC_2 (int ) ;

const u8 * FUNC_3(const struct ieee80211_hdr *VAR_1, size_t VAR_2)
{
 u16 VAR_3, VAR_4, VAR_5;





 if (VAR_2 < 16)
  return ((void*)0);

 VAR_3 = FUNC_2(VAR_1->frame_control);
 VAR_4 = FUNC_1(VAR_3);
 VAR_5 = FUNC_0(VAR_3);

 switch (VAR_4) {
 case 129:
  if (VAR_2 < 24)
   return ((void*)0);
  switch (VAR_3 & (132 | 131)) {
  case 132 | 131:
  case 131:
   return VAR_1->addr1;
  case 132:
   return VAR_1->addr2;
  default:
   return ((void*)0);
  }
 case 130:
  if (VAR_5 != VAR_0)
   return ((void*)0);
  return VAR_1->addr1;
 case 128:
  return VAR_1->addr3;
 default:
  return ((void*)0);
 }
}
