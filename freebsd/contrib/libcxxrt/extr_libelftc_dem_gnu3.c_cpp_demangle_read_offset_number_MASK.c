
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpp_demangle_data {char* cur; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct cpp_demangle_data*,char const*,int) ;

__attribute__((used)) static int
FUNC_2(struct cpp_demangle_data *VAR_0)
{
 bool VAR_1;
 const char *VAR_2;

 if (VAR_0 == ((void*)0) || *VAR_0->cur == '\0')
  return (0);


 if (*VAR_0->cur == 'n') {
  VAR_1 = 1;
  VAR_2 = VAR_0->cur + 1;
 } else {
  VAR_1 = 0;
  VAR_2 = VAR_0->cur;
 }

 while (*VAR_0->cur != '_')
  ++VAR_0->cur;

 if (VAR_1 && !FUNC_1(VAR_0, "-", 1))
  return (0);

 FUNC_0(VAR_2 != ((void*)0));

 if (!FUNC_1(VAR_0, VAR_2, VAR_0->cur - VAR_2))
  return (0);
 if (!FUNC_1(VAR_0, " ", 1))
  return (0);

 ++VAR_0->cur;

 return (1);
}
