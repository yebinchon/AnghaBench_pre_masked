
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_8__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
struct ra_ev2_baton {int wc_ctx; int relpath_map; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 char* FUNC_3 (int ,char const*) ;
 int FUNC_4 (int *,int *,int *,int *,int *,int *,int *,int ,char const*,int ,int *,int *) ;
 TYPE_1__* FUNC_5 (int **,int ,char const*,int *,int *) ;

svn_error_t *
FUNC_6(apr_hash_t **VAR_3,
                             svn_revnum_t *VAR_4,
                             void *VAR_5,
                             const char *VAR_6,
                             apr_pool_t *VAR_7,
                             apr_pool_t *VAR_8)
{
  struct ra_ev2_baton *VAR_9 = VAR_5;
  const char *VAR_10;
  svn_error_t *VAR_11;

  VAR_10 = FUNC_3(VAR_9->relpath_map, VAR_6);
  if (!VAR_10)
    {
      *VAR_3 = ((void*)0);
      return VAR_2;
    }

  VAR_11 = FUNC_5(VAR_3, VAR_9->wc_ctx, VAR_10,
                                  VAR_7, VAR_8);
  if (VAR_11)
    {
      if (VAR_11->apr_err != VAR_1)
        return FUNC_2(VAR_11);

      FUNC_1(VAR_11);
      *VAR_3 = ((void*)0);
      return VAR_2;
    }

  if (*VAR_3 != ((void*)0))
    {


      FUNC_0(FUNC_4(((void*)0), VAR_4, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                      ((void*)0),
                                      VAR_9->wc_ctx, VAR_10, VAR_0,
                                      VAR_8, VAR_8));
    }

  return VAR_2;
}
