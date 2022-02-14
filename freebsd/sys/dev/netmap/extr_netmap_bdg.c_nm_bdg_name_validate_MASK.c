
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_2, size_t VAR_3)
{
 int VAR_4 = -1;
 int VAR_5;

 if (!VAR_2 || FUNC_1(VAR_2) < VAR_3) {
  return -1;
 }

 for (VAR_5 = 0; VAR_5 < VAR_1 && VAR_2[VAR_5]; VAR_5++) {
  if (VAR_2[VAR_5] == ':') {
   VAR_4 = VAR_5;
   break;
  } else if (!FUNC_0(VAR_2[VAR_5])) {
   return -1;
  }
 }

 if (FUNC_1(VAR_2) - VAR_4 > VAR_0) {

  return -1;
 }

 return VAR_4;
}
