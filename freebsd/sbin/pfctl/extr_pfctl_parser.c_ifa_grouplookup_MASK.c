
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct node_host {TYPE_1__* tail; } ;
struct ifgroupreq {int ifgr_len; struct ifg_req* ifgr_groups; int ifgr_name; } ;
struct ifg_req {int ifgrq_member; } ;
typedef int ifgr ;
typedef int caddr_t ;
struct TYPE_2__ {struct node_host* next; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifgroupreq*,int) ;
 struct ifg_req* FUNC_1 (int,int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct ifg_req*) ;
 int FUNC_4 () ;
 struct node_host* FUNC_5 (int ,int) ;
 int FUNC_6 (int,int ,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,char*,int) ;

struct node_host *
FUNC_9(char *VAR_1, int VAR_2)
{
 struct ifg_req *VAR_3;
 struct ifgroupreq VAR_4;
 int VAR_5, VAR_6;
 struct node_host *VAR_7, *VAR_8 = ((void*)0);

 VAR_5 = FUNC_4();
 VAR_6 = FUNC_7(VAR_1);
 if (VAR_6 == 0)
  return (((void*)0));
 FUNC_0(&VAR_4, sizeof(VAR_4));
 FUNC_8(VAR_4.ifgr_name, VAR_1, sizeof(VAR_4.ifgr_name));
 VAR_4.ifgr_len = VAR_6;
 if ((VAR_4.ifgr_groups = FUNC_1(1, VAR_6)) == ((void*)0))
  FUNC_2(1, "calloc");
 if (FUNC_6(VAR_5, VAR_0, (caddr_t)&VAR_4) == -1)
  FUNC_2(1, "SIOCGIFGMEMB");

 for (VAR_3 = VAR_4.ifgr_groups; VAR_3 && VAR_6 >= sizeof(struct ifg_req);
     VAR_3++) {
  VAR_6 -= sizeof(struct ifg_req);
  if ((VAR_7 = FUNC_5(VAR_3->ifgrq_member, VAR_2)) == ((void*)0))
   continue;
  if (VAR_8 == ((void*)0))
   VAR_8 = VAR_7;
  else {
   VAR_8->tail->next = VAR_7;
   VAR_8->tail = VAR_7->tail;
  }
 }
 FUNC_3(VAR_4.ifgr_groups);

 return (VAR_8);
}
