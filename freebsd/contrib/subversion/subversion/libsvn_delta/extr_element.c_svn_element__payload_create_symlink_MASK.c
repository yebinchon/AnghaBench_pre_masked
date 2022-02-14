
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int target; int * props; int kind; int * pool; } ;
typedef TYPE_1__ svn_element__payload_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (char const*) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_0 ;
 int * FUNC_5 (int *,int *) ;

svn_element__payload_t *
FUNC_6(apr_hash_t *VAR_1,
                                    const char *VAR_2,
                                    apr_pool_t *VAR_3)
{
  svn_element__payload_t *VAR_4
    = FUNC_1(VAR_3, sizeof(*VAR_4));

  FUNC_0(VAR_2);

  VAR_4->pool = VAR_3;
  VAR_4->kind = VAR_0;
  VAR_4->props = VAR_1 ? FUNC_5(VAR_1, VAR_3) : ((void*)0);
  VAR_4->target = FUNC_2(VAR_3, VAR_2);
  FUNC_3(FUNC_4(VAR_4));
  return VAR_4;
}
