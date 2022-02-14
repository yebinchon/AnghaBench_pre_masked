
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (char const**,char const*,int ,char*,int *) ;
 int * FUNC_4 (char const*,char const*,int ,int *) ;
 int FUNC_5 (TYPE_1__**,char const*,int *) ;

svn_error_t *
FUNC_6(const char *VAR_2,
                 const char *VAR_3,
                 apr_pool_t *VAR_4)

{
  return FUNC_2(VAR_1, ((void*)0),
                          FUNC_1("Symbolic links are not supported on this "
                            "platform"));

}
