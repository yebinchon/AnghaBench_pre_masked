
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int *,int ,char const*,int ,int *) ;
 int FUNC_4 (int *,int ,char const*,int *) ;

svn_error_t *
FUNC_5(svn_boolean_t *VAR_2,
               svn_boolean_t *VAR_3,
               svn_wc_context_t *VAR_4,
               const char *VAR_5,
               apr_pool_t *VAR_6)
{
  FUNC_1(FUNC_2(VAR_5));

  if (VAR_2 != ((void*)0))
    FUNC_0(FUNC_3(VAR_2, VAR_4->db, VAR_5,
                                        VAR_0, VAR_6));
  if (VAR_3 != ((void*)0))
    FUNC_0(FUNC_4(VAR_3, VAR_4->db, VAR_5,
                                VAR_6));

  return VAR_1;
}
