
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct preloaded_file {struct kernel_module* f_modules; } ;
struct kernel_module {struct kernel_module* m_next; } ;



__attribute__((used)) static int
FUNC_0(struct preloaded_file *VAR_0)
{
 struct kernel_module *VAR_1;
 int VAR_2 = 0;

 for (VAR_1 = VAR_0->f_modules; VAR_1 != ((void*)0); VAR_1 = VAR_1->m_next)
  VAR_2++;

 return (VAR_2);
}
