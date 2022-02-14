
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char) ;
 int VAR_0 ;
 int FUNC_4 (char*,char*,size_t) ;
 char* FUNC_5 (size_t) ;

__attribute__((used)) static char *
FUNC_6(void)
{
 char *VAR_1, *VAR_2;
 size_t VAR_3, VAR_4, VAR_5, VAR_6;

 VAR_1 = FUNC_0(VAR_0);
 VAR_6 = FUNC_1(VAR_0);
 if (VAR_6 < 2 || VAR_1[0] != '[' || VAR_1[VAR_6 - 1] != ']') {
  return ((void*)0);
 }
 VAR_3 = 1;
 VAR_4 = VAR_6 - 1;
 while (VAR_3 < VAR_4 && FUNC_3(VAR_1[VAR_3])) {
  VAR_3 ++;
 }
 while (VAR_3 < VAR_4 && FUNC_3(VAR_1[VAR_4 - 1])) {
  VAR_4 --;
 }
 if (VAR_3 == VAR_4) {
  return ((void*)0);
 }
 for (VAR_5 = VAR_3; VAR_5 < VAR_4; VAR_5 ++) {
  if (!FUNC_2(VAR_1[VAR_5])) {
   return ((void*)0);
  }
 }
 VAR_6 = VAR_4 - VAR_3;
 VAR_2 = FUNC_5(VAR_6 + 1);
 FUNC_4(VAR_2, VAR_1 + VAR_3, VAR_6);
 VAR_2[VAR_6] = 0;
 return VAR_2;
}
