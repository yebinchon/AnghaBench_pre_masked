
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int taints; } ;
struct kernel_symbol {int dummy; } ;
typedef int Elf_Shdr ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned int,char const*,struct module*,unsigned long const*,struct module*) ;
 struct kernel_symbol* FUNC_1 (char const*,struct module**,unsigned long const**,int,int) ;
 int FUNC_2 (struct module*,struct module*) ;

__attribute__((used)) static const struct kernel_symbol *FUNC_3(Elf_Shdr *VAR_1,
        unsigned int VAR_2,
        const char *VAR_3,
        struct module *VAR_4)
{
 struct module *VAR_5;
 const struct kernel_symbol *VAR_6;
 const unsigned long *VAR_7;

 VAR_6 = FUNC_1(VAR_3, &VAR_5, &VAR_7,
     !(VAR_4->taints & (1 << VAR_0)), 1);


 if (VAR_6) {
  if (!FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_7, VAR_5)
      || !FUNC_2(VAR_4, VAR_5))
   VAR_6 = ((void*)0);
 }
 return VAR_6;
}
