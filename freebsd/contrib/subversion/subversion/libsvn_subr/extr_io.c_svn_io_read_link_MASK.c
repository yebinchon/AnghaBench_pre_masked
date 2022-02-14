
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* data; int len; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_error_t ;
typedef int ssize_t ;
typedef int buf ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (char const**,char const*,int *) ;
 int * FUNC_5 (TYPE_1__**,char const*,int *) ;
 int FUNC_6 (char const*,char*,int) ;
 int * FUNC_7 (int ,int *,int ) ;
 int * FUNC_8 (int ,int ) ;
 int * FUNC_9 (TYPE_1__ const**,TYPE_1__*,int *) ;

svn_error_t *
FUNC_10(svn_string_t **VAR_1,
                 const char *VAR_2,
                 apr_pool_t *VAR_3)
{
  return FUNC_7(VAR_0, ((void*)0),
                          FUNC_2("Symbolic links are not supported on this "
                            "platform"));

}
