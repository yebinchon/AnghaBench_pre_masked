
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef scalar_t__ sldns_pkt_section ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_0(sldns_pkt_section VAR_2, uint16_t VAR_3, uint16_t VAR_4,
 int VAR_5)
{
 if(VAR_5)
  return 1;

 if(VAR_2 == VAR_1) {
  if(VAR_4 == VAR_0 || VAR_4 == VAR_3)
   return 1;
 }

 switch(VAR_3) {
  case 128:
  case 134:
  case 130:
  case 135:
  case 129:
  case 133:
  case 136:
  case 132:
  case 131:
   return 0;
 }
 return 1;
}
