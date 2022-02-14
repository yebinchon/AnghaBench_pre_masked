
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




 int FUNC_0 (int ) ;

__attribute__((used)) static uint16_t
FUNC_1(struct ifmedia_entry *VAR_4)
{
 uint16_t VAR_5;

 VAR_5 = 0;
 switch (FUNC_0(VAR_4->ifm_media)) {
 case 128:
  VAR_5 |= VAR_3 | VAR_2 | VAR_1 | VAR_0;
  break;
 case 131:
  break;
 case 130:
  VAR_5 |= VAR_2 | VAR_3;
  break;
 case 129:
  VAR_5 |= VAR_0 | VAR_1;
  break;
 default:
  break;
 }

 return (VAR_5);
}
