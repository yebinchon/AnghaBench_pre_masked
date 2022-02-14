
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_param {int sched_priority; } ;
struct rtprio {scalar_t__ prio; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_3 (int ,int,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,struct sched_param*) ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_8(void)
{
 if (!VAR_9)
  FUNC_1(VAR_1, "set_process_priority: No way found to improve our priority");
}
