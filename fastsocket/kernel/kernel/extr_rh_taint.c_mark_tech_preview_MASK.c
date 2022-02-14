
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {char* name; unsigned int taints; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (char*,char const*) ;

void FUNC_2(const char *VAR_1, struct module *VAR_2)
{
 const char *VAR_3 = ((void*)0);

 if (VAR_1)
  VAR_3 = VAR_1;
 else if (VAR_2 && VAR_2->name)
  VAR_3 = VAR_2->name;

 FUNC_1("TECH PREVIEW: %s may not be fully supported.\n"
     "Please review provided documentation for limitations.\n",
     (VAR_3 ? VAR_3 : "kernel"));
 FUNC_0(VAR_0);
 if (VAR_2)
         VAR_2->taints |= (1U << VAR_0);
}
