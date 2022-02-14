
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hs20_osu_client {int ifname; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,char const*) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(struct hs20_osu_client *VAR_1, const char *VAR_2)
{
 char VAR_3[300];
 FUNC_0(VAR_3, sizeof(VAR_3), "REMOVE_CRED provisioning_sp=%s", VAR_2);
 if (FUNC_1(VAR_1->ifname, VAR_3) < 0)
  FUNC_2(VAR_0, "Failed to remove old credential(s)");
}
