
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifgroupreq {int ifgr_len; struct ifg_req* ifgr_groups; int ifgr_name; } ;
struct ifg_req {char* ifgrq_group; } ;
typedef int ifgr ;
typedef int caddr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct ifg_req*) ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (struct ifgroupreq*,int ,int) ;
 int VAR_5 ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_8(int VAR_6)
{
 int VAR_7, VAR_8;
 struct ifgroupreq VAR_9;
 struct ifg_req *VAR_10;

 FUNC_4(&VAR_9, 0, sizeof(VAR_9));
 FUNC_7(VAR_9.ifgr_name, VAR_5, VAR_2);

 if (FUNC_3(VAR_6, VAR_3, (caddr_t)&VAR_9) == -1) {
  if (VAR_4 == VAR_0 || VAR_4 == VAR_1)
   return;
  else
   FUNC_1(1, "SIOCGIFGROUP");
 }

 VAR_7 = VAR_9.ifgr_len;
 VAR_9.ifgr_groups =
     (struct ifg_req *)FUNC_0(VAR_7 / sizeof(struct ifg_req),
     sizeof(struct ifg_req));
 if (VAR_9.ifgr_groups == ((void*)0))
  FUNC_1(1, "getifgroups");
 if (FUNC_3(VAR_6, VAR_3, (caddr_t)&VAR_9) == -1)
  FUNC_1(1, "SIOCGIFGROUP");

 VAR_8 = 0;
 VAR_10 = VAR_9.ifgr_groups;
 for (; VAR_10 && VAR_7 >= sizeof(struct ifg_req); VAR_10++) {
  VAR_7 -= sizeof(struct ifg_req);
  if (FUNC_6(VAR_10->ifgrq_group, "all")) {
   if (VAR_8 == 0)
    FUNC_5("\tgroups:");
   VAR_8++;
   FUNC_5(" %s", VAR_10->ifgrq_group);
  }
 }
 if (VAR_8)
  FUNC_5("\n");

 FUNC_2(VAR_9.ifgr_groups);
}
