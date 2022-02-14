
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_sm {scalar_t__ preauth_eapol; void* scard_ctx; } ;


 int FUNC_0 (scalar_t__,void*) ;

void FUNC_1(struct wpa_sm *VAR_0, void *VAR_1)
{
 if (VAR_0 == ((void*)0))
  return;
 VAR_0->scard_ctx = VAR_1;
 if (VAR_0->preauth_eapol)
  FUNC_0(VAR_0->preauth_eapol, VAR_1);
}
