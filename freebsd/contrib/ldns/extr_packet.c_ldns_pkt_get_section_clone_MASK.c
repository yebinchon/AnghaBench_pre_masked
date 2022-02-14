
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rr_list ;
typedef int ldns_pkt_section ;
typedef int ldns_pkt ;
 int FUNC_0 (int const*) ;
 int * FUNC_1 (int const*) ;
 int * FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;
 int * FUNC_6 (int ) ;

ldns_rr_list *
FUNC_7(const ldns_pkt *VAR_0, ldns_pkt_section VAR_1)
{
 switch(VAR_1) {
 case 128:
  return FUNC_6(FUNC_5(VAR_0));
 case 132:
  return FUNC_6(FUNC_3(VAR_0));
 case 129:
  return FUNC_6(FUNC_4(VAR_0));
 case 133:
  return FUNC_6(FUNC_0(VAR_0));
 case 131:

  return FUNC_1(VAR_0);
 case 130:
  return FUNC_2(VAR_0);
 default:
  return ((void*)0);
 }
}
