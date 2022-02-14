
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpp_demangle_data {char* cur; } ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 long FUNC_2 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_3(struct cpp_demangle_data *VAR_1, long *VAR_2)
{
 long VAR_3, VAR_4;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
  return (0);

 VAR_4 = 1;
 if (*VAR_1->cur == 'n') {
  VAR_4 = -1;

  ++VAR_1->cur;
 }
 if (FUNC_0(*VAR_1->cur) == 0)
  return (0);

 VAR_0 = 0;
 if ((VAR_3 = FUNC_2(VAR_1->cur, (char **) ((void*)0), 10)) == 0 &&
     VAR_0 != 0)
  return (0);

 while (FUNC_0(*VAR_1->cur) != 0)
  ++VAR_1->cur;

 FUNC_1(VAR_3 >= 0);
 FUNC_1(VAR_4 == 1 || VAR_4 == -1);

 *VAR_2 = VAR_3 * VAR_4;

 return (1);
}
