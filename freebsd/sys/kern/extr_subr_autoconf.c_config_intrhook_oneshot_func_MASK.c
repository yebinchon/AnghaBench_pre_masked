
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oneshot_config_hook {int och_hook; int och_arg; int (* och_func ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct oneshot_config_hook*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1)
{
 struct oneshot_config_hook *VAR_2;

 VAR_2 = VAR_1;
 VAR_2->och_func(VAR_2->och_arg);
 FUNC_0(&VAR_2->och_hook);
 FUNC_1(VAR_2, VAR_0);
}
