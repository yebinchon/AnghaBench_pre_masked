
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifgroupreq {int ifgr_len; struct ifg_req* ifgr_groups; int ifgr_name; } ;
struct ifg_req {char* ifgrq_member; } ;
typedef int ifgr ;
typedef int caddr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ifgroupreq*,int) ;
 struct ifg_req* FUNC_1 (int,int) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int FUNC_4 (struct ifg_req*) ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,char const*,int) ;

__attribute__((used)) static void
FUNC_9(const char *VAR_8)
{
 struct ifgroupreq VAR_9;
 struct ifg_req *VAR_10;
 int VAR_11, VAR_12 = 0;
 int VAR_13;

 VAR_13 = FUNC_7(VAR_0, VAR_5, 0);
 if (VAR_13 == -1)
  FUNC_2(1, "socket(AF_LOCAL,SOCK_DGRAM)");
 FUNC_0(&VAR_9, sizeof(VAR_9));
 FUNC_8(VAR_9.ifgr_name, VAR_8, sizeof(VAR_9.ifgr_name));
 if (FUNC_5(VAR_13, VAR_4, (caddr_t)&VAR_9) == -1) {
  if (VAR_6 == VAR_1 || VAR_6 == VAR_3 ||
      VAR_6 == VAR_2)
   FUNC_3(VAR_7);
  else
   FUNC_2(1, "SIOCGIFGMEMB");
 }

 VAR_11 = VAR_9.ifgr_len;
 if ((VAR_9.ifgr_groups = FUNC_1(1, VAR_11)) == ((void*)0))
  FUNC_2(1, "printgroup");
 if (FUNC_5(VAR_13, VAR_4, (caddr_t)&VAR_9) == -1)
  FUNC_2(1, "SIOCGIFGMEMB");

 for (VAR_10 = VAR_9.ifgr_groups; VAR_10 && VAR_11 >= sizeof(struct ifg_req);
     VAR_10++) {
  VAR_11 -= sizeof(struct ifg_req);
  FUNC_6("%s\n", VAR_10->ifgrq_member);
  VAR_12++;
 }
 FUNC_4(VAR_9.ifgr_groups);

 FUNC_3(VAR_7);
}
