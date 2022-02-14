
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int mark; } ;
struct ip_vs_service {int flags; scalar_t__ port; int af; TYPE_1__* scheduler; int fwmark; } ;
struct ip_vs_iphdr {scalar_t__ protocol; int daddr; int saddr; int len; } ;
struct ip_vs_dest {scalar_t__ port; int addr; } ;
struct ip_vs_conn_param {int dummy; } ;
struct ip_vs_conn {int refcnt; int flags; int dport; int daddr; int vport; int vaddr; int cport; int caddr; } ;
typedef int _ports ;
typedef scalar_t__ __be16 ;
struct TYPE_2__ {struct ip_vs_dest* (* schedule ) (struct ip_vs_service*,struct sk_buff*) ;} ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,scalar_t__,int *,scalar_t__,int *,scalar_t__,struct ip_vs_conn_param*) ;
 struct ip_vs_conn* FUNC_5 (struct ip_vs_conn_param*,int *,scalar_t__,unsigned int,struct ip_vs_dest*,int ) ;
 int FUNC_6 (struct ip_vs_conn*,struct ip_vs_service*) ;
 int FUNC_7 (int ,int ,struct ip_vs_iphdr*) ;
 int FUNC_8 (struct ip_vs_conn*) ;
 struct ip_vs_conn* FUNC_9 (struct ip_vs_service*,struct sk_buff*,scalar_t__,scalar_t__) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*) ;
 scalar_t__* FUNC_12 (struct sk_buff*,int ,int,scalar_t__*) ;
 int FUNC_13 (struct sk_buff*) ;
 struct ip_vs_dest* FUNC_14 (struct ip_vs_service*,struct sk_buff*) ;

struct ip_vs_conn *
FUNC_15(struct ip_vs_service *VAR_4, struct sk_buff *VAR_5)
{
 struct ip_vs_conn *VAR_6 = ((void*)0);
 struct ip_vs_iphdr VAR_7;
 struct ip_vs_dest *VAR_8;
 __be16 VAR_9[2], *VAR_10;
 unsigned int VAR_11;

 FUNC_7(VAR_4->af, FUNC_13(VAR_5), &VAR_7);
 VAR_10 = FUNC_12(VAR_5, VAR_7.len, sizeof(VAR_9), VAR_9);
 if (VAR_10 == ((void*)0))
  return ((void*)0);




 if (VAR_4->flags & VAR_3) {
  return FUNC_9(VAR_4, VAR_5, VAR_10[0], VAR_10[1]);
 }




 if (!VAR_4->fwmark && VAR_10[1] != VAR_4->port) {
  if (!VAR_4->port)
   FUNC_11("Schedule: port zero only supported "
          "in persistent services, "
          "check your ipvs configuration\n");
  return ((void*)0);
 }

 VAR_8 = VAR_4->scheduler->schedule(VAR_4, VAR_5);
 if (VAR_8 == ((void*)0)) {
  FUNC_0(1, "Schedule: no dest found.\n");
  return ((void*)0);
 }

 VAR_11 = (VAR_4->flags & VAR_2
   && VAR_7.protocol == VAR_0)?
  VAR_1 : 0;




 {
  struct ip_vs_conn_param VAR_12;
  FUNC_4(VAR_4->af, VAR_7.protocol, &VAR_7.saddr,
          VAR_10[0], &VAR_7.daddr, VAR_10[1], &VAR_12);
  VAR_6 = FUNC_5(&VAR_12, &VAR_8->addr,
        VAR_8->port ? VAR_8->port : VAR_10[1],
        VAR_11, VAR_8, VAR_5->mark);
  if (!VAR_6)
   return ((void*)0);
 }

 FUNC_2(6, "Schedule fwd:%c c:%s:%u v:%s:%u "
        "d:%s:%u conn->flags:%X conn->refcnt:%d\n",
        FUNC_8(VAR_6),
        FUNC_1(VAR_4->af, &VAR_6->caddr), FUNC_10(VAR_6->cport),
        FUNC_1(VAR_4->af, &VAR_6->vaddr), FUNC_10(VAR_6->vport),
        FUNC_1(VAR_4->af, &VAR_6->daddr), FUNC_10(VAR_6->dport),
        VAR_6->flags, FUNC_3(&VAR_6->refcnt));

 FUNC_6(VAR_6, VAR_4);
 return VAR_6;
}
