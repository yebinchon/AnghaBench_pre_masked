
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifgroupreq {int ifgr_len; struct ifg_req* ifgr_groups; } ;
struct ifg_req {char* ifgrq_group; } ;
struct ifaddrs {int ifa_name; } ;
typedef int ifconfig_handle_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct ifg_req*) ;
 scalar_t__ FUNC_2 (int *,int ,struct ifgroupreq*) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static void
FUNC_5(ifconfig_handle_t *VAR_0, struct ifaddrs *VAR_1)
{
 struct ifgroupreq VAR_2;
 struct ifg_req *VAR_3;
 int VAR_4;
 int VAR_5 = 0;

 if (FUNC_2(VAR_0, VAR_1->ifa_name, &VAR_2) != 0) {
  FUNC_0(1, "Failed to get groups");
 }

 VAR_3 = VAR_2.ifgr_groups;
 VAR_4 = VAR_2.ifgr_len;
 for (; VAR_3 && VAR_4 >= sizeof(struct ifg_req); VAR_3++) {
  VAR_4 -= sizeof(struct ifg_req);
  if (FUNC_4(VAR_3->ifgrq_group, "all")) {
   if (VAR_5 == 0) {
    FUNC_3("\tgroups: ");
   }
   VAR_5++;
   FUNC_3("%s ", VAR_3->ifgrq_group);
  }
 }
 if (VAR_5) {
  FUNC_3("\n");
 }

 FUNC_1(VAR_2.ifgr_groups);
}
