
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eapol_sm {scalar_t__ eapFail; int eapSuccess; } ;



int FUNC_0(struct eapol_sm *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return 0;
 return !VAR_0->eapSuccess && VAR_0->eapFail;
}
