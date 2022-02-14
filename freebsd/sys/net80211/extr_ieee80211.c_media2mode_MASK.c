
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct ifmedia_entry {int ifm_media; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;







 int VAR_11 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(const struct ifmedia_entry *VAR_12, uint32_t VAR_13, uint16_t *VAR_14)
{
 switch (FUNC_0(VAR_12->ifm_media)) {
 case 133:
  *VAR_14 = VAR_1;
  break;
 case 132:
  *VAR_14 = VAR_2;
  break;
 case 131:
  *VAR_14 = VAR_3;
  break;
 case 128:
  *VAR_14 = VAR_7;
  break;
 case 130:
  *VAR_14 = VAR_4;
  break;
 case 129:
  *VAR_14 = VAR_5;
  break;
 case 134:
  *VAR_14 = VAR_6;
  break;
 default:
  return 0;
 }




 if (VAR_12->ifm_media & VAR_11) {
  if (*VAR_14 == VAR_1) {
   if (VAR_13 & VAR_0)
    *VAR_14 = VAR_9;
   else
    *VAR_14 = VAR_8;
  } else if (*VAR_14 == VAR_3)
   *VAR_14 = VAR_10;
  else
   return 0;
 }

 return 1;
}
