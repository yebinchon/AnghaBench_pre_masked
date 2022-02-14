
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eapol_sm {int timer_tick_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,struct eapol_sm*) ;
 scalar_t__ FUNC_1 (int,int ,int ,int *,struct eapol_sm*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(struct eapol_sm *VAR_2)
{
 if (VAR_2->timer_tick_enabled)
  return;
 FUNC_2(VAR_0, "EAPOL: enable timer tick");
 FUNC_0(VAR_1, ((void*)0), VAR_2);
 if (FUNC_1(1, 0, VAR_1, ((void*)0), VAR_2) == 0)
  VAR_2->timer_tick_enabled = 1;
}
