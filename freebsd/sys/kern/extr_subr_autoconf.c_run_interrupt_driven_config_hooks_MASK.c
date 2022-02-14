
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_config_hook {int ich_arg; int (* ich_func ) (int ) ;} ;


 struct intr_config_hook* FUNC_0 (struct intr_config_hook*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct intr_config_hook* VAR_2 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4()
{
 static int VAR_3;
 struct intr_config_hook *VAR_4;

 FUNC_1(&VAR_1);







 if (VAR_3 != 0) {
  FUNC_2(&VAR_1);
  return;
 }
 VAR_3 = 1;

 while (VAR_2 != ((void*)0)) {
  VAR_4 = VAR_2;
  VAR_2 = FUNC_0(VAR_4, VAR_0);
  FUNC_2(&VAR_1);
  (*VAR_4->ich_func)(VAR_4->ich_arg);
  FUNC_1(&VAR_1);
 }

 VAR_3 = 0;
 FUNC_2(&VAR_1);
}
