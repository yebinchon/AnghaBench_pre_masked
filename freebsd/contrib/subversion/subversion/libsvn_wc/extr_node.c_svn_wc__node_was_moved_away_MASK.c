
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int ,char const*,int *,int *) ;
 int FUNC_2 (int *,char const**,int *,char const**,int ,char const*,int *,int *) ;
 scalar_t__ VAR_1 ;

svn_error_t *
FUNC_3(const char **VAR_2,
                            const char **VAR_3,
                            svn_wc_context_t *VAR_4,
                            const char *VAR_5,
                            apr_pool_t *VAR_6,
                            apr_pool_t *VAR_7)
{
  svn_wc__db_status_t VAR_8;

  if (VAR_2)
    *VAR_2 = ((void*)0);
  if (VAR_3)
    *VAR_3 = ((void*)0);

  FUNC_0(FUNC_1(&VAR_8,
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               VAR_4->db, VAR_5,
                               VAR_7, VAR_7));

  if (VAR_8 == VAR_1)
    FUNC_0(FUNC_2(((void*)0), VAR_2, ((void*)0),
                                     VAR_3, VAR_4->db,
                                     VAR_5,
                                     VAR_6, VAR_7));

  return VAR_0;
}
