
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rr ;
typedef int ldns_pkt_section ;
typedef int ldns_pkt ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int ,int const*) ;

bool
FUNC_5(const ldns_pkt *VAR_0, ldns_pkt_section VAR_1, const ldns_rr *VAR_2)
{
 bool VAR_3 = 0;

 switch (VAR_1) {
 case 128:
  return FUNC_4(FUNC_3(VAR_0), VAR_2);
 case 132:
  return FUNC_4(FUNC_1(VAR_0), VAR_2);
 case 129:
  return FUNC_4(FUNC_2(VAR_0), VAR_2);
 case 133:
  return FUNC_4(FUNC_0(VAR_0), VAR_2);
 case 131:
  VAR_3 = FUNC_4(FUNC_3(VAR_0), VAR_2);
 case 130:
  VAR_3 = VAR_3
      || FUNC_4(FUNC_1(VAR_0), VAR_2)
      || FUNC_4(FUNC_2(VAR_0), VAR_2)
      || FUNC_4(FUNC_0(VAR_0), VAR_2);
 }

 return VAR_3;
}
