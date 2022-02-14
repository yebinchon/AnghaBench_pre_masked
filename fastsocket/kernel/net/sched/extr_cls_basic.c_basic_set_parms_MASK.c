
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcf_proto {int dummy; } ;
struct tcf_exts {int dummy; } ;
struct tcf_ematch_tree {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {int classid; } ;
struct basic_filter {int ematches; int exts; TYPE_1__ res; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct tcf_proto*,TYPE_1__*,unsigned long) ;
 int FUNC_2 (struct tcf_proto*,int *,struct tcf_ematch_tree*) ;
 int FUNC_3 (struct tcf_proto*,struct nlattr*,struct tcf_ematch_tree*) ;
 int FUNC_4 (struct tcf_proto*,int *,struct tcf_exts*) ;
 int FUNC_5 (struct tcf_proto*,struct tcf_exts*) ;
 int FUNC_6 (struct tcf_proto*,struct nlattr**,struct nlattr*,struct tcf_exts*,int *) ;

__attribute__((used)) static inline int FUNC_7(struct tcf_proto *VAR_4, struct basic_filter *VAR_5,
      unsigned long VAR_6, struct nlattr **VAR_7,
      struct nlattr *VAR_8)
{
 int VAR_9 = -VAR_0;
 struct tcf_exts VAR_10;
 struct tcf_ematch_tree VAR_11;

 VAR_9 = FUNC_6(VAR_4, VAR_7, VAR_8, &VAR_10, &VAR_3);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_3(VAR_4, VAR_7[VAR_2], &VAR_11);
 if (VAR_9 < 0)
  goto errout;

 if (VAR_7[VAR_1]) {
  VAR_5->res.classid = FUNC_0(VAR_7[VAR_1]);
  FUNC_1(VAR_4, &VAR_5->res, VAR_6);
 }

 FUNC_4(VAR_4, &VAR_5->exts, &VAR_10);
 FUNC_2(VAR_4, &VAR_5->ematches, &VAR_11);

 return 0;
errout:
 FUNC_5(VAR_4, &VAR_10);
 return VAR_9;
}
