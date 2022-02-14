
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef scalar_t__ apr_uint64_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,int *,int) ;
 int FUNC_2 (char) ;
 int * FUNC_3 (int ,int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(char *VAR_2, char **VAR_3, const char *VAR_4)
{
  apr_uint64_t VAR_5;
  char VAR_6[3];

  if (VAR_4 - *VAR_3 < 3 || **VAR_3 != 'x' || ! FUNC_2((*VAR_3)[1])
      || ! FUNC_2((*VAR_3)[2]))
    return FUNC_3(VAR_0, ((void*)0),
                            FUNC_0("Invalid escape sequence"));
  (*VAR_3)++;
  VAR_6[0] = *((*VAR_3)++);
  VAR_6[1] = *((*VAR_3)++);
  VAR_6[2] = 0;
  if ((VAR_5 = FUNC_1(VAR_6, ((void*)0), 16)) == 0)
    return FUNC_3(VAR_0, ((void*)0),
                            FUNC_0("Invalid escaped character"));
  *VAR_2 = (char) VAR_5;
  return VAR_1;
}
