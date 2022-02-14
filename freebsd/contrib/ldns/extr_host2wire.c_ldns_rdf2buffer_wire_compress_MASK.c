
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_status ;
typedef int ldns_rdf ;
typedef int ldns_rbtree_t ;
typedef int ldns_buffer ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int const*,int *) ;
 int FUNC_4 (int const*) ;
 scalar_t__ FUNC_5 (int const*) ;
 int FUNC_6 (int const*) ;

ldns_status
FUNC_7(ldns_buffer *VAR_1, const ldns_rdf *VAR_2, ldns_rbtree_t *VAR_3)
{

 if(VAR_3 && FUNC_5(VAR_2) == VAR_0)
 {
  return FUNC_3(VAR_1,VAR_2,VAR_3);
 }

 if (FUNC_0(VAR_1, FUNC_6(VAR_2))) {
  FUNC_2(VAR_1, FUNC_4(VAR_2), FUNC_6(VAR_2));
 }
 return FUNC_1(VAR_1);
}
