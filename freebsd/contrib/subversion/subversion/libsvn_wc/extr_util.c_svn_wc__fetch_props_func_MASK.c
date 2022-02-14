
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_9__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
struct svn_wc__shim_fetch_baton_t {int db; scalar_t__ fetch_base; int base_abspath; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int * FUNC_0 (int *) ;
 char* FUNC_1 (int ,char const*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int **,int ,char const*,int *,int *) ;
 TYPE_1__* FUNC_5 (int **,int ,char const*,int *,int *) ;

svn_error_t *
FUNC_6(apr_hash_t **VAR_2,
                         void *VAR_3,
                         const char *VAR_4,
                         svn_revnum_t VAR_5,
                         apr_pool_t *VAR_6,
                         apr_pool_t *VAR_7)
{
  struct svn_wc__shim_fetch_baton_t *VAR_8 = VAR_3;
  const char *VAR_9 = FUNC_1(VAR_8->base_abspath, VAR_4,
                                              VAR_7);
  svn_error_t *VAR_10;

  if (VAR_8->fetch_base)
    VAR_10 = FUNC_4(VAR_2, VAR_8->db, VAR_9, VAR_6,
                                    VAR_7);
  else
    VAR_10 = FUNC_5(VAR_2, VAR_8->db, VAR_9,
                                VAR_6, VAR_7);


  if (VAR_10 && VAR_10->apr_err == VAR_0)
    {
      FUNC_2(VAR_10);
      *VAR_2 = FUNC_0(VAR_6);
    }
  else if (VAR_10)
    return FUNC_3(VAR_10);

  return VAR_1;
}
