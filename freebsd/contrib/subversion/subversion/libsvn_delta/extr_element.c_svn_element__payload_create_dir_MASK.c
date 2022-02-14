
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * props; int kind; int * pool; } ;
typedef TYPE_1__ svn_element__payload_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int * FUNC_3 (int *,int *) ;

svn_element__payload_t *
FUNC_4(apr_hash_t *VAR_1,
                                apr_pool_t *VAR_2)
{
  svn_element__payload_t *VAR_3
    = FUNC_0(VAR_2, sizeof(*VAR_3));

  VAR_3->pool = VAR_2;
  VAR_3->kind = VAR_0;
  VAR_3->props = VAR_1 ? FUNC_3(VAR_1, VAR_2) : ((void*)0);
  FUNC_1(FUNC_2(VAR_3));
  return VAR_3;
}
