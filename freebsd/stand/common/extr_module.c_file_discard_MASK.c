
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct preloaded_file {struct preloaded_file* f_args; struct preloaded_file* f_type; struct preloaded_file* f_name; struct preloaded_file* m_next; struct preloaded_file* m_name; struct preloaded_file* f_modules; struct preloaded_file* md_next; struct preloaded_file* f_metadata; } ;
struct kernel_module {struct kernel_module* f_args; struct kernel_module* f_type; struct kernel_module* f_name; struct kernel_module* m_next; struct kernel_module* m_name; struct kernel_module* f_modules; struct kernel_module* md_next; struct kernel_module* f_metadata; } ;
struct file_metadata {struct file_metadata* f_args; struct file_metadata* f_type; struct file_metadata* f_name; struct file_metadata* m_next; struct file_metadata* m_name; struct file_metadata* f_modules; struct file_metadata* md_next; struct file_metadata* f_metadata; } ;


 int FUNC_0 (struct preloaded_file*) ;

void
FUNC_1(struct preloaded_file *VAR_0)
{
 struct file_metadata *VAR_1, *VAR_2;
 struct kernel_module *VAR_3, *VAR_4;
 if (VAR_0 == ((void*)0))
  return;
 VAR_1 = VAR_0->f_metadata;
 while (VAR_1) {
  VAR_2 = VAR_1;
  VAR_1 = VAR_1->md_next;
  FUNC_0(VAR_2);
 }
 VAR_3 = VAR_0->f_modules;
 while (VAR_3) {
  FUNC_0(VAR_3->m_name);
  VAR_4 = VAR_3;
  VAR_3 = VAR_3->m_next;
  FUNC_0(VAR_4);
 }
 FUNC_0(VAR_0->f_name);
 FUNC_0(VAR_0->f_type);
 FUNC_0(VAR_0->f_args);
 FUNC_0(VAR_0);
}
