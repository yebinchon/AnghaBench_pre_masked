
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_user_mad {int addr; int timeout_ms; int status; int agent_id; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(void *VAR_0)
{
 struct ib_user_mad *VAR_1 = VAR_0;

 FUNC_0("agent id %d status %x timeout %d",
        VAR_1->agent_id, VAR_1->status, VAR_1->timeout_ms);
 FUNC_1(&VAR_1->addr);
}
