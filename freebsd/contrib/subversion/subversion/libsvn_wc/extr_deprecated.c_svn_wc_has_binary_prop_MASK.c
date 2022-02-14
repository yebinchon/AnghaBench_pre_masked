
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_wc_adm_access_t ;
typedef int svn_wc__db_t ;
struct TYPE_3__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char const**,char const*,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__ const**,int *,char const*,int ,int *,int *) ;

svn_error_t *
FUNC_5(svn_boolean_t *VAR_4,
                       const char *VAR_5,
                       svn_wc_adm_access_t *VAR_6,
                       apr_pool_t *VAR_7)
{
  svn_wc__db_t *VAR_8 = FUNC_3(VAR_6);
  const char *VAR_9;
  const svn_string_t *VAR_10;

  FUNC_0(FUNC_1(&VAR_9, VAR_5, VAR_7));

  FUNC_0(FUNC_4(&VAR_10, VAR_8, VAR_9,
                                   VAR_2,
                                   VAR_7, VAR_7));

  if (VAR_10 && (FUNC_2(VAR_10->data)))
    *VAR_4 = VAR_3;
  else
    *VAR_4 = VAR_0;

  return VAR_1;
}
