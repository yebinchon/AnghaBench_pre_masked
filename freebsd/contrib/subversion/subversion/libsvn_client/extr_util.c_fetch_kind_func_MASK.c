
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
struct shim_callbacks_baton {int wc_ctx; int relpath_map; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int ,char const*) ;
 int VAR_3 ;
 int FUNC_2 (int *,int ,char const*,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_node_kind_t *VAR_4,
                void *VAR_5,
                const char *VAR_6,
                svn_revnum_t VAR_7,
                apr_pool_t *VAR_8)
{
  struct shim_callbacks_baton *VAR_9 = VAR_5;
  const char *VAR_10;

  VAR_10 = FUNC_1(VAR_9->relpath_map, VAR_6);
  if (!VAR_10)
    {
      *VAR_4 = VAR_3;
      return VAR_1;
    }

  FUNC_0(FUNC_2(VAR_4, VAR_9->wc_ctx, VAR_10,
                            VAR_2, VAR_0, VAR_8));

  return VAR_1;
}
