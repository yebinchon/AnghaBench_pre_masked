
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_stub {int addrs; int hosts; struct config_stub* name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct config_stub*) ;

void
FUNC_2(struct config_stub* VAR_0)
{
 if(!VAR_0) return;
 FUNC_1(VAR_0->name);
 FUNC_0(VAR_0->hosts);
 FUNC_0(VAR_0->addrs);
 FUNC_1(VAR_0);
}
