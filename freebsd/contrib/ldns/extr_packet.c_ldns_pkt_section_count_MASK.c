
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int ldns_pkt_section ;
typedef int ldns_pkt ;
 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*) ;

uint16_t
FUNC_4(const ldns_pkt *VAR_0, ldns_pkt_section VAR_1)
{
 switch(VAR_1) {
 case 128:
  return FUNC_3(VAR_0);
 case 132:
  return FUNC_0(VAR_0);
 case 129:
  return FUNC_2(VAR_0);
 case 133:
  return FUNC_1(VAR_0);
 case 131:
  return FUNC_3(VAR_0) +
   FUNC_0(VAR_0) +
   FUNC_2(VAR_0) +
   FUNC_1(VAR_0);
 case 130:
  return FUNC_0(VAR_0) +
   FUNC_2(VAR_0) +
   FUNC_1(VAR_0);
 default:
  return 0;
 }
}
