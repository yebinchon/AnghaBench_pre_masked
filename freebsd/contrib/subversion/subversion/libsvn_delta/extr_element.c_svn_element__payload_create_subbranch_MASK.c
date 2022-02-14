
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int is_subbranch_root; int * pool; } ;
typedef TYPE_1__ svn_element__payload_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

svn_element__payload_t *
FUNC_3(apr_pool_t *VAR_1)
{
  svn_element__payload_t *VAR_2
    = FUNC_0(VAR_1, sizeof(*VAR_2));

  VAR_2->pool = VAR_1;
  VAR_2->is_subbranch_root = VAR_0;
  FUNC_1(FUNC_2(VAR_2));
  return VAR_2;
}
