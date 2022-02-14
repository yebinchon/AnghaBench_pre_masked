
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct neighbour {int nud_state; int probes; int lock; int refcnt; scalar_t__ updated; scalar_t__ confirmed; scalar_t__ used; int ha; TYPE_3__* dev; struct nda_cacheinfo* primary_key; TYPE_2__* tbl; int type; int flags; TYPE_1__* ops; } ;
struct ndmsg {int ndm_state; int ndm_ifindex; int ndm_type; int ndm_flags; scalar_t__ ndm_pad2; scalar_t__ ndm_pad1; int ndm_family; } ;
struct nda_cacheinfo {scalar_t__ ndm_refcnt; void* ndm_updated; void* ndm_confirmed; void* ndm_used; } ;
typedef int ci ;
struct TYPE_6__ {int addr_len; int ifindex; } ;
struct TYPE_5__ {int key_len; } ;
struct TYPE_4__ {int family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,int ,int,struct nda_cacheinfo*) ;
 int FUNC_1 (struct sk_buff*,int ,scalar_t__) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int *) ;
 unsigned long VAR_6 ;
 void* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_5 (struct sk_buff*,struct nlmsghdr*) ;
 struct ndmsg* FUNC_6 (struct nlmsghdr*) ;
 int FUNC_7 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_8 (struct sk_buff*,int ,int ,int,int,unsigned int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_7, struct neighbour *VAR_8,
      u32 VAR_9, u32 VAR_10, int VAR_11, unsigned int VAR_12)
{
 unsigned long VAR_13 = VAR_6;
 struct nda_cacheinfo VAR_14;
 struct nlmsghdr *VAR_15;
 struct ndmsg *VAR_16;

 VAR_15 = FUNC_8(VAR_7, VAR_9, VAR_10, VAR_11, sizeof(*VAR_16), VAR_12);
 if (VAR_15 == ((void*)0))
  return -VAR_0;

 VAR_16 = FUNC_6(VAR_15);
 VAR_16->ndm_family = VAR_8->ops->family;
 VAR_16->ndm_pad1 = 0;
 VAR_16->ndm_pad2 = 0;
 VAR_16->ndm_flags = VAR_8->flags;
 VAR_16->ndm_type = VAR_8->type;
 VAR_16->ndm_ifindex = VAR_8->dev->ifindex;

 FUNC_0(VAR_7, VAR_2, VAR_8->tbl->key_len, VAR_8->primary_key);

 FUNC_9(&VAR_8->lock);
 VAR_16->ndm_state = VAR_8->nud_state;
 if ((VAR_8->nud_state & VAR_5) &&
     FUNC_4(VAR_7, VAR_3, VAR_8->dev->addr_len, VAR_8->ha) < 0) {
  FUNC_10(&VAR_8->lock);
  goto nla_put_failure;
 }

 VAR_14.ndm_used = FUNC_3(VAR_13 - VAR_8->used);
 VAR_14.ndm_confirmed = FUNC_3(VAR_13 - VAR_8->confirmed);
 VAR_14.ndm_updated = FUNC_3(VAR_13 - VAR_8->updated);
 VAR_14.ndm_refcnt = FUNC_2(&VAR_8->refcnt) - 1;
 FUNC_10(&VAR_8->lock);

 FUNC_1(VAR_7, VAR_4, FUNC_2(&VAR_8->probes));
 FUNC_0(VAR_7, VAR_1, sizeof(VAR_14), &VAR_14);

 return FUNC_7(VAR_7, VAR_15);

nla_put_failure:
 FUNC_5(VAR_7, VAR_15);
 return -VAR_0;
}
