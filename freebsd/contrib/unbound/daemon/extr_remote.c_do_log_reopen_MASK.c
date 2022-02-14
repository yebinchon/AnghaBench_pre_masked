
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct config_file* cfg; } ;
struct worker {TYPE_1__ env; } ;
struct config_file {int chrootdir; int use_syslog; int logfile; } ;
typedef int RES ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(RES* VAR_0, struct worker* VAR_1)
{
 struct config_file* VAR_2 = VAR_1->env.cfg;
 FUNC_1(VAR_0);
 FUNC_0(VAR_2->logfile, VAR_2->use_syslog, VAR_2->chrootdir);
}
