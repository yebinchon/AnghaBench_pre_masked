
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* FUNC_1 (char const*,char const*,int ,int ,int *,int *) ;
 TYPE_1__* FUNC_2 (char const*,char const*,int *,int *) ;
 TYPE_1__* FUNC_3 (char const**,char const*,int *,int *,int *) ;
 TYPE_1__* FUNC_4 (TYPE_1__*,char*,char const*) ;

svn_error_t *
FUNC_5(const char *VAR_3,
                    const char *VAR_4,
                    svn_boolean_t VAR_5,
                    svn_boolean_t VAR_6,
                    svn_client_ctx_t *VAR_7,
                    apr_pool_t *VAR_8)
{
  const char *VAR_9;
  svn_error_t *VAR_10;

  FUNC_0(FUNC_3(&VAR_9,
                                 VAR_4, VAR_7, VAR_8, VAR_8));


  VAR_10 = FUNC_1(VAR_3, VAR_9,
                          VAR_0 , VAR_6,
                          VAR_7, VAR_8);
  if (VAR_10 && VAR_10->apr_err == VAR_1)
    {
      return FUNC_4(VAR_10,
                                   "Shelved change '%s' not found",
                                   VAR_3);
    }
  else
    FUNC_0(VAR_10);


  if (! VAR_5 && ! VAR_6)
    {
      FUNC_0(FUNC_2(VAR_3, VAR_9,
                                 VAR_7, VAR_8));
    }

  return VAR_2;
}
