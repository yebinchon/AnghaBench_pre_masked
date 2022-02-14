
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_wc_notify_func2_t ;
typedef int svn_wc_context_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_string_t ;
struct TYPE_9__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (char const**,char const*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int **,int *,int ,int *) ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (int *,char const*,char const*,int const*,int ,int ,int *,int *,int *,int ,void*,int *) ;

svn_error_t *
FUNC_8(const char *VAR_2,
                 const svn_string_t *VAR_3,
                 const char *VAR_4,
                 svn_wc_adm_access_t *VAR_5,
                 svn_boolean_t VAR_6,
                 svn_wc_notify_func2_t VAR_7,
                 void *VAR_8,
                 apr_pool_t *VAR_9)
{
  svn_wc_context_t *VAR_10;
  const char *VAR_11;
  svn_error_t *VAR_12;

  FUNC_0(FUNC_1(&VAR_11, VAR_4, VAR_9));
  FUNC_0(FUNC_5(&VAR_10, ((void*)0) ,
                                         FUNC_4(VAR_5),
                                         VAR_9));

  VAR_12 = FUNC_7(VAR_10, VAR_11,
                         VAR_2, VAR_3,
                         VAR_1,
                         VAR_6, ((void*)0) ,
                         ((void*)0), ((void*)0) ,
                         VAR_7, VAR_8,
                         VAR_9);

  if (VAR_12 && VAR_12->apr_err == VAR_0)
    FUNC_2(VAR_12);
  else
    FUNC_0(VAR_12);

  return FUNC_3(FUNC_6(VAR_10));
}
