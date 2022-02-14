
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {struct cls_cgroup_head* root; } ;
struct cls_cgroup_head {int ematches; int exts; } ;


 int FUNC_0 (struct cls_cgroup_head*) ;
 int FUNC_1 (struct tcf_proto*,int *) ;
 int FUNC_2 (struct tcf_proto*,int *) ;

__attribute__((used)) static void FUNC_3(struct tcf_proto *VAR_0)
{
 struct cls_cgroup_head *VAR_1 = VAR_0->root;

 if (VAR_1) {
  FUNC_2(VAR_0, &VAR_1->exts);
  FUNC_1(VAR_0, &VAR_1->ematches);
  FUNC_0(VAR_1);
 }
}
