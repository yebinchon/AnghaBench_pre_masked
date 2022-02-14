
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int netdissect_options ;



 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;

 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;

 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_9 ;
 int FUNC_5 (int *) ;




__attribute__((used)) static int
FUNC_6(netdissect_options *VAR_10,
                      uint16_t VAR_11)
{
 int VAR_12;

 switch (FUNC_4(VAR_11)) {
 case 128:
  return VAR_9;
 case 130:
  switch (FUNC_2(VAR_11)) {
  case 135:
   return VAR_3;
  case 137:
   return VAR_1;
  case 138:
   return VAR_2;
  case 132:
   return VAR_7;
  case 131:
   return VAR_8;
  case 134:
   return VAR_4;
  case 139:
   return VAR_0;
  case 136:
   return VAR_6;
  case 133:
   return VAR_5;
  default:
   FUNC_5((VAR_10, "unknown 802.11 ctrl frame subtype (%d)", FUNC_2(VAR_11)));
   return 0;
  }
 case 129:
  VAR_12 = (FUNC_3(VAR_11) && FUNC_1(VAR_11)) ? 30 : 24;
  if (FUNC_0(FUNC_2(VAR_11)))
   VAR_12 += 2;
  return VAR_12;
 default:
  FUNC_5((VAR_10, "unknown 802.11 frame type (%d)", FUNC_4(VAR_11)));
  return 0;
 }
}
