
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tcf_proto {struct cls_cgroup_head* root; } ;
struct tcf_exts {int dummy; } ;
struct tcf_ematch_tree {int dummy; } ;
struct nlattr {int dummy; } ;
struct cls_cgroup_head {scalar_t__ handle; int ematches; int exts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct cls_cgroup_head* FUNC_0 (int,int ) ;
 int FUNC_1 (struct nlattr**,int ,struct nlattr*,int ) ;
 int FUNC_2 (struct tcf_proto*,int *,struct tcf_ematch_tree*) ;
 int FUNC_3 (struct tcf_proto*,struct nlattr*,struct tcf_ematch_tree*) ;
 int FUNC_4 (struct tcf_proto*,int *,struct tcf_exts*) ;
 int FUNC_5 (struct tcf_proto*,struct nlattr**,struct nlattr*,struct tcf_exts*,int *) ;
 int FUNC_6 (struct tcf_proto*) ;
 int FUNC_7 (struct tcf_proto*) ;

__attribute__((used)) static int FUNC_8(struct tcf_proto *VAR_10, unsigned long VAR_11,
        u32 VAR_12, struct nlattr **VAR_13,
        unsigned long *VAR_14)
{
 struct nlattr *VAR_15[VAR_5+1];
 struct cls_cgroup_head *VAR_16 = VAR_10->root;
 struct tcf_ematch_tree VAR_17;
 struct tcf_exts VAR_18;
 int VAR_19;

 if (!VAR_13[VAR_6])
  return -VAR_0;

 if (VAR_16 == ((void*)0)) {
  if (!VAR_12)
   return -VAR_0;

  VAR_16 = FUNC_0(sizeof(*VAR_16), VAR_3);
  if (VAR_16 == ((void*)0))
   return -VAR_1;

  VAR_16->handle = VAR_12;

  FUNC_6(VAR_10);
  VAR_10->root = VAR_16;
  FUNC_7(VAR_10);
 }

 if (VAR_12 != VAR_16->handle)
  return -VAR_2;

 VAR_19 = FUNC_1(VAR_15, VAR_5, VAR_13[VAR_6],
          VAR_9);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_19 = FUNC_5(VAR_10, VAR_15, VAR_13[VAR_7], &VAR_18, &VAR_8);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_19 = FUNC_3(VAR_10, VAR_15[VAR_4], &VAR_17);
 if (VAR_19 < 0)
  return VAR_19;

 FUNC_4(VAR_10, &VAR_16->exts, &VAR_18);
 FUNC_2(VAR_10, &VAR_16->ematches, &VAR_17);

 return 0;
}
