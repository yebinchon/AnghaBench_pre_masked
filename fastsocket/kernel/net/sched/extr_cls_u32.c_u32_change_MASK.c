
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct tcf_proto {struct tc_u_hnode* root; struct tc_u_common* data; int prio; } ;
struct TYPE_2__ {scalar_t__ success; } ;
struct tc_u_knode {int handle; struct tc_u_knode* pf; struct tc_u_knode* next; TYPE_1__ mark; scalar_t__ fshift; struct tc_u_hnode* ht_up; TYPE_1__ sel; } ;
struct tc_u_hnode {int refcnt; unsigned int divisor; int handle; struct tc_u_knode** ht; struct tc_u_hnode* next; int prio; struct tc_u_common* tp_c; } ;
struct tc_u_common {struct tc_u_hnode* hlist; } ;
struct tc_u32_sel {int nkeys; scalar_t__ hmask; } ;
struct tc_u32_pcnt {int dummy; } ;
struct tc_u32_mark {int nkeys; scalar_t__ hmask; } ;
struct tc_u32_key {int dummy; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct tc_u_common*) ;
 int FUNC_6 (struct tc_u_hnode*,int) ;
 int FUNC_7 (struct tc_u_knode*) ;
 void* FUNC_8 (int,int ) ;
 int FUNC_9 (TYPE_1__*,struct tc_u32_sel*,int) ;
 struct tc_u32_sel* FUNC_10 (struct nlattr*) ;
 void* FUNC_11 (struct nlattr*) ;
 int FUNC_12 (struct nlattr**,int ,struct nlattr*,int ) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (struct tcf_proto*) ;
 int FUNC_15 (struct tcf_proto*) ;
 struct tc_u_hnode* FUNC_16 (struct tc_u_common*,scalar_t__) ;
 int VAR_12 ;
 int FUNC_17 (struct tcf_proto*,unsigned long,struct tc_u_hnode*,struct tc_u_knode*,struct nlattr**,struct nlattr*) ;

__attribute__((used)) static int FUNC_18(struct tcf_proto *VAR_13, unsigned long VAR_14, u32 VAR_15,
        struct nlattr **VAR_16,
        unsigned long *VAR_17)
{
 struct tc_u_common *VAR_18 = VAR_13->data;
 struct tc_u_hnode *VAR_19;
 struct tc_u_knode *VAR_20;
 struct tc_u32_sel *VAR_21;
 struct nlattr *VAR_22 = VAR_16[VAR_4];
 struct nlattr *VAR_23[VAR_9 + 1];
 u32 VAR_24;
 int VAR_25;

 if (VAR_22 == ((void*)0))
  return VAR_15 ? -VAR_0 : 0;

 VAR_25 = FUNC_12(VAR_23, VAR_9, VAR_22, VAR_12);
 if (VAR_25 < 0)
  return VAR_25;

 if ((VAR_20 = (struct tc_u_knode*)*VAR_17) != ((void*)0)) {
  if (FUNC_2(VAR_20->handle) == 0)
   return -VAR_0;

  return FUNC_17(VAR_13, VAR_14, VAR_20->ht_up, VAR_20, VAR_23, VAR_16[VAR_5]);
 }

 if (VAR_23[VAR_6]) {
  unsigned VAR_26 = FUNC_11(VAR_23[VAR_6]);

  if (--VAR_26 > 0x100)
   return -VAR_0;
  if (FUNC_2(VAR_15))
   return -VAR_0;
  if (VAR_15 == 0) {
   VAR_15 = FUNC_5(VAR_13->data);
   if (VAR_15 == 0)
    return -VAR_2;
  }
  VAR_19 = FUNC_8(sizeof(*VAR_19) + VAR_26*sizeof(void*), VAR_3);
  if (VAR_19 == ((void*)0))
   return -VAR_1;
  VAR_19->tp_c = VAR_18;
  VAR_19->refcnt = 1;
  VAR_19->divisor = VAR_26;
  VAR_19->handle = VAR_15;
  VAR_19->prio = VAR_13->prio;
  VAR_19->next = VAR_18->hlist;
  VAR_18->hlist = VAR_19;
  *VAR_17 = (unsigned long)VAR_19;
  return 0;
 }

 if (VAR_23[VAR_7]) {
  VAR_24 = FUNC_11(VAR_23[VAR_7]);
  if (FUNC_1(VAR_24) == VAR_11) {
   VAR_19 = VAR_13->root;
   VAR_24 = VAR_19->handle;
  } else {
   VAR_19 = FUNC_16(VAR_13->data, FUNC_1(VAR_24));
   if (VAR_19 == ((void*)0))
    return -VAR_0;
  }
 } else {
  VAR_19 = VAR_13->root;
  VAR_24 = VAR_19->handle;
 }

 if (VAR_19->divisor < FUNC_0(VAR_24))
  return -VAR_0;

 if (VAR_15) {
  if (FUNC_1(VAR_15) && FUNC_1(VAR_15^VAR_24))
   return -VAR_0;
  VAR_15 = VAR_24 | FUNC_3(VAR_15);
 } else
  VAR_15 = FUNC_6(VAR_19, VAR_24);

 if (VAR_23[VAR_10] == ((void*)0))
  return -VAR_0;

 VAR_21 = FUNC_10(VAR_23[VAR_10]);

 VAR_20 = FUNC_8(sizeof(*VAR_20) + VAR_21->nkeys*sizeof(struct tc_u32_key), VAR_3);
 if (VAR_20 == ((void*)0))
  return -VAR_1;
 FUNC_9(&VAR_20->sel, VAR_21, sizeof(*VAR_21) + VAR_21->nkeys*sizeof(struct tc_u32_key));
 VAR_20->ht_up = VAR_19;
 VAR_20->handle = VAR_15;
 VAR_20->fshift = VAR_21->hmask ? FUNC_4(FUNC_13(VAR_21->hmask)) - 1 : 0;
 VAR_25 = FUNC_17(VAR_13, VAR_14, VAR_19, VAR_20, VAR_23, VAR_16[VAR_5]);
 if (VAR_25 == 0) {
  struct tc_u_knode **VAR_27;
  for (VAR_27 = &VAR_19->ht[FUNC_0(VAR_15)]; *VAR_27; VAR_27 = &(*VAR_27)->next)
   if (FUNC_3(VAR_15) < FUNC_3((*VAR_27)->handle))
    break;

  VAR_20->next = *VAR_27;
  FUNC_14(VAR_13);
  *VAR_27 = VAR_20;
  FUNC_15(VAR_13);

  *VAR_17 = (unsigned long)VAR_20;
  return 0;
 }



 FUNC_7(VAR_20);
 return VAR_25;
}
