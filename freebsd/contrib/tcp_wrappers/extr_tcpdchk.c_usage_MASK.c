
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 char* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(void)
{
    FUNC_1(VAR_1, "usage: %s [-a] [-d] [-i inet_conf] [-v]\n", VAR_0);
    FUNC_1(VAR_1, "	-a: report rules with implicit \"ALLOW\" at end\n");
    FUNC_1(VAR_1, "	-d: use allow/deny files in current directory\n");
    FUNC_1(VAR_1, "	-i: location of inetd.conf file\n");
    FUNC_1(VAR_1, "	-v: list all rules\n");
    FUNC_0(1);
}
