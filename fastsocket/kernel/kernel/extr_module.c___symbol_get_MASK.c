
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dummy; } ;
struct kernel_symbol {scalar_t__ value; } ;


 struct kernel_symbol* FUNC_0 (char const*,struct module**,int *,int,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct module*) ;

void *FUNC_4(const char *VAR_0)
{
 struct module *VAR_1;
 const struct kernel_symbol *VAR_2;

 FUNC_1();
 VAR_2 = FUNC_0(VAR_0, &VAR_1, ((void*)0), 1, 1);
 if (VAR_2 && FUNC_3(VAR_1))
  VAR_2 = ((void*)0);
 FUNC_2();

 return VAR_2 ? (void *)VAR_2->value : ((void*)0);
}
