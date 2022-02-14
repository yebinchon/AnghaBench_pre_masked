
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_status ;
typedef int ldns_resolver ;
typedef int ldns_rdf ;
typedef int ldns_pkt ;
typedef int ldns_buffer ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int const*) ;
 scalar_t__ FUNC_3 (int const*) ;
 int * FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (int **,int *,int *,int *) ;

ldns_status
FUNC_6(ldns_pkt **VAR_3, ldns_resolver *VAR_4, const ldns_pkt *VAR_5)
{
 ldns_buffer *VAR_6;
 ldns_status VAR_7;
 ldns_rdf *VAR_8 = ((void*)0);

 VAR_6 = FUNC_1(VAR_0);

 if (VAR_5 && FUNC_3(VAR_5)) {
  VAR_8 = FUNC_4(FUNC_3(VAR_5), 3);
 }

 if (!VAR_5 ||
     FUNC_2(VAR_6, VAR_5) != VAR_2) {
  VAR_7 = VAR_1;
 } else {
         VAR_7 = FUNC_5(VAR_3, VAR_4, VAR_6, VAR_8);
 }

 FUNC_0(VAR_6);

 return VAR_7;
}
