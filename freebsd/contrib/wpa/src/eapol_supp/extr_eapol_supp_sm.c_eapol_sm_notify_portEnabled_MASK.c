
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eapol_sm {scalar_t__ portEnabled; int force_authorized_update; } ;
typedef scalar_t__ Boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct eapol_sm*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;

void FUNC_2(struct eapol_sm *VAR_2, Boolean VAR_3)
{
 if (VAR_2 == ((void*)0))
  return;
 FUNC_1(VAR_0, "EAPOL: External notification - "
     "portEnabled=%d", VAR_3);
 if (VAR_2->portEnabled != VAR_3)
  VAR_2->force_authorized_update = VAR_1;
 VAR_2->portEnabled = VAR_3;
 FUNC_0(VAR_2);
}
