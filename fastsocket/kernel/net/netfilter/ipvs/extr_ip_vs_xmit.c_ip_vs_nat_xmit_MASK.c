
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {int len; int local_df; } ;
struct TYPE_9__ {TYPE_1__* dev; } ;
struct TYPE_7__ {TYPE_4__ dst; } ;
struct rtable {TYPE_2__ u; } ;
struct iphdr {int ihl; int frag_off; int daddr; int tos; } ;
struct ip_vs_protocol {int (* dnat_handler ) (struct sk_buff*,struct ip_vs_protocol*,struct ip_vs_conn*) ;} ;
struct TYPE_8__ {int ip; } ;
struct ip_vs_conn {int flags; TYPE_3__ daddr; } ;
typedef int _pt ;
typedef int __be16 ;
struct TYPE_6__ {int hard_header_len; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (int,struct ip_vs_protocol*,struct sk_buff*,int ,char*) ;
 int FUNC_3 (int ,struct ip_vs_protocol*,struct sk_buff*,int ,char*) ;
 int FUNC_4 (int ,struct sk_buff*,struct rtable*) ;
 int FUNC_5 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 struct rtable* FUNC_7 (struct sk_buff*,struct ip_vs_conn*,int ) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct sk_buff*,int ,int ,int ) ;
 struct iphdr* FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct rtable*) ;
 int FUNC_15 (struct iphdr*) ;
 int FUNC_16 (struct ip_vs_conn*,int ) ;
 int FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (struct sk_buff*,int ) ;
 int FUNC_20 (struct sk_buff*) ;
 int FUNC_21 (struct sk_buff*,TYPE_4__*) ;
 int * FUNC_22 (struct sk_buff*,int,int,int *) ;
 int FUNC_23 (struct sk_buff*) ;
 int FUNC_24 (struct sk_buff*,int) ;
 int FUNC_25 (struct sk_buff*,struct ip_vs_protocol*,struct ip_vs_conn*) ;
 scalar_t__ FUNC_26 (int) ;

int
FUNC_27(struct sk_buff *VAR_6, struct ip_vs_conn *VAR_7,
        struct ip_vs_protocol *VAR_8)
{
 struct rtable *VAR_9;
 int VAR_10;
 struct iphdr *VAR_11 = FUNC_13(VAR_6);

 FUNC_0(10);


 if (FUNC_26(VAR_7->flags & VAR_3)) {
  __be16 VAR_12, *VAR_13;
  VAR_13 = FUNC_22(VAR_6, VAR_11->ihl*4, sizeof(VAR_12), &VAR_12);
  if (VAR_13 == ((void*)0))
   goto tx_error;
  FUNC_16(VAR_7, *VAR_13);
  FUNC_1(10, "filled cport=%d\n", FUNC_18(*VAR_13));
 }

 if (!(VAR_9 = FUNC_7(VAR_6, VAR_7, FUNC_6(VAR_11->tos))))
  goto tx_error_icmp;


 VAR_10 = FUNC_9(&VAR_9->u.dst);
 if ((VAR_6->len > VAR_10) && (VAR_11->frag_off & FUNC_11(VAR_2)) &&
     !FUNC_23(VAR_6)) {
  FUNC_14(VAR_9);
  FUNC_12(VAR_6, VAR_0,VAR_1, FUNC_10(VAR_10));
  FUNC_3(0, VAR_8, VAR_6, 0, "ip_vs_nat_xmit(): frag needed for");
  goto tx_error;
 }


 if (!FUNC_24(VAR_6, sizeof(struct iphdr)))
  goto tx_error_put;

 if (FUNC_19(VAR_6, VAR_9->u.dst.dev->hard_header_len))
  goto tx_error_put;


 FUNC_20(VAR_6);
 FUNC_21(VAR_6, &VAR_9->u.dst);


 if (VAR_8->dnat_handler && !VAR_8->dnat_handler(VAR_6, VAR_8, VAR_7))
  goto tx_error;
 FUNC_13(VAR_6)->daddr = VAR_7->daddr.ip;
 FUNC_15(FUNC_13(VAR_6));

 FUNC_2(10, VAR_8, VAR_6, 0, "After DNAT");






 VAR_6->local_df = 1;

 FUNC_4(VAR_5, VAR_6, VAR_9);

 FUNC_5(10);
 return VAR_4;

  tx_error_icmp:
 FUNC_8(VAR_6);
  tx_error:
 FUNC_5(10);
 FUNC_17(VAR_6);
 return VAR_4;
  tx_error_put:
 FUNC_14(VAR_9);
 goto tx_error;
}
