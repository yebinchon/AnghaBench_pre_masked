
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_wc_adm_access_t ;
struct TYPE_6__ {int len; int data; } ;
typedef TYPE_2__ svn_string_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
struct traversal_info_update_baton {TYPE_1__* traversal; int db; } ;
typedef int apr_pool_t ;
struct TYPE_5__ {int depths; int externals_new; int externals_old; int * pool; } ;


 int * VAR_0 ;
 char* FUNC_0 (int *,char const*) ;
 char* FUNC_1 (int *,int ,int ) ;
 char const* FUNC_2 (int ) ;
 int FUNC_3 (int ,char const*,char const*) ;
 int * FUNC_4 (int ,char const*,int *) ;
 char const* FUNC_5 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(void *VAR_1,
                      const char *VAR_2,
                      const svn_string_t *VAR_3,
                      const svn_string_t *VAR_4,
                      svn_depth_t VAR_5,
                      apr_pool_t *VAR_6)
{
  const char *VAR_7;
  svn_wc_adm_access_t *VAR_8;
  struct traversal_info_update_baton *VAR_9 = VAR_1;
  apr_pool_t *VAR_10 = VAR_9->traversal->pool;
  const char *VAR_11 = ((void*)0);



  VAR_8 = FUNC_4(VAR_9->db, VAR_2,
                                              VAR_6);

  if (VAR_8)
    VAR_7 = FUNC_0(VAR_10, FUNC_5(VAR_8));
  else
    VAR_7 = FUNC_0(VAR_10, VAR_2);

  if (VAR_3)
    {
      VAR_11 = FUNC_1(VAR_10, VAR_3->data, VAR_3->len);

      FUNC_3(VAR_9->traversal->externals_old, VAR_7, VAR_11);
    }

  if (VAR_4)
    {

      if (VAR_3 != VAR_4)
        VAR_11 = FUNC_1(VAR_10, VAR_4->data, VAR_4->len);

      FUNC_3(VAR_9->traversal->externals_new, VAR_7, VAR_11);
    }

  FUNC_3(VAR_9->traversal->depths, VAR_7, FUNC_2(VAR_5));

  return VAR_0;
}
