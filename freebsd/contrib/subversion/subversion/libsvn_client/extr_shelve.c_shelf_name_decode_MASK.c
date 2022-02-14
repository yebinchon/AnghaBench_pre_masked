
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,char*,int*,int*) ;
 int FUNC_2 (char const*) ;
 int * FUNC_3 (int ,int *,int ,char const*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_5 (int,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(char **VAR_2,
                  const char *VAR_3,
                  apr_pool_t *VAR_4)
{
  svn_stringbuf_t *VAR_5
    = FUNC_5(FUNC_2(VAR_3) / 2, VAR_4);
  const char *VAR_6 = VAR_3;

  while (*VAR_6)
    {
      int VAR_7;
      int VAR_8;
      int VAR_9 = FUNC_1(VAR_6, "%02x%n", &VAR_7, &VAR_8);

      if (VAR_9 != 1 || VAR_8 != 2)
        return FUNC_3(VAR_0, ((void*)0),
                                 FUNC_0("Shelve: Bad encoded name '%s'"), VAR_3);
      FUNC_4(VAR_5, VAR_7);
      VAR_6 += 2;
    }
  *VAR_2 = VAR_5->data;
  return VAR_1;
}
