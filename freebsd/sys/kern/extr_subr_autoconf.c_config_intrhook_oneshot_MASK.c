
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct oneshot_config_hook* ich_arg; int ich_func; } ;
struct oneshot_config_hook {TYPE_1__ och_hook; void* och_arg; int och_func; } ;
typedef int ich_func_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 struct oneshot_config_hook* FUNC_1 (int,int ,int ) ;

void
FUNC_2(ich_func_t VAR_3, void *VAR_4)
{
 struct oneshot_config_hook *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_0, VAR_1);
 VAR_5->och_func = VAR_3;
 VAR_5->och_arg = VAR_4;
 VAR_5->och_hook.ich_func = VAR_2;
 VAR_5->och_hook.ich_arg = VAR_5;
 FUNC_0(&VAR_5->och_hook);
}
