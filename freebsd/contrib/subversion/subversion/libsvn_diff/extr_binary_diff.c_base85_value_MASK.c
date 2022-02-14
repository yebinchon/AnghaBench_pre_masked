
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 char const* VAR_2 ;
 char* FUNC_1 (char const*,char) ;
 int * FUNC_2 (int ,int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(int *VAR_3, char VAR_4)
{
  const char *VAR_5 = FUNC_1(VAR_2, VAR_4);
  if (!VAR_5)
    return FUNC_2(VAR_0, ((void*)0),
                            FUNC_0("Invalid base85 value"));



  *VAR_3 = (int)(VAR_5 - VAR_2);
  return VAR_1;
}
