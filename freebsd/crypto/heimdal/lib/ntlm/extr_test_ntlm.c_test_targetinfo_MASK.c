
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ti ;
struct ntlm_targetinfo {int avflags; int * dnsservername; } ;
struct ntlm_buf {int dummy; } ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (struct ntlm_buf*,int,struct ntlm_targetinfo*) ;
 int FUNC_2 (struct ntlm_targetinfo*,int,struct ntlm_buf*) ;
 int FUNC_3 (struct ntlm_targetinfo*) ;
 int FUNC_4 (struct ntlm_targetinfo*,int ,int) ;
 int * FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (int *,char const*) ;

__attribute__((used)) static int
FUNC_7(void)
{
    struct ntlm_targetinfo VAR_0;
    struct ntlm_buf VAR_1;
    const char *VAR_2 = "dnsservername";
    int VAR_3;

    FUNC_4(&VAR_0, 0, sizeof(VAR_0));

    VAR_0.dnsservername = FUNC_5(VAR_2);
    VAR_0.avflags = 1;
    VAR_3 = FUNC_2(&VAR_0, 1, &VAR_1);
    if (VAR_3)
 return VAR_3;

    FUNC_4(&VAR_0, 0, sizeof(VAR_0));

    VAR_3 = FUNC_1(&VAR_1, 1, &VAR_0);
    if (VAR_3)
 return VAR_3;

    if (VAR_0.dnsservername == ((void*)0) ||
 FUNC_6(VAR_0.dnsservername, VAR_2) != 0)
 FUNC_0(1, "ti.dnshostname != %s", VAR_2);
    if (VAR_0.avflags != 1)
 FUNC_0(1, "ti.avflags != 1");

    FUNC_3(&VAR_0);

    return 0;
}
