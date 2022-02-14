
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kcm_ntlm_cred {int nthash; struct kcm_ntlm_cred* domain; struct kcm_ntlm_cred* user; } ;


 int FUNC_0 (struct kcm_ntlm_cred*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct kcm_ntlm_cred *VAR_0)
{
    FUNC_0(VAR_0->user);
    FUNC_0(VAR_0->domain);
    FUNC_1(&VAR_0->nthash);
    FUNC_0(VAR_0);
}
