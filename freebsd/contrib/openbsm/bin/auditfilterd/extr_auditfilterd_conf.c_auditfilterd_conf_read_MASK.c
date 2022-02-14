
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auditfilter_module_list {int dummy; } ;
struct auditfilter_module {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct auditfilter_module_list*,struct auditfilter_module*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct auditfilter_module_list*) ;
 struct auditfilter_module* FUNC_2 (char const*,int,char*) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (char*,int,int *) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_4, FILE *VAR_5,
    struct auditfilter_module_list *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 struct auditfilter_module *VAR_10;
 char VAR_11[VAR_1];

 VAR_9 = 0;
 VAR_8 = 0;
 while (!FUNC_3(VAR_5) && !FUNC_4(VAR_5)) {
  if (FUNC_5(VAR_11, VAR_1, VAR_5) == ((void*)0))
   break;
  VAR_8++;
  if (VAR_11[0] == '#' || FUNC_6(VAR_11) < 1)
   continue;
  VAR_11[FUNC_6(VAR_11)-1] = '\0';
  VAR_10 = FUNC_2(VAR_4, VAR_8, VAR_11);
  if (VAR_10 == ((void*)0)) {
   VAR_9 = 1;
   break;
  }
  FUNC_0(VAR_6, VAR_10, VAR_2);
 }




 if (FUNC_4(VAR_5)) {
  VAR_7 = VAR_3;
  FUNC_1(VAR_6);
  VAR_3 = VAR_7;
  return (-1);
 }




 if (VAR_9) {
  FUNC_1(VAR_6);
  VAR_3 = VAR_0;
  return (-1);
 }
 return (0);
}
