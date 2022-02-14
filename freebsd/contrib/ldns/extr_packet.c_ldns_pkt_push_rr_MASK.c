
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rr ;
typedef int ldns_pkt_section ;
typedef int ldns_pkt ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int ,int *) ;

bool
FUNC_13(ldns_pkt *VAR_0, ldns_pkt_section VAR_1, ldns_rr *VAR_2)
{
 switch(VAR_1) {
  case 128:
   if (!FUNC_12(FUNC_7(VAR_0), VAR_2)) {
    return 0;
   }
   FUNC_11(VAR_0, FUNC_6(VAR_0) + 1);
   break;
  case 132:
   if (!FUNC_12(FUNC_2(VAR_0), VAR_2)) {
    return 0;
   }
   FUNC_8(VAR_0, FUNC_1(VAR_0) + 1);
   break;
  case 129:
   if (!FUNC_12(FUNC_4(VAR_0), VAR_2)) {
    return 0;
   }
   FUNC_10(VAR_0, FUNC_5(VAR_0) + 1);
   break;
  case 133:
   if (!FUNC_12(FUNC_0(VAR_0), VAR_2)) {
    return 0;
   }
   FUNC_9(VAR_0, FUNC_3(VAR_0) + 1);
   break;
  case 131:
  case 130:

   break;
 }
 return 1;
}
