
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct eap_eke_session {scalar_t__ prf_len; scalar_t__ nonce_len; scalar_t__ auth_len; scalar_t__ dhcomp_len; scalar_t__ pnonce_len; scalar_t__ pnonce_ps_len; void* mac; void* encr; void* dhgroup; void* prf; } ;


 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*,void*) ;
 scalar_t__ FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (void*) ;

int FUNC_6(struct eap_eke_session *VAR_0, u8 VAR_1, u8 VAR_2,
    u8 VAR_3, u8 VAR_4)
{
 VAR_0->dhgroup = VAR_1;
 VAR_0->encr = VAR_2;
 VAR_0->prf = VAR_3;
 VAR_0->mac = VAR_4;

 VAR_0->prf_len = FUNC_5(VAR_3);
 VAR_0->nonce_len = FUNC_2(VAR_3);
 VAR_0->auth_len = FUNC_0(VAR_3);
 VAR_0->dhcomp_len = FUNC_1(VAR_0->dhgroup, VAR_0->encr);
 VAR_0->pnonce_len = FUNC_3(VAR_0->mac);
 VAR_0->pnonce_ps_len = FUNC_4(VAR_0->mac);
 if (VAR_0->prf_len < 0 || VAR_0->nonce_len < 0 || VAR_0->auth_len < 0 ||
     VAR_0->dhcomp_len < 0 || VAR_0->pnonce_len < 0 ||
     VAR_0->pnonce_ps_len < 0)
  return -1;

 return 0;
}
