
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int,char**,size_t*) ;

__attribute__((used)) static int
FUNC_2(size_t VAR_0, size_t VAR_1, int VAR_2, char **VAR_3, size_t *VAR_4) {
 size_t VAR_5 = *VAR_4;
 char *VAR_6 = *VAR_3;
 int VAR_7;

 if (VAR_2 || VAR_0 >= VAR_1 - 1) {
  FUNC_0(FUNC_1("  ", 2, VAR_3, VAR_4));
  VAR_2 = 1;
 } else {
  for (VAR_7 = (VAR_1 - VAR_0 - 1) / 8; VAR_7 >= 0; VAR_7--)
   if (FUNC_1("\t", 1, VAR_3, VAR_4) < 0) {
    *VAR_4 = VAR_5;
    *VAR_3 = VAR_6;
    return (-1);
   }
  VAR_2 = 0;
 }
 return (VAR_2);
}
