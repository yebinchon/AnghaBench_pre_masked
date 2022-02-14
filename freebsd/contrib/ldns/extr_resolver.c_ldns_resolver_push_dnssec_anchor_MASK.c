
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_status ;
typedef int ldns_rr_list ;
typedef int ldns_rr ;
typedef int ldns_resolver ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 () ;
 scalar_t__ FUNC_5 (int *,int ) ;

ldns_status
FUNC_6(ldns_resolver *VAR_4, ldns_rr *VAR_5)
{
  ldns_rr_list * VAR_6;

  if ((!VAR_5) || (FUNC_3(VAR_5) != VAR_0 &&
                FUNC_3(VAR_5) != VAR_1)) {

    return VAR_2;
  }

  if (!(VAR_6 = FUNC_0(VAR_4))) {
    VAR_6 = FUNC_4();
    FUNC_1(VAR_4, VAR_6);
  }

  return (FUNC_5(VAR_6, FUNC_2(VAR_5))) ? VAR_3 : VAR_2;
}
