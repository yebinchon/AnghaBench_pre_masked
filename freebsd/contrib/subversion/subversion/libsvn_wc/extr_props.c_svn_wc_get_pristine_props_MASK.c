
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
struct TYPE_11__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int **,int ,char const*,int *,int *) ;

svn_error_t *
FUNC_5(apr_hash_t **VAR_2,
                          svn_wc_context_t *VAR_3,
                          const char *VAR_4,
                          apr_pool_t *VAR_5,
                          apr_pool_t *VAR_6)
{
  svn_error_t *VAR_7;

  FUNC_0(VAR_2 != ((void*)0));
  FUNC_0(FUNC_1(VAR_4));




  VAR_7 = FUNC_4(VAR_2, VAR_3->db, VAR_4,
                                       VAR_5, VAR_6);

  if (VAR_7)
    {
      if (VAR_7->apr_err != VAR_0)
        return FUNC_3(VAR_7);

      FUNC_2(VAR_7);


      *VAR_2 = ((void*)0);
    }

  return VAR_1;
}
