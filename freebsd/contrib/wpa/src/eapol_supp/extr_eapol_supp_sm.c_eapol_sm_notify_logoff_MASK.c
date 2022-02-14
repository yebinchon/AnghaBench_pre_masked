
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eapol_sm {scalar_t__ startWhen; int userLogoff; } ;
typedef int Boolean ;


 int FUNC_0 (struct eapol_sm*) ;

void FUNC_1(struct eapol_sm *VAR_0, Boolean VAR_1)
{
 if (VAR_0) {
  VAR_0->userLogoff = VAR_1;
  if (!VAR_1) {

   VAR_0->startWhen = 0;
  }
  FUNC_0(VAR_0);
 }
}
