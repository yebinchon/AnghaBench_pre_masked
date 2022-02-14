
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntlm_type2 {int targetinfo; scalar_t__ targetname; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ntlm_type2*,int ,int) ;

void
FUNC_3(struct ntlm_type2 *VAR_0)
{
    if (VAR_0->targetname)
 FUNC_0(VAR_0->targetname);
    FUNC_1(&VAR_0->targetinfo);
    FUNC_2(VAR_0, 0, sizeof(*VAR_0));
}
