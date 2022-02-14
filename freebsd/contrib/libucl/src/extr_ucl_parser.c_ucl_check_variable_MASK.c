
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_parser {int dummy; } ;


 char* FUNC_0 (struct ucl_parser*,char const*,size_t,size_t*,int,int*) ;

__attribute__((used)) static const char *
FUNC_1 (struct ucl_parser *VAR_0, const char *VAR_1,
  size_t VAR_2, size_t *VAR_3, bool *VAR_4)
{
 const char *VAR_5, *VAR_6, *VAR_7 = VAR_1;
 bool VAR_8 = 0;

 if (*VAR_1 == '{') {

  VAR_5 = VAR_1 + 1;
  VAR_6 = VAR_1 + VAR_2;
  while (VAR_5 < VAR_6) {
   if (*VAR_5 == '}') {
    VAR_7 = FUNC_0 (VAR_0, VAR_1 + 1, VAR_5 - VAR_1 - 1,
      VAR_3, 1, &VAR_8);
    if (VAR_8) {

     VAR_7 ++;
     if (!*VAR_4) {
      *VAR_4 = 1;
     }
    }
    else {
     *VAR_3 += 2;
    }
    break;
   }
   VAR_5 ++;
  }
 }
 else if (*VAR_1 != '$') {

  VAR_7 = FUNC_0 (VAR_0, VAR_1, VAR_2, VAR_3, 0, &VAR_8);
  if (VAR_8 && !*VAR_4) {
   *VAR_4 = 1;
  }
  if (!VAR_8) {
   (*VAR_3) ++;
  }
 }
 else {
  VAR_7 ++;
  (*VAR_3) ++;
 }

 return VAR_7;
}
