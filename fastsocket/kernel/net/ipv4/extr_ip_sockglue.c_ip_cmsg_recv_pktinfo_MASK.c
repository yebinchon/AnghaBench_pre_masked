
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct rtable {scalar_t__ rt_spec_dst; scalar_t__ rt_iif; } ;
struct msghdr {int dummy; } ;
struct TYPE_5__ {scalar_t__ s_addr; } ;
struct TYPE_4__ {int s_addr; } ;
struct in_pktinfo {TYPE_2__ ipi_spec_dst; scalar_t__ ipi_ifindex; TYPE_1__ ipi_addr; } ;
typedef int info ;
struct TYPE_6__ {int daddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct msghdr*,int ,int ,int,struct in_pktinfo*) ;
 struct rtable* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct msghdr *VAR_2, struct sk_buff *VAR_3)
{
 struct in_pktinfo VAR_4;
 struct rtable *VAR_5 = FUNC_2(VAR_3);

 VAR_4.ipi_addr.s_addr = FUNC_0(VAR_3)->daddr;
 if (VAR_5) {
  VAR_4.ipi_ifindex = VAR_5->rt_iif;
  VAR_4.ipi_spec_dst.s_addr = VAR_5->rt_spec_dst;
 } else {
  VAR_4.ipi_ifindex = 0;
  VAR_4.ipi_spec_dst.s_addr = 0;
 }

 FUNC_1(VAR_2, VAR_1, VAR_0, sizeof(VAR_4), &VAR_4);
}
