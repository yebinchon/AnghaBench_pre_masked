
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ifgroupreq {int ifgr_len; struct ifg_req* ifgr_groups; int ifgr_name; } ;
struct ifg_req {char* ifgrq_group; } ;
typedef int ifgr2 ;
typedef int ifgr ;
typedef int caddr_t ;
struct TYPE_4__ {char* key; int* data; } ;
typedef TYPE_1__ ENTRY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ifgroupreq*,int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct ifg_req*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (TYPE_1__,int ,TYPE_1__**,int *) ;
 scalar_t__ FUNC_6 (int,int ,int ) ;
 int VAR_5 ;
 int* FUNC_7 (int) ;
 int FUNC_8 (struct ifgroupreq*,int ,int) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 char* FUNC_10 (char*) ;
 int FUNC_11 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_12(char *VAR_6)
{
 int VAR_7, VAR_8;
 struct ifgroupreq VAR_9;
 struct ifg_req *VAR_10;

 VAR_7 = FUNC_4();


 FUNC_8(&VAR_9, 0, sizeof(VAR_9));
 FUNC_11(VAR_9.ifgr_name, VAR_6, VAR_2);
 if (FUNC_6(VAR_7, VAR_4, (caddr_t)&VAR_9) == -1)
  FUNC_2(1, "SIOCGIFGROUP");


 VAR_8 = VAR_9.ifgr_len;
 VAR_9.ifgr_groups =
     (struct ifg_req *)FUNC_1(VAR_8 / sizeof(struct ifg_req),
  sizeof(struct ifg_req));
 if (VAR_9.ifgr_groups == ((void*)0))
  FUNC_2(1, "calloc");
 if (FUNC_6(VAR_7, VAR_4, (caddr_t)&VAR_9) == -1)
  FUNC_2(1, "SIOCGIFGROUP");

 VAR_10 = VAR_9.ifgr_groups;
 for (; VAR_10 && VAR_8 >= sizeof(struct ifg_req); VAR_10++) {
  VAR_8 -= sizeof(struct ifg_req);
  if (FUNC_9(VAR_10->ifgrq_group, "all")) {
   ENTRY VAR_11;
   ENTRY *VAR_12;
   int *VAR_13;

   VAR_11.key = VAR_10->ifgrq_group;
   if (FUNC_5(VAR_11, VAR_1, &VAR_12, &VAR_5) == 0) {
    struct ifgroupreq VAR_14;


    if ((VAR_13 = FUNC_7(sizeof(int))) == ((void*)0))
     FUNC_2(1, "malloc");

    FUNC_0(&VAR_14, sizeof(VAR_14));
    FUNC_11(VAR_14, VAR_10->ifgrq_group,
        sizeof(VAR_14));
    if (FUNC_6(VAR_7, VAR_3, (caddr_t)&VAR_14) == 0)
     *VAR_13 = VAR_14;
    else
     *VAR_13 = 0;

    VAR_11.key = FUNC_10(VAR_10->ifgrq_group);
    VAR_11.data = VAR_13;
    if (FUNC_5(VAR_11, VAR_0, &VAR_12,
     &VAR_5) == 0)
     FUNC_2(1, "interface group query response"
         " map insert");
   }
  }
 }
 FUNC_3(VAR_9.ifgr_groups);
}
