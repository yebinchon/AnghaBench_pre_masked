
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__**,int *,int *,TYPE_1__ const*,char const*,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(const svn_string_t **VAR_3,
                 svn_boolean_t *VAR_4,
                 const char *VAR_5,
                 apr_pool_t *VAR_6,
                 apr_pool_t *VAR_7)
{
  svn_string_t *VAR_8;

  *VAR_4 = VAR_0;

  if (*VAR_3 == ((void*)0))
    return VAR_1;

  FUNC_1((*VAR_3)->data != ((void*)0));

  if (VAR_5 == ((void*)0))
    VAR_5 = "UTF-8";

  VAR_8 = ((void*)0);
  FUNC_0(FUNC_2(&VAR_8, ((void*)0), VAR_4,
                                      *VAR_3, VAR_5, VAR_2,
                                      VAR_6, VAR_7));
  *VAR_3 = VAR_8;

  return VAR_1;
}
