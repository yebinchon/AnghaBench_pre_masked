
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct daemon_remote {TYPE_1__* worker; } ;
struct TYPE_2__ {int base; scalar_t__ need_to_exit; } ;
typedef int RES ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(RES* VAR_0, struct daemon_remote* VAR_1)
{
 VAR_1->worker->need_to_exit = 0;
 FUNC_0(VAR_1->worker->base);
 FUNC_1(VAR_0);
}
