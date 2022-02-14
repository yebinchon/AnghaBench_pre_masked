
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * tll; int * sll; int target; } ;
struct TYPE_5__ {void* dst; void* src; } ;
struct TYPE_7__ {TYPE_2__ nd; TYPE_1__ tp; } ;
struct sw_flow_key {TYPE_3__ ipv6; } ;
struct sk_buff {int len; } ;
struct nd_opt_hdr {int nd_opt_len; scalar_t__ nd_opt_type; } ;
struct nd_msg {int * opt; int target; } ;
struct icmp6hdr {scalar_t__ icmp6_type; scalar_t__ icmp6_code; } ;
struct TYPE_8__ {int nd; int tp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (scalar_t__) ;
 struct icmp6hdr* FUNC_2 (struct sk_buff*) ;
 TYPE_4__ VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_7, struct sw_flow_key *VAR_8,
   int *VAR_9, int VAR_10)
{
 struct icmp6hdr *VAR_11 = FUNC_2(VAR_7);
 int VAR_12 = 0;
 int VAR_13;




 VAR_8->ipv6.tp.src = FUNC_1(VAR_11->icmp6_type);
 VAR_8->ipv6.tp.dst = FUNC_1(VAR_11->icmp6_code);
 VAR_13 = FUNC_0(VAR_6);

 if (VAR_11->icmp6_code == 0 &&
     (VAR_11->icmp6_type == VAR_3 ||
      VAR_11->icmp6_type == VAR_2)) {
  int VAR_14 = VAR_7->len - FUNC_8(VAR_7);
  struct nd_msg *VAR_15;
  int VAR_16;

  VAR_13 = FUNC_0(VAR_6);




  if (FUNC_9(VAR_14 < sizeof(*VAR_15)))
   goto out;
  if (FUNC_9(FUNC_6(VAR_7))) {
   VAR_12 = -VAR_0;
   goto out;
  }

  VAR_15 = (struct nd_msg *)FUNC_7(VAR_7);
  VAR_8->ipv6.nd.target = VAR_15->target;
  VAR_13 = FUNC_0(VAR_6);

  VAR_14 -= sizeof(*VAR_15);
  VAR_16 = 0;
  while (VAR_14 >= 8) {
   struct nd_opt_hdr *VAR_17 =
     (struct nd_opt_hdr *)(VAR_15->opt + VAR_16);
   int VAR_18 = VAR_17->nd_opt_len * 8;

   if (FUNC_9(!VAR_18 || VAR_18 > VAR_14))
    goto invalid;





   if (VAR_17->nd_opt_type == VAR_4
       && VAR_18 == 8) {
    if (FUNC_9(!FUNC_3(VAR_8->ipv6.nd.sll)))
     goto invalid;
    FUNC_4(VAR_8->ipv6.nd.sll,
        &VAR_15->opt[VAR_16+sizeof(*VAR_17)], VAR_1);
   } else if (VAR_17->nd_opt_type == VAR_5
       && VAR_18 == 8) {
    if (FUNC_9(!FUNC_3(VAR_8->ipv6.nd.tll)))
     goto invalid;
    FUNC_4(VAR_8->ipv6.nd.tll,
        &VAR_15->opt[VAR_16+sizeof(*VAR_17)], VAR_1);
   }

   VAR_14 -= VAR_18;
   VAR_16 += VAR_18;
  }
 }

 goto out;

invalid:
 FUNC_5(&VAR_8->ipv6.nd.target, 0, sizeof(VAR_8->ipv6.nd.target));
 FUNC_5(VAR_8->ipv6.nd.sll, 0, sizeof(VAR_8->ipv6.nd.sll));
 FUNC_5(VAR_8->ipv6.nd.tll, 0, sizeof(VAR_8->ipv6.nd.tll));

out:
 *VAR_9 = VAR_13;
 return VAR_12;
}
