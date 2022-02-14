
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sec; } ;
struct wps_registrar {TYPE_1__ pbc_ignore_start; int * devices; int * pbc_sessions; int nfc_pw_tokens; int pins; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct wps_registrar *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;
 FUNC_3(&VAR_0->pins);
 FUNC_1(&VAR_0->nfc_pw_tokens, 0);
 FUNC_2(VAR_0->pbc_sessions);
 VAR_0->pbc_sessions = ((void*)0);
 FUNC_0(VAR_0->devices);
 VAR_0->devices = ((void*)0);



}
