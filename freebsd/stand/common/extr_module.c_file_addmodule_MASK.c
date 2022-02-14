
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct preloaded_file {struct kernel_module* f_modules; } ;
struct mod_depend {int md_ver_preferred; } ;
struct kernel_module {int m_version; struct kernel_module* m_next; struct preloaded_file* m_fp; int * m_name; } ;
typedef int mdepend ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mod_depend*,int) ;
 struct kernel_module* FUNC_1 (int,int) ;
 struct kernel_module* FUNC_2 (struct preloaded_file*,char*,struct mod_depend*) ;
 int FUNC_3 (struct kernel_module*) ;
 int * FUNC_4 (char*) ;

int
FUNC_5(struct preloaded_file *VAR_2, char *VAR_3, int VAR_4,
 struct kernel_module **VAR_5)
{
 struct kernel_module *VAR_6;
 struct mod_depend VAR_7;

 FUNC_0(&VAR_7, sizeof(VAR_7));
 VAR_7.md_ver_preferred = VAR_4;
 VAR_6 = FUNC_2(VAR_2, VAR_3, &VAR_7);
 if (VAR_6)
  return (VAR_0);
 VAR_6 = FUNC_1(1, sizeof(struct kernel_module));
 if (VAR_6 == ((void*)0))
  return (VAR_1);
 VAR_6->m_name = FUNC_4(VAR_3);
 if (VAR_6->m_name == ((void*)0)) {
  FUNC_3(VAR_6);
  return (VAR_1);
 }
 VAR_6->m_version = VAR_4;
 VAR_6->m_fp = VAR_2;
 VAR_6->m_next = VAR_2->f_modules;
 VAR_2->f_modules = VAR_6;
 if (VAR_5)
  *VAR_5 = VAR_6;
 return (0);
}
