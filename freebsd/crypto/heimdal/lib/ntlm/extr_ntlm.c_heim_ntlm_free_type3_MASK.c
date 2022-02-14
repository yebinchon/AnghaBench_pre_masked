
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntlm_type3 {int sessionkey; scalar_t__ ws; scalar_t__ username; scalar_t__ targetname; int ntlm; int lm; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ntlm_type3*,int ,int) ;

void
FUNC_3(struct ntlm_type3 *VAR_0)
{
    FUNC_1(&VAR_0->lm);
    FUNC_1(&VAR_0->ntlm);
    if (VAR_0->targetname)
 FUNC_0(VAR_0->targetname);
    if (VAR_0->username)
 FUNC_0(VAR_0->username);
    if (VAR_0->ws)
 FUNC_0(VAR_0->ws);
    FUNC_1(&VAR_0->sessionkey);
    FUNC_2(VAR_0, 0, sizeof(*VAR_0));
}
