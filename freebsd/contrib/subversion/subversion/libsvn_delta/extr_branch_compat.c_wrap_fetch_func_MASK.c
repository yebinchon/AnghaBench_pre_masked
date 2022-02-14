
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fetch_baton; int (* fetch_func ) (int *,int **,int **,int **,int ,char const*,int ,int *,int *) ;} ;
typedef TYPE_1__ wrap_fetch_baton_t ;
typedef int svn_stringbuf_t ;
typedef int svn_revnum_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *,int **,int **,int **,int ,char const*,int ,int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_node_kind_t *VAR_2,
                apr_hash_t **VAR_3,
                svn_stringbuf_t **VAR_4,
                apr_hash_t **VAR_5,
                void *VAR_6,
                const char *VAR_7,
                svn_revnum_t VAR_8,
                apr_pool_t *VAR_9,
                apr_pool_t *VAR_10)
{
  wrap_fetch_baton_t *VAR_11 = VAR_6;

  if (VAR_8 == 0 && FUNC_2(VAR_7, "top0") == 0)
    {
      if (VAR_2)
        *VAR_2 = VAR_1;
      if (VAR_3)
        *VAR_3 = FUNC_1(VAR_9);
      if (VAR_4)
        *VAR_4 = ((void*)0);
      if (VAR_5)
        *VAR_5 = FUNC_1(VAR_9);
    }
  else
    {
      FUNC_0(VAR_11->fetch_func(VAR_2, VAR_3, VAR_4, VAR_5,
                            VAR_11->fetch_baton,
                            VAR_7, VAR_8,
                            VAR_9, VAR_10));
    }

  return VAR_0;
}
