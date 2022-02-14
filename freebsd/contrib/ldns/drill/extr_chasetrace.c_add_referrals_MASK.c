
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rr_list ;
typedef int ldns_pkt ;
typedef int ldns_dnssec_zone ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(ldns_dnssec_zone *VAR_0, ldns_pkt *VAR_1)
{
 ldns_rr_list *VAR_2 = FUNC_1(VAR_1);
 if (VAR_2) {
  FUNC_0(VAR_0, VAR_2);
  FUNC_2(VAR_2);
 }
}
