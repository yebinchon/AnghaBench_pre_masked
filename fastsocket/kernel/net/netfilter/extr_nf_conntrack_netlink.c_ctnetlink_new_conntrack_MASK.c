
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_flags; } ;
struct nlattr {int dummy; } ;
struct nfgenmsg {int nfgen_family; } ;
struct nf_conntrack_tuple_hash {int dummy; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct nf_conn {int ct_general; int status; } ;
typedef enum ip_conntrack_events { ____Placeholder_ip_conntrack_events } ip_conntrack_events ;
struct TYPE_2__ {int pid; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (struct nf_conn*) ;
 TYPE_1__ FUNC_1 (struct sk_buff*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct nf_conn*) ;
 struct nf_conntrack_tuple_hash* FUNC_3 (int *,struct nf_conntrack_tuple*) ;
 int FUNC_4 (struct nf_conn*,struct nlattr const* const*) ;
 struct nf_conn* FUNC_5 (struct nlattr const* const*,struct nf_conntrack_tuple*,struct nf_conntrack_tuple*,int ) ;
 int FUNC_6 (struct nlattr const* const*,struct nf_conntrack_tuple*,size_t,int ) ;
 int VAR_15 ;
 int FUNC_7 (int,struct nf_conn*,int ,int ) ;
 int FUNC_8 (int *) ;
 int VAR_16 ;
 int FUNC_9 (struct nf_conn*) ;
 struct nf_conn* FUNC_10 (struct nf_conntrack_tuple_hash*) ;
 struct nfgenmsg* FUNC_11 (struct nlmsghdr const*) ;
 int FUNC_12 (struct nlmsghdr const*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int ,int *) ;

__attribute__((used)) static int
FUNC_16(struct sock *VAR_17, struct sk_buff *VAR_18,
   const struct nlmsghdr *VAR_19,
   const struct nlattr * const VAR_20[])
{
 struct nf_conntrack_tuple VAR_21, VAR_22;
 struct nf_conntrack_tuple_hash *VAR_23 = ((void*)0);
 struct nfgenmsg *VAR_24 = FUNC_11(VAR_19);
 u_int8_t VAR_25 = VAR_24->nfgen_family;
 int VAR_26 = 0;

 if (VAR_20[VAR_0]) {
  VAR_26 = FUNC_6(VAR_20, &VAR_21, VAR_0, VAR_25);
  if (VAR_26 < 0)
   return VAR_26;
 }

 if (VAR_20[VAR_1]) {
  VAR_26 = FUNC_6(VAR_20, &VAR_22, VAR_1, VAR_25);
  if (VAR_26 < 0)
   return VAR_26;
 }

 FUNC_13(&VAR_16);
 if (VAR_20[VAR_0])
  VAR_23 = FUNC_3(&VAR_15, &VAR_21);
 else if (VAR_20[VAR_1])
  VAR_23 = FUNC_3(&VAR_15, &VAR_22);

 if (VAR_23 == ((void*)0)) {
  VAR_26 = -VAR_4;
  if (VAR_19->nlmsg_flags & VAR_13) {
   struct nf_conn *VAR_27;
   enum ip_conntrack_events VAR_28;

   if (!VAR_20[VAR_0] || !VAR_20[VAR_1]) {
    VAR_26 = -VAR_3;
    goto out_unlock;
   }

   VAR_27 = FUNC_5(VAR_20, &VAR_21,
       &VAR_22, VAR_25);
   if (FUNC_0(VAR_27)) {
    VAR_26 = FUNC_2(VAR_27);
    goto out_unlock;
   }
   VAR_26 = 0;
   FUNC_8(&VAR_27->ct_general);
   FUNC_14(&VAR_16);
   if (FUNC_15(VAR_12, &VAR_27->status))
    VAR_28 = VAR_10;
   else
    VAR_28 = VAR_8;

   FUNC_7((1 << VAR_11) |
            (1 << VAR_5) |
            (1 << VAR_9) |
            (1 << VAR_7) |
            (1 << VAR_6) | VAR_28,
            VAR_27, FUNC_1(VAR_18).pid,
            FUNC_12(VAR_19));
   FUNC_9(VAR_27);
  } else
   FUNC_14(&VAR_16);

  return VAR_26;
 }




 VAR_26 = -VAR_2;
 if (!(VAR_19->nlmsg_flags & VAR_14)) {
  struct nf_conn *VAR_29 = FUNC_10(VAR_23);

  VAR_26 = FUNC_4(VAR_29, VAR_20);
  if (VAR_26 == 0) {
   FUNC_8(&VAR_29->ct_general);
   FUNC_14(&VAR_16);
   FUNC_7((1 << VAR_11) |
            (1 << VAR_5) |
            (1 << VAR_9) |
            (1 << VAR_7) |
            (1 << VAR_6),
            VAR_29, FUNC_1(VAR_18).pid,
            FUNC_12(VAR_19));
   FUNC_9(VAR_29);
  } else
   FUNC_14(&VAR_16);

  return VAR_26;
 }

out_unlock:
 FUNC_14(&VAR_16);
 return VAR_26;
}
