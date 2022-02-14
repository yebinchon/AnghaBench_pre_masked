
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rr_list ;
typedef int ldns_pkt_section ;
typedef int ldns_pkt ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,size_t) ;
 size_t FUNC_2 (int *) ;

bool
FUNC_3(ldns_pkt *VAR_0, ldns_pkt_section VAR_1, ldns_rr_list *VAR_2)
{
 size_t VAR_3;
 for(VAR_3 = 0; VAR_3 < FUNC_2(VAR_2); VAR_3++) {
  if (!FUNC_0(VAR_0, VAR_1, FUNC_1(VAR_2, VAR_3))) {
   return 0;
  }
 }
 return 1;
}
