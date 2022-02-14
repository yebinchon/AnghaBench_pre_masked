
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {int dummy; } ;


 struct group* FUNC_0 (struct group const*,char*,char const*,int) ;
 size_t FUNC_1 (struct group const*,char const*,int*) ;
 char* FUNC_2 (size_t) ;

struct group *
FUNC_3(const struct group *VAR_0, const char *VAR_1)
{
 char *VAR_2;
 size_t VAR_3;
 int VAR_4;

 VAR_4 = 0;
 VAR_3 = FUNC_1(VAR_0, VAR_1, &VAR_4);

 if ((VAR_2 = FUNC_2(VAR_3)) == ((void*)0))
  return (((void*)0));
 return (FUNC_0(VAR_0, VAR_2, VAR_1, VAR_4));
}
