
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 char* FUNC_1 (size_t,int) ;
 scalar_t__ FUNC_2 (char*,char*,size_t) ;
 int FUNC_3 (char*,char const*,size_t) ;
 int FUNC_4 (char*,char,size_t) ;
 char* FUNC_5 (char*,char*,size_t) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_0)
{
 char *VAR_1, *VAR_2;
 size_t VAR_3, VAR_4, VAR_5, VAR_6;
 int VAR_7, VAR_8;

 VAR_3 = FUNC_6(VAR_0) + 1;
 for (VAR_7 = 0; VAR_7 <= 1; VAR_7++) {
  for (VAR_8 = 0; VAR_8 <= 1; VAR_8++) {
   for (VAR_5 = 0; VAR_5 <= VAR_3 + 10; VAR_5++) {
    VAR_1 = FUNC_1(VAR_3, VAR_7);
    FUNC_3(VAR_1, VAR_0, VAR_3);
    VAR_2 = FUNC_1(VAR_5, VAR_8);
    FUNC_4(VAR_2, 'X', VAR_5);
    VAR_4 = (VAR_5 < VAR_3) ? VAR_5 : VAR_3 - 1;
    FUNC_0(FUNC_5(VAR_2, VAR_1, VAR_5) == VAR_2+VAR_4);
    FUNC_0(FUNC_2(VAR_1, VAR_2, VAR_4) == 0);
    for (VAR_6 = VAR_4; VAR_6 < VAR_5; VAR_6++)
     FUNC_0(VAR_2[VAR_6] == '\0');
   }
  }
 }
}
