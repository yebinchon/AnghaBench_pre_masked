
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_data {char* p; int class_name; int vec; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 size_t FUNC_1 (char*,char**,int) ;
 int FUNC_2 (int *,char*,size_t) ;

__attribute__((used)) static bool
FUNC_3(struct demangle_data *VAR_3)
{
 size_t VAR_4;
 char *VAR_5;

 if (VAR_3 == ((void*)0))
  return (0);

 VAR_4 = FUNC_1(VAR_3->p, &VAR_5, 10);
 if (VAR_4 == 0 && (VAR_2 == VAR_0 || VAR_2 == VAR_1))
  return (0);

 FUNC_0(VAR_4 > 0);
 FUNC_0(VAR_5 != ((void*)0));

 if (FUNC_2(&VAR_3->vec, VAR_5, VAR_4) == 0)
  return (0);

 VAR_3->p = VAR_5 + VAR_4;

 VAR_3->class_name = 1;

 return (1);
}
