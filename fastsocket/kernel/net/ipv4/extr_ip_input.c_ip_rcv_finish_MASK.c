
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ len; int dev; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_5__ {TYPE_1__ dst; } ;
struct rtable {scalar_t__ rt_type; TYPE_2__ u; } ;
struct iphdr {int ihl; int tos; int saddr; int daddr; } ;
struct ip_rt_acct {int i_bytes; int i_packets; int o_bytes; int o_packets; } ;
struct direct_tcp_stat {int input_route_fast; int input_route_slow; } ;
struct TYPE_6__ {int tclassid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int ) ;
 int VAR_9 ;
 int FUNC_3 (struct sk_buff*) ;
 struct iphdr* FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int ,int ,int ,int ) ;
 int VAR_10 ;
 int FUNC_7 (struct sk_buff*) ;
 void* FUNC_8 (int ,int ) ;
 TYPE_3__* FUNC_9 (struct sk_buff*) ;
 struct rtable* FUNC_10 (struct sk_buff*) ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct sk_buff *VAR_11)
{
 const struct iphdr *VAR_12 = FUNC_4(VAR_11);
 struct rtable *VAR_13;
 struct direct_tcp_stat *VAR_14;

 VAR_14 = FUNC_8(VAR_9, FUNC_11());






 if (FUNC_9(VAR_11) == ((void*)0)) {
  int VAR_15 = FUNC_6(VAR_11, VAR_12->daddr, VAR_12->saddr, VAR_12->tos,
      VAR_11->dev);
  VAR_14->input_route_slow++;


  if (FUNC_12(VAR_15)) {
   if (VAR_15 == -VAR_0)
    FUNC_0(FUNC_2(VAR_11->dev),
      VAR_2);
   else if (VAR_15 == -VAR_1)
    FUNC_0(FUNC_2(VAR_11->dev),
      VAR_5);
   goto drop;
  }
 } else {
  VAR_14->input_route_fast++;

 }
 if (VAR_12->ihl > 5 && FUNC_5(VAR_11))
  goto drop;

 VAR_13 = FUNC_10(VAR_11);
 if (VAR_13->rt_type == VAR_8) {
  FUNC_1(FUNC_2(VAR_13->u.dst.dev), VAR_4,
    VAR_11->len);
 } else if (VAR_13->rt_type == VAR_7)
  FUNC_1(FUNC_2(VAR_13->u.dst.dev), VAR_3,
    VAR_11->len);

 return FUNC_3(VAR_11);

drop:
 FUNC_7(VAR_11);
 return VAR_6;
}
