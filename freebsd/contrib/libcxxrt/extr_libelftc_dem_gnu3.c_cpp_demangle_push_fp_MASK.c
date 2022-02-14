
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpp_demangle_data {char* cur; } ;


 int FUNC_0 (struct cpp_demangle_data*,char*,size_t) ;
 int FUNC_1 (char*) ;
 size_t FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(struct cpp_demangle_data *VAR_0,
    char *(*VAR_1)(const char *, size_t))
{
 size_t VAR_2;
 int VAR_3;
 const char *VAR_4;
 char *VAR_5;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return (0);

 VAR_4 = VAR_0->cur;
 while (*VAR_0->cur != 'E')
  ++VAR_0->cur;

 if ((VAR_5 = VAR_1(VAR_4, VAR_0->cur - VAR_4)) == ((void*)0))
  return (0);

 VAR_3 = 0;
 if ((VAR_2 = FUNC_2(VAR_5)) > 0)
  VAR_3 = FUNC_0(VAR_0, VAR_5, VAR_2);

 FUNC_1(VAR_5);

 ++VAR_0->cur;

 return (VAR_3);
}
