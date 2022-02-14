
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nf_conntrack_tuple_hash {int hnnode; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct nf_conntrack_l4proto {int (* new ) (struct nf_conn*,struct sk_buff*,unsigned int) ;} ;
struct nf_conntrack_l3proto {int dummy; } ;
struct nf_conntrack_expect {int (* expectfn ) (struct nf_conn*,struct nf_conntrack_expect*) ;TYPE_1__* master; scalar_t__ helper; } ;
struct nf_conn_help {int helper; } ;
struct nf_conn {struct nf_conntrack_tuple_hash* tuplehash; TYPE_1__* master; int secmark; int mark; int status; } ;
struct TYPE_4__ {int unconfirmed; } ;
struct net {TYPE_2__ ct; } ;
struct TYPE_3__ {int ct_general; int secmark; int mark; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (struct nf_conn*) ;
 int FUNC_1 (struct net*,int ) ;
 int FUNC_2 (struct nf_conn*,int ) ;
 int FUNC_3 (int ,int *) ;
 int VAR_3 ;
 int FUNC_4 (int *,int *) ;
 int VAR_4 ;
 struct nf_conn* FUNC_5 (struct net*,struct nf_conntrack_tuple const*,struct nf_conntrack_tuple*,int ) ;
 int FUNC_6 (struct nf_conn*) ;
 int FUNC_7 (int *) ;
 int VAR_5 ;
 int FUNC_8 (struct nf_conn*,int ) ;
 int FUNC_9 (struct nf_conn*,int ) ;
 int FUNC_10 (struct nf_conntrack_expect*) ;
 struct nf_conntrack_expect* FUNC_11 (struct net*,struct nf_conntrack_tuple const*) ;
 struct nf_conn_help* FUNC_12 (struct nf_conn*,int ) ;
 int FUNC_13 (struct nf_conntrack_tuple*,struct nf_conntrack_tuple const*,struct nf_conntrack_l3proto*,struct nf_conntrack_l4proto*) ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (int ,scalar_t__) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct nf_conn*,struct sk_buff*,unsigned int) ;
 int FUNC_19 (struct nf_conn*,struct nf_conntrack_expect*) ;

__attribute__((used)) static struct nf_conntrack_tuple_hash *
FUNC_20(struct net *VAR_6,
        const struct nf_conntrack_tuple *VAR_7,
        struct nf_conntrack_l3proto *VAR_8,
        struct nf_conntrack_l4proto *VAR_9,
        struct sk_buff *VAR_10,
        unsigned int VAR_11)
{
 struct nf_conn *VAR_12;
 struct nf_conn_help *VAR_13;
 struct nf_conntrack_tuple VAR_14;
 struct nf_conntrack_expect *VAR_15;

 if (!FUNC_13(&VAR_14, VAR_7, VAR_8, VAR_9)) {
  FUNC_14("Can't invert tuple.\n");
  return ((void*)0);
 }

 VAR_12 = FUNC_5(VAR_6, VAR_7, &VAR_14, VAR_0);
 if (FUNC_0(VAR_12)) {
  FUNC_14("Can't allocate conntrack.\n");
  return (struct nf_conntrack_tuple_hash *)VAR_12;
 }

 if (!VAR_9->new(VAR_12, VAR_10, VAR_11)) {
  FUNC_6(VAR_12);
  FUNC_14("init conntrack: can't track with proto module\n");
  return ((void*)0);
 }

 FUNC_8(VAR_12, VAR_0);
 FUNC_9(VAR_12, VAR_0);

 FUNC_16(&VAR_5);
 VAR_15 = FUNC_11(VAR_6, VAR_7);
 if (VAR_15) {
  FUNC_14("conntrack: expectation arrives ct=%p exp=%p\n",
    VAR_12, VAR_15);

  FUNC_3(VAR_1, &VAR_12->status);
  VAR_12->master = VAR_15->master;
  if (VAR_15->helper) {
   VAR_13 = FUNC_12(VAR_12, VAR_0);
   if (VAR_13)
    FUNC_15(VAR_13->helper, VAR_15->helper);
  }







  FUNC_7(&VAR_12->master->ct_general);
  FUNC_1(VAR_6, VAR_3);
 } else {
  FUNC_2(VAR_12, VAR_0);
  FUNC_1(VAR_6, VAR_4);
 }


 FUNC_4(&VAR_12->tuplehash[VAR_2].hnnode,
         &VAR_6->ct.unconfirmed);

 FUNC_17(&VAR_5);

 if (VAR_15) {
  if (VAR_15->expectfn)
   VAR_15->expectfn(VAR_12, VAR_15);
  FUNC_10(VAR_15);
 }

 return &VAR_12->tuplehash[VAR_2];
}
