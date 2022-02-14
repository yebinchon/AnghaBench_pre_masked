
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,int *) ;
 int FUNC_3 (char const*,int *) ;
 int FUNC_4 (char const**,char const*,int *) ;
 int FUNC_5 (char const*) ;
 char* FUNC_6 (int ,char const*,int *) ;
 int FUNC_7 (char const*,int *) ;
 int * FUNC_8 (int ,int *,int ,int ) ;
 int FUNC_9 (TYPE_1__**,char const*,int *) ;
 scalar_t__ FUNC_10 (char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_11(const char **VAR_2,
                 const char *VAR_3,
                 apr_pool_t *VAR_4)
{
  svn_string_t *VAR_5;
  const char *VAR_6;

  FUNC_0(FUNC_9(&VAR_5, VAR_3, VAR_4));
  if (VAR_5->len == 0)
    return FUNC_8(VAR_0, ((void*)0),
                             FUNC_1("The symlink at '%s' points nowhere"),
                             FUNC_7(VAR_3, VAR_4));

  VAR_6 = FUNC_2(VAR_5->data, VAR_4);


  if (!FUNC_5(VAR_6))
    VAR_6 = FUNC_6(FUNC_3(VAR_3,
                                                           VAR_4),
                                        VAR_6, VAR_4);


  if (FUNC_10(VAR_6))
    FUNC_0(FUNC_4(VAR_2, VAR_6,
                                    VAR_4));
  else
    *VAR_2 = VAR_6;

  return VAR_1;
}
