
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpp_demangle_data {char* cur; } ;


 int FUNC_0 (char) ;
 int FUNC_1 (struct cpp_demangle_data*,int ) ;
 int FUNC_2 (struct cpp_demangle_data*,char const*,int) ;
 int FUNC_3 (struct cpp_demangle_data*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_4(struct cpp_demangle_data *VAR_4)
{
 const char *VAR_5;

 if (VAR_4 == ((void*)0) || *(++VAR_4->cur) == '\0')
  return (0);

 if (*VAR_4->cur == '_' && *(VAR_4->cur + 1) == 'Z') {
  VAR_4->cur += 2;
  if (*VAR_4->cur == '\0')
   return (0);
  if (!FUNC_3(VAR_4))
   return (0);
  ++VAR_4->cur;
  return (1);
 }

 switch (*VAR_4->cur) {
 case 'b':
  if (*(VAR_4->cur + 2) != 'E')
   return (0);
  switch (*(++VAR_4->cur)) {
  case '0':
   VAR_4->cur += 2;
   return (FUNC_2(VAR_4, "false", 5));
  case '1':
   VAR_4->cur += 2;
   return (FUNC_2(VAR_4, "true", 4));
  default:
   return (0);
  }

 case 'd':
  ++VAR_4->cur;
  return (FUNC_1(VAR_4, VAR_0));

 case 'e':
  ++VAR_4->cur;
  if (sizeof(long double) == 10)
   return (FUNC_1(VAR_4,
       VAR_0));
  return (FUNC_1(VAR_4, VAR_3));

 case 'f':
  ++VAR_4->cur;
  return (FUNC_1(VAR_4, VAR_1));

 case 'g':
  ++VAR_4->cur;
  if (sizeof(long double) == 16)
   return (FUNC_1(VAR_4,
       VAR_0));
  return (FUNC_1(VAR_4, VAR_2));

 case 'i':
 case 'j':
 case 'l':
 case 'm':
 case 'n':
 case 's':
 case 't':
 case 'x':
 case 'y':
  if (*(++VAR_4->cur) == 'n') {
   if (!FUNC_2(VAR_4, "-", 1))
    return (0);
   ++VAR_4->cur;
  }
  VAR_5 = VAR_4->cur;
  while (*VAR_4->cur != 'E') {
   if (!FUNC_0(*VAR_4->cur))
    return (0);
   ++VAR_4->cur;
  }
  ++VAR_4->cur;
  return (FUNC_2(VAR_4, VAR_5,
      VAR_4->cur - VAR_5 - 1));

 default:
  return (0);
 }
}
