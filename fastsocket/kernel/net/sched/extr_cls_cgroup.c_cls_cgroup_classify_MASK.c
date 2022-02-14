
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tcf_result {scalar_t__ class; scalar_t__ classid; } ;
struct tcf_proto {struct cls_cgroup_head* root; } ;
struct sk_buff {TYPE_1__* sk; } ;
struct cls_cgroup_head {int exts; int ematches; } ;
struct TYPE_4__ {scalar_t__ classid; } ;
struct TYPE_3__ {scalar_t__ sk_classid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*,int *,int *) ;
 int FUNC_5 (struct sk_buff*,int *,struct tcf_result*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_1, struct tcf_proto *VAR_2,
          struct tcf_result *VAR_3)
{
 struct cls_cgroup_head *VAR_4 = VAR_2->root;
 u32 VAR_5;

 FUNC_1();
 VAR_5 = FUNC_3(VAR_0)->classid;
 FUNC_2();
 if (FUNC_0()) {

  if (!VAR_1->sk)
   return -1;
  VAR_5 = VAR_1->sk->sk_classid;
 }

 if (!VAR_5)
  return -1;

 if (!FUNC_4(VAR_1, &VAR_4->ematches, ((void*)0)))
  return -1;

 VAR_3->classid = VAR_5;
 VAR_3->class = 0;
 return FUNC_5(VAR_1, &VAR_4->exts, VAR_3);
}
