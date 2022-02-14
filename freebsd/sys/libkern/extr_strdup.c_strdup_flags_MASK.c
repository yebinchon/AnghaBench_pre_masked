
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct malloc_type {int dummy; } ;


 int FUNC_0 (char const*,char*,size_t) ;
 char* FUNC_1 (size_t,struct malloc_type*,int) ;
 int FUNC_2 (char const*) ;

char *
FUNC_3(const char *VAR_0, struct malloc_type *VAR_1, int VAR_2)
{
 size_t VAR_3;
 char *VAR_4;

 VAR_3 = FUNC_2(VAR_0) + 1;
 VAR_4 = FUNC_1(VAR_3, VAR_1, VAR_2);
 if (VAR_4 == ((void*)0))
  return (((void*)0));
 FUNC_0(VAR_0, VAR_4, VAR_3);
 return (VAR_4);
}
