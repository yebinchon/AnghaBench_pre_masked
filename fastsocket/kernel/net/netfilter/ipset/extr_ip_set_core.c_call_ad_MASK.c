
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {scalar_t__ nlmsg_len; int nlmsg_seq; } ;
struct nlmsgerr {int error; int msg; } ;
struct nlattr {int dummy; } ;
struct nfgenmsg {int dummy; } ;
struct ip_set {int lock; TYPE_1__* variant; } ;
typedef enum ipset_adt { ____Placeholder_ipset_adt } ipset_adt ;
struct TYPE_4__ {int pid; } ;
struct TYPE_3__ {int (* resize ) (struct ip_set*,int ) ;int (* uadt ) (struct ip_set*,struct nlattr**,int,int*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__ FUNC_0 (struct sk_buff*) ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 struct nlmsghdr* FUNC_2 (struct sk_buff*,int ,int ,int ,size_t,int ) ;
 int VAR_10 ;
 int FUNC_3 (int *,struct nlmsghdr*,scalar_t__) ;
 int FUNC_4 (struct sock*,struct sk_buff*,int ,int ) ;
 int* FUNC_5 (struct nlattr*) ;
 int FUNC_6 (struct nlattr**,int ,struct nlattr*,scalar_t__,int ) ;
 struct nlmsgerr* FUNC_7 (struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct nlmsghdr*) ;
 struct sk_buff* FUNC_10 (size_t,int ) ;
 int FUNC_11 (struct ip_set*,int ) ;
 int FUNC_12 (struct ip_set*,struct nlattr**,int,int*,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int
FUNC_15(struct sock *VAR_11, struct sk_buff *VAR_12, struct ip_set *VAR_13,
 struct nlattr *VAR_14[], enum ipset_adt VAR_15,
 u32 VAR_16, bool VAR_17)
{
 int VAR_18, VAR_19 = 0;
 u32 VAR_20 = 0;
 bool VAR_21 = VAR_16 & VAR_7;

 do {
  FUNC_13(&VAR_13->lock);
  VAR_18 = VAR_13->variant->uadt(VAR_13, VAR_14, VAR_15, &VAR_20, VAR_16);
  FUNC_14(&VAR_13->lock);
 } while (VAR_18 == -VAR_0 &&
   VAR_13->variant->resize &&
   (VAR_18 = VAR_13->variant->resize(VAR_13, VAR_19++)) == 0);

 if (!VAR_18 || (VAR_18 == -VAR_6 && VAR_21))
  return 0;
 if (VAR_20 && VAR_17) {

  struct nlmsghdr *VAR_22, *VAR_23 = FUNC_8(VAR_12);
  struct sk_buff *VAR_24;
  struct nlmsgerr *VAR_25;
  size_t VAR_26 = sizeof(*VAR_25) + FUNC_9(VAR_23);
  int VAR_27 = FUNC_1(sizeof(struct nfgenmsg));
  struct nlattr *VAR_28[VAR_4+1];
  struct nlattr *VAR_29;
  u32 *VAR_30;

  VAR_24 = FUNC_10(VAR_26, VAR_3);
  if (VAR_24 == ((void*)0))
   return -VAR_2;
  VAR_22 = FUNC_2(VAR_24, FUNC_0(VAR_12).pid,
      VAR_23->nlmsg_seq, VAR_9, VAR_26, 0);
  VAR_25 = FUNC_7(VAR_22);
  VAR_25->error = VAR_18;
  FUNC_3(&VAR_25->msg, VAR_23, VAR_23->nlmsg_len);
  VAR_29 = (void *)&VAR_25->msg + VAR_27;

  FUNC_6(VAR_28, VAR_4,
     VAR_29, VAR_23->nlmsg_len - VAR_27,
     VAR_10);

  VAR_30 = FUNC_5(VAR_28[VAR_5]);

  *VAR_30 = VAR_20;

  FUNC_4(VAR_11, VAR_24, FUNC_0(VAR_12).pid, VAR_8);

  return -VAR_1;
 }

 return VAR_18;
}
