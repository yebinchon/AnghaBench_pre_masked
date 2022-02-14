
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct taskqgroup {char const* tqg_name; TYPE_1__* tqg_queue; int tqg_lock; } ;
struct TYPE_2__ {int tgc_tasks; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct taskqgroup* FUNC_1 (int,int ,int) ;
 int FUNC_2 (int *,char*,int *,int ) ;

struct taskqgroup *
FUNC_3(const char *VAR_4)
{
 struct taskqgroup *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1, VAR_2 | VAR_3);
 FUNC_2(&VAR_5->tqg_lock, "taskqgroup", ((void*)0), VAR_0);
 VAR_5->tqg_name = VAR_4;
 FUNC_0(&VAR_5->tqg_queue[0].tgc_tasks);

 return (VAR_5);
}
