
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ifmedia_entry {int ifm_media; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int const FUNC_0 (int) ;

__attribute__((used)) static uint16_t
FUNC_1(struct ifmedia_entry *VAR_5)
{
 uint16_t VAR_6;

 VAR_6 = 0;
 switch (FUNC_0(VAR_5->ifm_media)) {
 case 128:
  VAR_6 |= VAR_3 | VAR_2 | VAR_1 | VAR_0;
  return (VAR_6);
 case 131:
  return (VAR_6);
 case 130:
  VAR_6 |= VAR_2;
  break;
 case 129:
  VAR_6 |= VAR_0;
  break;
 default:
  return (0);
 }

 if ((VAR_5->ifm_media & VAR_4) != 0) {
  if (FUNC_0(VAR_5->ifm_media) == 130)
   VAR_6 |= VAR_3;
  else
   VAR_6 |= VAR_1;
 }

 return (VAR_6);
}
