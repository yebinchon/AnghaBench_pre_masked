
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpp_reader ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (int *,int,char*,char const*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;

void
FUNC_3 (cpp_reader *VAR_1, int VAR_2, const char *VAR_3)
{
  if (VAR_3[0] == '\0')
    VAR_3 = FUNC_0("stdout");

  FUNC_1 (VAR_1, VAR_2, "%s: %s", VAR_3, FUNC_2 (VAR_0));
}
