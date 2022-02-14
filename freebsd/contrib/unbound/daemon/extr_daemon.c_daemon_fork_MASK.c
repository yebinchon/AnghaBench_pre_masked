
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct daemon {int use_response_ip; TYPE_2__** workers; scalar_t__ need_to_exit; int * ports; TYPE_4__* cfg; int mods; TYPE_1__* env; int respip_set; int views; int local_zones; int dnscenv; int tcl; int acl; } ;
struct TYPE_16__ {scalar_t__ dnscrypt; } ;
struct TYPE_15__ {scalar_t__ need_to_exit; } ;
struct TYPE_14__ {int auth_zones; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_4__*,int ) ;
 int FUNC_1 (int ,TYPE_4__*,int) ;
 int FUNC_2 (struct daemon*) ;
 int FUNC_3 (struct daemon*) ;
 int FUNC_4 (struct daemon*) ;
 int FUNC_5 (struct daemon*) ;
 int FUNC_6 (int ,TYPE_4__*) ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,TYPE_4__*) ;
 int FUNC_10 () ;
 int FUNC_11 (struct daemon*) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (int *,char*) ;
 int FUNC_15 (int ,TYPE_4__*) ;
 int FUNC_16 () ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,TYPE_4__*,int*) ;
 int FUNC_19 (int ,char*) ;
 int FUNC_20 (struct daemon*) ;
 int FUNC_21 (struct daemon*) ;
 int FUNC_22 (TYPE_2__*) ;
 int FUNC_23 (int ,TYPE_4__*) ;
 int FUNC_24 (int ,TYPE_4__*) ;
 int FUNC_25 () ;
 int FUNC_26 (TYPE_2__*,TYPE_4__*,int ,int) ;
 int FUNC_27 (TYPE_2__*) ;

void
FUNC_28(struct daemon* VAR_1)
{
 int VAR_2 = 0;

 FUNC_11(VAR_1);
 if(!(VAR_1->views = FUNC_25()))
  FUNC_8("Could not create views: out of memory");

 if(!FUNC_24(VAR_1->views, VAR_1->cfg))
  FUNC_8("Could not set up views");

 if(!FUNC_0(VAR_1->acl, VAR_1->cfg, VAR_1->views))
  FUNC_8("Could not setup access control list");
 if(!FUNC_23(VAR_1->tcl, VAR_1->cfg))
  FUNC_8("Could not setup TCP connection limits");
 if(VAR_1->cfg->dnscrypt) {






  FUNC_8("dnscrypt enabled in config but unbound was not built with "
       "dnscrypt support");

 }

 if(!(VAR_1->local_zones = FUNC_10()))
  FUNC_8("Could not create local zones: out of memory");
 if(!FUNC_9(VAR_1->local_zones, VAR_1->cfg))
  FUNC_8("Could not set up local zones");


 if(!(VAR_1->respip_set = FUNC_16()))
  FUNC_8("Could not create response IP set");
 if(!FUNC_15(VAR_1->respip_set, VAR_1->cfg))
  FUNC_8("Could not set up response IP set");
 if(!FUNC_18(VAR_1->views, VAR_1->cfg,
  &VAR_2))
  FUNC_8("Could not set up per-view response IP sets");
 VAR_1->use_response_ip = !FUNC_17(VAR_1->respip_set) ||
  VAR_2;


 if(!FUNC_1(VAR_1->env->auth_zones, VAR_1->cfg, 1))
  FUNC_8("auth_zones could not be setup");


 FUNC_3(VAR_1);




 if(VAR_1->use_response_ip &&
  FUNC_14(&VAR_1->mods, "respip") < 0)
  FUNC_8("response-ip options require respip module");




 FUNC_2(VAR_1);
 FUNC_4(VAR_1);






 if(!FUNC_26(VAR_1->workers[0], VAR_1->cfg, VAR_1->ports[0], 1))
  FUNC_8("Could not initialize main thread");

 FUNC_22(VAR_1->workers[0]);

 if (!FUNC_20(VAR_1))
  FUNC_13("SHM has failed");





 FUNC_12("start of service (%s).", VAR_0);
 FUNC_27(VAR_1->workers[0]);






 FUNC_12("service stopped (%s).", VAR_0);


 FUNC_5(VAR_1);


 FUNC_21(VAR_1);

 VAR_1->need_to_exit = VAR_1->workers[0]->need_to_exit;
}
