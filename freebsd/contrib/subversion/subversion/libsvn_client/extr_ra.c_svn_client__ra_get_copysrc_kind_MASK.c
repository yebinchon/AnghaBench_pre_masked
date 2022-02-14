
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
struct ra_ev2_baton {int wc_ctx; int relpath_map; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 char* FUNC_1 (int ,char const*) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,char const*,int ,int ,int *) ;

svn_error_t *
FUNC_3(svn_node_kind_t *VAR_3,
                                void *VAR_4,
                                const char *VAR_5,
                                svn_revnum_t VAR_6,
                                apr_pool_t *VAR_7)
{
  struct ra_ev2_baton *VAR_8 = VAR_4;
  const char *VAR_9;

  VAR_9 = FUNC_1(VAR_8->relpath_map, VAR_5);
  if (!VAR_9)
    {
      *VAR_3 = VAR_2;
      return VAR_1;
    }



  FUNC_0(FUNC_2(VAR_3, VAR_8->wc_ctx, VAR_9,
                            VAR_0, VAR_0, VAR_7));

  return VAR_1;
}
