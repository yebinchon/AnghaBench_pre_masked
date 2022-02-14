
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef scalar_t__ u_int32_t ;
typedef scalar_t__ u32 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct nfgenmsg {int nfgen_family; } ;
struct nf_conntrack_tuple_hash {int dummy; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct nf_conn {int status; } ;
struct TYPE_2__ {int pid; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct nlattr const* const*,struct nf_conntrack_tuple*,size_t,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ,struct nf_conn*,int ,int ) ;
 struct nf_conntrack_tuple_hash* FUNC_3 (int *,struct nf_conntrack_tuple*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (struct nf_conn*) ;
 int FUNC_6 (struct nf_conn*) ;
 int FUNC_7 (struct nf_conn*) ;
 int FUNC_8 (struct nf_conn*) ;
 struct nf_conn* FUNC_9 (struct nf_conntrack_tuple_hash*) ;
 int FUNC_10 (struct nlattr const* const) ;
 struct nfgenmsg* FUNC_11 (struct nlmsghdr const*) ;
 int FUNC_12 (struct nlmsghdr const*) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ,int *) ;

__attribute__((used)) static int
FUNC_15(struct sock *VAR_7, struct sk_buff *VAR_8,
   const struct nlmsghdr *VAR_9,
   const struct nlattr * const VAR_10[])
{
 struct nf_conntrack_tuple_hash *VAR_11;
 struct nf_conntrack_tuple VAR_12;
 struct nf_conn *VAR_13;
 struct nfgenmsg *VAR_14 = FUNC_11(VAR_9);
 u_int8_t VAR_15 = VAR_14->nfgen_family;
 int VAR_16 = 0;

 if (VAR_10[VAR_1])
  VAR_16 = FUNC_1(VAR_10, &VAR_12, VAR_1, VAR_15);
 else if (VAR_10[VAR_2])
  VAR_16 = FUNC_1(VAR_10, &VAR_12, VAR_2, VAR_15);
 else {

  FUNC_4(&VAR_6,
      FUNC_0(VAR_8).pid,
      FUNC_12(VAR_9));
  return 0;
 }

 if (VAR_16 < 0)
  return VAR_16;

 VAR_11 = FUNC_3(&VAR_6, &VAR_12);
 if (!VAR_11)
  return -VAR_3;

 VAR_13 = FUNC_9(VAR_11);

 if (VAR_10[VAR_0]) {
  u_int32_t VAR_17 = FUNC_13(FUNC_10(VAR_10[VAR_0]));
  if (VAR_17 != (u32)(unsigned long)VAR_13) {
   FUNC_8(VAR_13);
   return -VAR_3;
  }
 }

 if (FUNC_2(VAR_4, VAR_13,
          FUNC_0(VAR_8).pid,
          FUNC_12(VAR_9)) < 0) {
  FUNC_5(VAR_13);

  FUNC_6(VAR_13);
  FUNC_8(VAR_13);
  return 0;
 }


 FUNC_14(VAR_5, &VAR_13->status);

 FUNC_7(VAR_13);
 FUNC_8(VAR_13);

 return 0;
}
