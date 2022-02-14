
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static const char *
FUNC_1(const char **VAR_0, size_t *VAR_1)
{
 int VAR_2;
 const char *VAR_3;
 size_t VAR_4;




 for (;;) {
  VAR_2 = **VAR_0;
  if (VAR_2 == 0) {
   *VAR_1 = 0;
   return ((void*)0);
  }
  if (!FUNC_0(VAR_2) && VAR_2 != ',') {
   break;
  }
  (*VAR_0) ++;
 }




 VAR_3 = *VAR_0;
 for (;;) {
  VAR_2 = *(*VAR_0);
  if (VAR_2 == 0 || VAR_2 == ',') {
   break;
  }
  (*VAR_0) ++;
 }




 VAR_4 = (size_t)(*VAR_0 - VAR_3);
 while (VAR_4 > 0 && FUNC_0(VAR_3[VAR_4 - 1])) {
  VAR_4 --;
 }
 if (VAR_2 == ',') {
  (*VAR_0) ++;
 }
 *VAR_1 = VAR_4;
 return VAR_3;
}
