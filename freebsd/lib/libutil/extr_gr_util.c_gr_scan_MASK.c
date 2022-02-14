
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {char* gr_mem; } ;


 int FUNC_0 (char*,struct group*) ;
 int FUNC_1 (char*) ;
 struct group* FUNC_2 (struct group*) ;
 char* FUNC_3 (char const*) ;

struct group *
FUNC_4(const char *VAR_0)
{
 struct group VAR_1;
 char *VAR_2;
 struct group *VAR_3;

 if ((VAR_2 = FUNC_3(VAR_0)) == ((void*)0))
  return (((void*)0));
 if (!FUNC_0(VAR_2, &VAR_1)) {
  FUNC_1(VAR_2);
  return (((void*)0));
 }
 VAR_3 = FUNC_2(&VAR_1);
 FUNC_1(VAR_2);
 if (VAR_1.gr_mem != ((void*)0))
  FUNC_1(VAR_1.gr_mem);

 return (VAR_3);
}
