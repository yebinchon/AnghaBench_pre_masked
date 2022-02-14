
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eapol_sm {int authWhile; int heldWhile; int startWhen; int idleWhile; scalar_t__ timer_tick_enabled; } ;


 int VAR_0 ;
 int FUNC_0 (struct eapol_sm*) ;
 scalar_t__ FUNC_1 (int,int ,void (*) (void*,void*),void*,struct eapol_sm*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(void *VAR_1, void *VAR_2)
{
 struct eapol_sm *VAR_3 = VAR_2;

 if (VAR_3->authWhile > 0) {
  VAR_3->authWhile--;
  if (VAR_3->authWhile == 0)
   FUNC_2(VAR_0, "EAPOL: authWhile --> 0");
 }
 if (VAR_3->heldWhile > 0) {
  VAR_3->heldWhile--;
  if (VAR_3->heldWhile == 0)
   FUNC_2(VAR_0, "EAPOL: heldWhile --> 0");
 }
 if (VAR_3->startWhen > 0) {
  VAR_3->startWhen--;
  if (VAR_3->startWhen == 0)
   FUNC_2(VAR_0, "EAPOL: startWhen --> 0");
 }
 if (VAR_3->idleWhile > 0) {
  VAR_3->idleWhile--;
  if (VAR_3->idleWhile == 0)
   FUNC_2(VAR_0, "EAPOL: idleWhile --> 0");
 }

 if (VAR_3->authWhile | VAR_3->heldWhile | VAR_3->startWhen | VAR_3->idleWhile) {
  if (FUNC_1(1, 0, FUNC_3,
        VAR_1, VAR_3) < 0)
   VAR_3->timer_tick_enabled = 0;
 } else {
  FUNC_2(VAR_0, "EAPOL: disable timer tick");
  VAR_3->timer_tick_enabled = 0;
 }
 FUNC_0(VAR_3);
}
