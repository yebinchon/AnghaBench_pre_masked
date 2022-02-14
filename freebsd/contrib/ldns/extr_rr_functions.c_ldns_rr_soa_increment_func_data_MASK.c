
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* ldns_soa_serial_increment_func_t ) (int ,void*) ;
typedef int ldns_rr ;
typedef int ldns_rdf ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int * FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int ,void*) ;

void
FUNC_7(ldns_rr *VAR_2,
  ldns_soa_serial_increment_func_t VAR_3, void *VAR_4)
{
 ldns_rdf *VAR_5;
 if ( !VAR_2 || !VAR_3 || FUNC_3(VAR_2) != VAR_1
   || !FUNC_4(VAR_2, 2)) {
  return;
 }
 VAR_5 = FUNC_5(
    VAR_2
  , FUNC_1(
     VAR_0
   , (*VAR_3)( FUNC_2(
     FUNC_4(VAR_2, 2))
         , VAR_4
   )
  )
  , 2
 );
 FUNC_0(VAR_5);
}
