
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char) ;

int
FUNC_1(const char *VAR_0, size_t VAR_1)
{
 const char *VAR_2;
 int VAR_3, VAR_4;

 if (0 == VAR_1)
  return 0;







 VAR_3 = VAR_4 = 0;
 for (VAR_2 = VAR_0 + (int)VAR_1 - 1; VAR_2 >= VAR_0; VAR_2--) {
  switch (*VAR_2) {
  case '\"':
  case '\'':
  case ']':
  case ')':
   if (0 == VAR_4)
    VAR_3 = 1;
   break;
  case '.':
  case '!':
  case '?':
   VAR_4 = 1;
   break;
  default:
   return VAR_4 &&
       (!VAR_3 || FUNC_0((unsigned char)*VAR_2));
  }
 }

 return VAR_4 && !VAR_3;
}
