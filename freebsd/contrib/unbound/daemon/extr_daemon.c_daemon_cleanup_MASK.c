
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct daemon {int num; int * cfg; int * dnscenv; int * dtenv; int superalloc; int * workers; int rc; TYPE_2__* env; int * views; int * respip_set; int * local_zones; } ;
struct TYPE_4__ {scalar_t__ auth_zones; int * msg_cache; TYPE_1__* rrset_cache; } ;
struct TYPE_3__ {int table; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct daemon*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;

void
FUNC_14(struct daemon* VAR_0)
{
 int VAR_1;
 FUNC_7(VAR_0);


 FUNC_10();
 FUNC_8(((void*)0));



 FUNC_11(&VAR_0->env->rrset_cache->table);
 FUNC_11(VAR_0->env->msg_cache);
 FUNC_6(VAR_0->local_zones);
 VAR_0->local_zones = ((void*)0);
 FUNC_9(VAR_0->respip_set);
 VAR_0->respip_set = ((void*)0);
 FUNC_12(VAR_0->views);
 VAR_0->views = ((void*)0);
 if(VAR_0->env->auth_zones)
  FUNC_1(VAR_0->env->auth_zones);

 FUNC_2(VAR_0->rc);
 for(VAR_1=0; VAR_1<VAR_0->num; VAR_1++)
  FUNC_13(VAR_0->workers[VAR_1]);
 FUNC_5(VAR_0->workers);
 VAR_0->workers = ((void*)0);
 VAR_0->num = 0;
 FUNC_0(&VAR_0->superalloc);
 VAR_0->cfg = ((void*)0);
}
