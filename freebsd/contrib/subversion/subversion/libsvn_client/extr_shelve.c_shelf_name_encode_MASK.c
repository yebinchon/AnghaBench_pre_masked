
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 (char*,int,char*,unsigned char) ;
 int FUNC_3 (char const*) ;
 int * FUNC_4 (int ,int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_5(char **VAR_2,
                  const char *VAR_3,
                  apr_pool_t *VAR_4)
{
  char *VAR_5
    = FUNC_1(VAR_4, FUNC_3(VAR_3) * 2 + 1);
  char *VAR_6 = VAR_5;

  if (VAR_3[0] == '\0')
    return FUNC_4(VAR_0, ((void*)0),
                            FUNC_0("Shelf name cannot be the empty string"));

  while (*VAR_3)
    {
      FUNC_2(VAR_6, 3, "%02x", (unsigned char)(*VAR_3++));
      VAR_6 += 2;
    }
  *VAR_2 = VAR_5;
  return VAR_1;
}
