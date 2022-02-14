
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sock {int sk_mark; int sk_priority; } ;
struct sk_buff {int len; int network_header; int transport_header; int ip_summed; int mark; int priority; } ;
struct TYPE_7__ {TYPE_3__* dev; } ;
struct TYPE_6__ {TYPE_2__ dst; } ;
struct rt6_info {int rt6i_idev; TYPE_1__ u; } ;
struct ipv6hdr {int dummy; } ;
struct ipv6_pinfo {int recverr; } ;
struct flowi {int dummy; } ;
struct TYPE_8__ {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_4 (int ,int ,struct sk_buff*,int *,TYPE_3__*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_10 ;
 struct ipv6_pinfo* FUNC_6 (struct sock*) ;
 struct ipv6hdr* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sock*,int,struct flowi*,int) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (void*,void*,int ,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct sk_buff*,int ) ;
 int FUNC_13 (struct sk_buff*,int) ;
 int FUNC_14 (struct sk_buff*,int ) ;
 int FUNC_15 (struct sk_buff*) ;
 struct sk_buff* FUNC_16 (struct sock*,scalar_t__,unsigned int,int*) ;
 int FUNC_17 (struct sock*) ;

__attribute__((used)) static int FUNC_18(struct sock *VAR_11, void *VAR_12, int VAR_13,
   struct flowi *VAR_14, struct rt6_info *VAR_15,
   unsigned int VAR_16)
{
 struct ipv6_pinfo *VAR_17 = FUNC_6(VAR_11);
 struct ipv6hdr *VAR_18;
 struct sk_buff *VAR_19;
 int VAR_20;

 if (VAR_13 > VAR_15->u.dst.dev->mtu) {
  FUNC_8(VAR_11, VAR_2, VAR_14, VAR_15->u.dst.dev->mtu);
  return -VAR_2;
 }
 if (VAR_16&VAR_7)
  goto out;

 VAR_19 = FUNC_16(VAR_11,
      VAR_13 + FUNC_2(VAR_15->u.dst.dev) + 15,
      VAR_16 & VAR_6, &VAR_20);
 if (VAR_19 == ((void*)0))
  goto error;
 FUNC_14(VAR_19, FUNC_3(VAR_15->u.dst.dev));

 VAR_19->priority = VAR_11->sk_priority;
 VAR_19->mark = VAR_11->sk_mark;
 FUNC_12(VAR_19, FUNC_5(&VAR_15->u.dst));

 FUNC_13(VAR_19, VAR_13);
 FUNC_15(VAR_19);
 VAR_18 = FUNC_7(VAR_19);

 VAR_19->ip_summed = VAR_0;

 VAR_19->transport_header = VAR_19->network_header;
 VAR_20 = FUNC_10((void *)VAR_18, VAR_12, 0, VAR_13);
 if (VAR_20)
  goto error_fault;

 FUNC_1(FUNC_17(VAR_11), VAR_15->rt6i_idev, VAR_4, VAR_19->len);
 VAR_20 = FUNC_4(VAR_9, VAR_8, VAR_19, ((void*)0), VAR_15->u.dst.dev,
        VAR_10);
 if (VAR_20 > 0)
  VAR_20 = FUNC_11(VAR_20);
 if (VAR_20)
  goto error;
out:
 return 0;

error_fault:
 VAR_20 = -VAR_1;
 FUNC_9(VAR_19);
error:
 FUNC_0(FUNC_17(VAR_11), VAR_15->rt6i_idev, VAR_5);
 if (VAR_20 == -VAR_3 && !VAR_17->recverr)
  VAR_20 = 0;
 return VAR_20;
}
