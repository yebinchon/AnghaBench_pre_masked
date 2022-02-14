
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int which ;


 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int *,int ,int*,int) ;
 int FUNC_3 (char*,...) ;

void
FUNC_4(char *VAR_0[], int VAR_1)
{
 VAR_0++;

 if (VAR_0[0] == ((void*)0)) {
  FUNC_3("missing keyword to enable/disable\n");
 } else if (FUNC_0(*VAR_0, "firewall") == 0) {
  FUNC_2("net.inet.ip.fw.enable", ((void*)0), 0,
      &VAR_1, sizeof(VAR_1));
  FUNC_2("net.inet6.ip6.fw.enable", ((void*)0), 0,
      &VAR_1, sizeof(VAR_1));
 } else if (FUNC_0(*VAR_0, "one_pass") == 0) {
  FUNC_2("net.inet.ip.fw.one_pass", ((void*)0), 0,
      &VAR_1, sizeof(VAR_1));
 } else if (FUNC_0(*VAR_0, "debug") == 0) {
  FUNC_2("net.inet.ip.fw.debug", ((void*)0), 0,
      &VAR_1, sizeof(VAR_1));
 } else if (FUNC_0(*VAR_0, "verbose") == 0) {
  FUNC_2("net.inet.ip.fw.verbose", ((void*)0), 0,
      &VAR_1, sizeof(VAR_1));
 } else if (FUNC_0(*VAR_0, "dyn_keepalive") == 0) {
  FUNC_2("net.inet.ip.fw.dyn_keepalive", ((void*)0), 0,
      &VAR_1, sizeof(VAR_1));

 } else if (FUNC_0(*VAR_0, "altq") == 0) {
  FUNC_1(VAR_1);

 } else {
  FUNC_3("unrecognize enable/disable keyword: %s\n", *VAR_0);
 }
}
