
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntlm_targetinfo {int dnstreename; int dnsservername; int dnsdomainname; int domainname; int servername; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ntlm_targetinfo*,int ,int) ;

void
FUNC_2(struct ntlm_targetinfo *VAR_0)
{
    FUNC_0(VAR_0->servername);
    FUNC_0(VAR_0->domainname);
    FUNC_0(VAR_0->dnsdomainname);
    FUNC_0(VAR_0->dnsservername);
    FUNC_0(VAR_0->dnstreename);
    FUNC_1(VAR_0, 0, sizeof(*VAR_0));
}
