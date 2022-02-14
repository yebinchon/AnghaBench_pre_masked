
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct malloc_type {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,char*,size_t) ;
 char* FUNC_1 (size_t,struct malloc_type*,int ) ;
 int FUNC_2 (char const*,size_t) ;

char *
FUNC_3(const char *VAR_1, size_t VAR_2, struct malloc_type *VAR_3)
{
 size_t VAR_4;
 char *VAR_5;

 VAR_4 = FUNC_2(VAR_1, VAR_2) + 1;
 VAR_5 = FUNC_1(VAR_4, VAR_3, VAR_0);
 FUNC_0(VAR_1, VAR_5, VAR_4);
 VAR_5[VAR_4 - 1] = '\0';
 return (VAR_5);
}
