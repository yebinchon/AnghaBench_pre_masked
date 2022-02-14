
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct waiting_tcp {scalar_t__ timer; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct waiting_tcp*) ;

__attribute__((used)) static void
FUNC_2(struct waiting_tcp* VAR_0)
{
 if(!VAR_0) return;
 if(VAR_0->timer)
  FUNC_0(VAR_0->timer);
 FUNC_1(VAR_0);
}
