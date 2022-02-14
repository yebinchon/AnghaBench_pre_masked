
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int ldns_status ;
typedef int ldns_rr_class ;
typedef int ldns_rr ;
typedef int ldns_rdf ;
typedef int ldns_pkt ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int **,char const*,int ,int ,int ,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int **,char const*) ;

ldns_status
FUNC_4(ldns_pkt **VAR_2, const char *VAR_3,
 ldns_rr_class VAR_4, uint16_t VAR_5, ldns_rr *VAR_6)
{
 ldns_rr* VAR_7 = VAR_6;
 if (!VAR_7) {
  ldns_rdf *VAR_8;
  if (FUNC_3(&VAR_8, VAR_3) == VAR_1) {
   VAR_7 = FUNC_0(VAR_8, VAR_4);
  }
  FUNC_2(VAR_8);
 }
 return FUNC_1(VAR_2, VAR_3, VAR_0,
  VAR_4, VAR_5, VAR_7);
}
