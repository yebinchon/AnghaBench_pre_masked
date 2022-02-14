
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int FUNC_1 (int *,TYPE_1__**,char const**,int *,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_3, svn_stringbuf_t **VAR_4, const char **VAR_5,
              svn_boolean_t *VAR_6, apr_pool_t *VAR_7,
              apr_pool_t *VAR_8)
{
  apr_file_t *VAR_9 = VAR_3;

  FUNC_0(FUNC_1(VAR_9, VAR_4, VAR_5, VAR_6, VAR_0,
                               VAR_7, VAR_8));

  if (!(*VAR_4)->len)
    *VAR_4 = ((void*)0);
  else
    *VAR_6 = VAR_1;

  return VAR_2;
}
