
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int VAR_0 ;
 int FUNC_0 (char*,char const) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,char const) ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_1)
{
 size_t VAR_2, VAR_3;

 if (VAR_1 == ((void*)0))
  return 0;

 VAR_3 = FUNC_3(VAR_1);
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  if (!FUNC_1((u_char)VAR_1[VAR_2]) &&
      FUNC_2(VAR_0, VAR_1[VAR_2]) == ((void*)0)) {
   FUNC_0("Invalid character '%c' in DISPLAY", VAR_1[VAR_2]);
   return 0;
  }
 }
 return 1;
}
