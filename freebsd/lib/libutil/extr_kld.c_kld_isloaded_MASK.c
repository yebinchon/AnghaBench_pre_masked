
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module_stat {int version; char const* name; } ;
struct kld_file_stat {int version; char const* name; } ;
typedef int mstat ;
typedef int fstat ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,struct kld_file_stat*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,struct module_stat*) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;
 size_t FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char const*,char const*,int) ;
 char* FUNC_8 (char const*,char*) ;

int
FUNC_9(const char *VAR_0)
{
 struct kld_file_stat VAR_1;
 struct module_stat VAR_2;
 const char *VAR_3;
 int VAR_4, VAR_5;

 for (VAR_4 = FUNC_1(0); VAR_4 > 0; VAR_4 = FUNC_1(VAR_4)) {
  VAR_1.version = sizeof(VAR_1);
  if (FUNC_2(VAR_4, &VAR_1) != 0)
   continue;

  if (FUNC_5(VAR_1.name, VAR_0) == 0)
   return (1);

  if ((VAR_3 = FUNC_8(VAR_1.name, ".ko")) != ((void*)0) &&
      FUNC_6(VAR_0) == (size_t)(VAR_3 - VAR_1.name) &&
      FUNC_7(VAR_1.name, VAR_0, VAR_3 - VAR_1.name) == 0)
   return (1);

  for (VAR_5 = FUNC_0(VAR_4); VAR_5 > 0; VAR_5 = FUNC_3(VAR_5)) {
   VAR_2.version = sizeof(VAR_2);
   if (FUNC_4(VAR_5, &VAR_2) != 0)
    continue;
   if (FUNC_5(VAR_2.name, VAR_0) == 0)
    return (1);
  }
 }
 return (0);
}
