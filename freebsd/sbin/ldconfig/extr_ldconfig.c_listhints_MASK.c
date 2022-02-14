
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shlib_list {char* name; int major; int minor; char* path; struct shlib_list* next; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*,...) ;
 struct shlib_list* VAR_2 ;

__attribute__((used)) static void
FUNC_1(void)
{
 struct shlib_list *VAR_3;
 int VAR_4;

 FUNC_0("%s:\n", VAR_1);
 FUNC_0("\tsearch directories: %s\n", VAR_0);

 for (VAR_4 = 0, VAR_3 = VAR_2; VAR_3; VAR_4++, VAR_3 = VAR_3->next)
  FUNC_0("\t%d:-l%s.%d.%d => %s\n",
   VAR_4, VAR_3->name, VAR_3->major, VAR_3->minor, VAR_3->path);

 return;
}
