
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct shim_callbacks_baton {int wc_ctx; int relpath_map; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *) ;
 char* FUNC_2 (int ,char const*) ;
 int FUNC_3 (int **,int ,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(apr_hash_t **VAR_1,
                 void *VAR_2,
                 const char *VAR_3,
                 svn_revnum_t VAR_4,
                 apr_pool_t *VAR_5,
                 apr_pool_t *VAR_6)
{
  struct shim_callbacks_baton *VAR_7 = VAR_2;
  const char *VAR_8;

  VAR_8 = FUNC_2(VAR_7->relpath_map, VAR_3);
  if (!VAR_8)
    {
      *VAR_1 = FUNC_1(VAR_5);
      return VAR_0;
    }


  FUNC_0(FUNC_3(VAR_1, VAR_7->wc_ctx, VAR_8,
                                    VAR_5, VAR_6));

  if (!*VAR_1)
    *VAR_1 = FUNC_1(VAR_5);

  return VAR_0;
}
