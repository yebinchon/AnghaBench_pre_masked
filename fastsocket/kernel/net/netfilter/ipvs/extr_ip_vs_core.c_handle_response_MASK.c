
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int ipvs_property; } ;
struct ip_vs_protocol {int (* snat_handler ) (struct sk_buff*,struct ip_vs_protocol*,struct ip_vs_conn*) ;} ;
struct TYPE_5__ {int ip; int in6; } ;
struct ip_vs_conn {TYPE_1__ vaddr; } ;
struct TYPE_7__ {int saddr; } ;
struct TYPE_6__ {int saddr; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct ip_vs_protocol*,struct sk_buff*,int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 TYPE_3__* FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (struct ip_vs_conn*) ;
 int FUNC_7 (struct ip_vs_conn*,struct sk_buff*) ;
 int FUNC_8 (struct ip_vs_conn*,int ,struct sk_buff*,struct ip_vs_protocol*) ;
 TYPE_2__* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*,int) ;
 int FUNC_12 (struct sk_buff*,struct ip_vs_protocol*,struct ip_vs_conn*) ;

__attribute__((used)) static unsigned int
FUNC_13(int VAR_5, struct sk_buff *VAR_6, struct ip_vs_protocol *VAR_7,
  struct ip_vs_conn *VAR_8, int VAR_9)
{
 FUNC_0(11, VAR_7, VAR_6, 0, "Outgoing packet");

 if (!FUNC_11(VAR_6, VAR_9))
  goto drop;


 if (VAR_7->snat_handler && !VAR_7->snat_handler(VAR_6, VAR_7, VAR_8))
  goto drop;






 {
  FUNC_3(VAR_6)->saddr = VAR_8->vaddr.ip;
  FUNC_5(FUNC_3(VAR_6));
 }
  if (FUNC_4(VAR_6, VAR_4) != 0)
   goto drop;

 FUNC_0(10, VAR_7, VAR_6, 0, "After SNAT");

 FUNC_7(VAR_8, VAR_6);
 FUNC_8(VAR_8, VAR_1, VAR_6, VAR_7);
 FUNC_6(VAR_8);

 VAR_6->ipvs_property = 1;

 FUNC_1(11);
 return VAR_2;

drop:
 FUNC_6(VAR_8);
 FUNC_10(VAR_6);
 return VAR_3;
}
