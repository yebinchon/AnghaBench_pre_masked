
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_node_kind_t ;
typedef int svn_error_t ;
struct get_cl_fn_baton {int callback_baton; int (* callback_func ) (int ,char const*,char const*,int *) ;int clhash; int db; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,char const*,char const*,int *) ;
 int * FUNC_2 (int ,char const*) ;
 int FUNC_3 (int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,char const**,int *,int *,int *,int *,int *,int *,int *,int ,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(const char *VAR_1,
                    svn_node_kind_t VAR_2,
                    void *VAR_3,
                    apr_pool_t *VAR_4)
{
  struct get_cl_fn_baton *VAR_5 = VAR_3;
  const char *VAR_6;

  FUNC_0(FUNC_3(((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_6,
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               VAR_5->db, VAR_1,
                               VAR_4, VAR_4));
  if (!VAR_5->clhash
      || (VAR_6 && FUNC_2(VAR_5->clhash, VAR_6) != ((void*)0)))
    FUNC_0(VAR_5->callback_func(VAR_5->callback_baton, VAR_1,
                             VAR_6, VAR_4));

  return VAR_0;
}
