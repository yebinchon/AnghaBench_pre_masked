
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 char* FUNC_0 (char*,char) ;
 size_t FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char*,size_t) ;

__attribute__((used)) static char *
FUNC_3(const char *VAR_1, int *VAR_2)
{
 size_t VAR_3, VAR_4;
 char *VAR_5, *VAR_6;

 VAR_4 = FUNC_1(VAR_1);
 for (VAR_3 = 0; (VAR_6 = VAR_0[VAR_3]); VAR_3++) {
  VAR_5 = FUNC_0(VAR_6, '=');
  if (VAR_5 == ((void*)0) || VAR_5 - VAR_6 != VAR_4)
   continue;
  if (FUNC_2(VAR_1, VAR_6, VAR_4) == 0) {
   *VAR_2 = VAR_3;
   return VAR_6 + VAR_4 + 1;
  }
 }
 *VAR_2 = VAR_3;
 return ((void*)0);
}
