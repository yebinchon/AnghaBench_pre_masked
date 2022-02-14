
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ldns_status ;
typedef int ldns_rr_class ;
typedef int ldns_rr ;
typedef int ldns_resolver ;
typedef int ldns_rdf ;
typedef int ldns_pkt ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,scalar_t__,int ,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int **,int *,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (int ) ;
 int * FUNC_8 (int *,int ) ;

ldns_status
FUNC_9(ldns_rdf *VAR_4, ldns_resolver *VAR_5,
    ldns_rr_class VAR_6, ldns_rdf **VAR_7)
{
 ldns_rr *VAR_8;
 ldns_pkt *VAR_9, *VAR_10;


 VAR_9 = FUNC_2(FUNC_4(VAR_4), VAR_1,
     VAR_6, VAR_0);
 if (!VAR_9) {
  return VAR_2;
 }

 FUNC_3(VAR_9);
 if (FUNC_5(&VAR_10, VAR_5, VAR_9) != VAR_3) {
  FUNC_1(VAR_9);
  return VAR_2;
 }
 FUNC_1(VAR_9);
 if (!VAR_10) {
  return VAR_2;
 }


 *VAR_7 = ((void*)0);
 while ((VAR_8 = FUNC_7(FUNC_0(VAR_10)))) {
  if (FUNC_6(VAR_8) != VAR_1
    || FUNC_8(VAR_8, 0) == ((void*)0))
   continue;

  *VAR_7 = FUNC_4(FUNC_8(VAR_8, 0));
  break;
 }
 FUNC_1(VAR_10);

 return *VAR_7 ? VAR_3 : VAR_2;
}
