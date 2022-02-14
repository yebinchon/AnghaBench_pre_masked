
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0)
{
 size_t VAR_1;

 for (VAR_1 = 0; VAR_0[VAR_1] != '\0'; VAR_1++) {
  if (!FUNC_0((u_char)VAR_0[VAR_1]) &&
      VAR_0[VAR_1] != '.' && VAR_0[VAR_1] != ':' && VAR_0[VAR_1] != '/' &&
      VAR_0[VAR_1] != '-' && VAR_0[VAR_1] != '_')
   return 0;
 }
 return 1;
}
