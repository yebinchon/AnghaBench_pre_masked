
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct tcf_proto {int dummy; } ;
struct tcf_exts {int dummy; } ;
struct TYPE_2__ {void* classid; } ;
struct tc_u_knode {int exts; int indev; TYPE_1__ res; struct tc_u_hnode* ht_down; } ;
struct tc_u_hnode {int refcnt; int tp_c; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 void* FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct tcf_proto*,TYPE_1__*,unsigned long) ;
 int FUNC_3 (struct tcf_proto*,int ,struct nlattr*) ;
 int FUNC_4 (struct tcf_proto*,int *,struct tcf_exts*) ;
 int FUNC_5 (struct tcf_proto*,struct tcf_exts*) ;
 int FUNC_6 (struct tcf_proto*,struct nlattr**,struct nlattr*,struct tcf_exts*,int *) ;
 int FUNC_7 (struct tcf_proto*) ;
 int FUNC_8 (struct tcf_proto*) ;
 int VAR_4 ;
 struct tc_u_hnode* FUNC_9 (int ,void*) ;

__attribute__((used)) static int FUNC_10(struct tcf_proto *VAR_5, unsigned long VAR_6,
    struct tc_u_hnode *VAR_7,
    struct tc_u_knode *VAR_8, struct nlattr **VAR_9,
    struct nlattr *VAR_10)
{
 int VAR_11;
 struct tcf_exts VAR_12;

 VAR_11 = FUNC_6(VAR_5, VAR_9, VAR_10, &VAR_12, &VAR_4);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = -VAR_0;
 if (VAR_9[VAR_3]) {
  u32 VAR_13 = FUNC_1(VAR_9[VAR_3]);
  struct tc_u_hnode *VAR_14 = ((void*)0), *VAR_15;

  if (FUNC_0(VAR_13))
   goto errout;

  if (VAR_13) {
   VAR_14 = FUNC_9(VAR_7->tp_c, VAR_13);

   if (VAR_14 == ((void*)0))
    goto errout;
   VAR_14->refcnt++;
  }

  FUNC_7(VAR_5);
  VAR_15 = VAR_8->ht_down;
  VAR_8->ht_down = VAR_14;
  FUNC_8(VAR_5);

  if (VAR_15)
   VAR_15->refcnt--;
 }
 if (VAR_9[VAR_1]) {
  VAR_8->res.classid = FUNC_1(VAR_9[VAR_1]);
  FUNC_2(VAR_5, &VAR_8->res, VAR_6);
 }
 FUNC_4(VAR_5, &VAR_8->exts, &VAR_12);

 return 0;
errout:
 FUNC_5(VAR_5, &VAR_12);
 return VAR_11;
}
