
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_auth {struct config_auth* zonefile; int allow_notify; int urls; int masters; struct config_auth* name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct config_auth*) ;

void
FUNC_2(struct config_auth* VAR_0)
{
 if(!VAR_0) return;
 FUNC_1(VAR_0->name);
 FUNC_0(VAR_0->masters);
 FUNC_0(VAR_0->urls);
 FUNC_0(VAR_0->allow_notify);
 FUNC_1(VAR_0->zonefile);
 FUNC_1(VAR_0);
}
