
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*,int const*) ;
 int FUNC_1 (int const*,int const*) ;
 int FUNC_2 (int const*,int const*) ;
 scalar_t__ FUNC_3 (int const*,char*) ;
 int * FUNC_4 (int const*,char const*) ;
 char* FUNC_5 (int const*,int*,void**) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

__attribute__((used)) static int
FUNC_7(const nvlist_t *VAR_3, const nvlist_t *VAR_4)
{
 const nvlist_t *VAR_5;
 const char *VAR_6;
 void *VAR_7;
 int VAR_8, VAR_9;

 if (VAR_3 != ((void*)0) && FUNC_3(VAR_3, "cmds") &&
     !FUNC_3(VAR_4, "cmds")) {
  return (VAR_1);
 }
 if (VAR_3 != ((void*)0) && FUNC_3(VAR_3, "fields") &&
     !FUNC_3(VAR_4, "fields")) {
  return (VAR_1);
 }
 if (VAR_3 != ((void*)0) && FUNC_3(VAR_3, "groups") &&
     !FUNC_3(VAR_4, "groups")) {
  return (VAR_1);
 }

 VAR_7 = ((void*)0);
 while ((VAR_6 = FUNC_5(VAR_4, &VAR_9, &VAR_7)) != ((void*)0)) {
  if (VAR_9 != VAR_2)
   return (VAR_0);
  VAR_5 = FUNC_4(VAR_4, VAR_6);
  if (FUNC_6(VAR_6, "cmds") == 0)
   VAR_8 = FUNC_0(VAR_3, VAR_5);
  else if (FUNC_6(VAR_6, "fields") == 0)
   VAR_8 = FUNC_1(VAR_3, VAR_5);
  else if (FUNC_6(VAR_6, "groups") == 0)
   VAR_8 = FUNC_2(VAR_3, VAR_5);
  else
   VAR_8 = VAR_0;
  if (VAR_8 != 0)
   return (VAR_8);
 }

 return (0);
}
