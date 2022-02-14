
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,char const*) ;
 char* FUNC_2 (int *,char*,char**) ;
 int * FUNC_3 (int*,char const*) ;
 int * FUNC_4 (int ,int *,int ,char const*) ;
 TYPE_1__* FUNC_5 (char const*,int *) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static svn_error_t *
FUNC_7(int *VAR_2,
                  const char **VAR_3,
                  const char *VAR_4,
                  apr_pool_t *VAR_5,
                  apr_pool_t *VAR_6)
{
  svn_error_t *VAR_7;
  const char *VAR_8;
  char *VAR_9;
  svn_stringbuf_t *VAR_10 = FUNC_5(VAR_4, VAR_6);

  FUNC_6(VAR_10);
  VAR_8 = FUNC_2(VAR_10->data, " \t\r\n", &VAR_9);
  if (VAR_8)
    VAR_8 = FUNC_2(((void*)0), " \t\r\n", &VAR_9);
  if (!VAR_8)
    return FUNC_4(VAR_0, ((void*)0),
                             FUNC_0("Malformed DAV:status '%s'"),
                             VAR_4);
  VAR_7 = FUNC_3(VAR_2, VAR_8);
  if (VAR_7)
    return FUNC_4(VAR_0, VAR_7,
                             FUNC_0("Malformed DAV:status '%s'"),
                             VAR_4);

  VAR_8 = FUNC_2(((void*)0), " \t\r\n", &VAR_9);

  *VAR_3 = FUNC_1(VAR_5, VAR_8);

  return VAR_1;
}
