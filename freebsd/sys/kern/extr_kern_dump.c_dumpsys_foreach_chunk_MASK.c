
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dump_pa {int dummy; } ;
typedef int (* dumpsys_callback_t ) (struct dump_pa*,int ,void*) ;


 struct dump_pa* FUNC_0 (struct dump_pa*) ;
 int FUNC_1 (struct dump_pa*,int ,void*) ;

int
FUNC_2(dumpsys_callback_t VAR_0, void *VAR_1)
{
 struct dump_pa *VAR_2;
 int VAR_3, VAR_4;

 VAR_4 = 0;
 VAR_2 = FUNC_0(((void*)0));
 while (VAR_2 != ((void*)0)) {
  VAR_3 = (*VAR_0)(VAR_2, VAR_4++, VAR_1);
  if (VAR_3)
   return (-VAR_3);
  VAR_2 = FUNC_0(VAR_2);
 }
 return (VAR_4);
}
