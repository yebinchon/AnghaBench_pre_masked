
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntlm_type1 {scalar_t__ hostname; scalar_t__ domain; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct ntlm_type1*,int ,int) ;

void
FUNC_2(struct ntlm_type1 *VAR_0)
{
    if (VAR_0->domain)
 FUNC_0(VAR_0->domain);
    if (VAR_0->hostname)
 FUNC_0(VAR_0->hostname);
    FUNC_1(VAR_0, 0, sizeof(*VAR_0));
}
