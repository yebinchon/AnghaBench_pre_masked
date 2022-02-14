
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcf_proto {scalar_t__ root; } ;
struct tcf_exts {int dummy; } ;
struct nlattr {int dummy; } ;
struct fw_head {int mask; } ;
struct TYPE_2__ {void* classid; } ;
struct fw_filter {int exts; int indev; TYPE_1__ res; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct tcf_proto*,TYPE_1__*,unsigned long) ;
 int FUNC_2 (struct tcf_proto*,int ,struct nlattr*) ;
 int FUNC_3 (struct tcf_proto*,int *,struct tcf_exts*) ;
 int FUNC_4 (struct tcf_proto*,struct tcf_exts*) ;
 int FUNC_5 (struct tcf_proto*,struct nlattr**,struct nlattr*,struct tcf_exts*,int *) ;

__attribute__((used)) static int
FUNC_6(struct tcf_proto *VAR_6, struct fw_filter *VAR_7,
 struct nlattr **VAR_8, struct nlattr **VAR_9, unsigned long VAR_10)
{
 struct fw_head *VAR_11 = (struct fw_head *)VAR_6->root;
 struct tcf_exts VAR_12;
 u32 VAR_13;
 int VAR_14;

 VAR_14 = FUNC_5(VAR_6, VAR_8, VAR_9[VAR_4], &VAR_12, &VAR_5);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_14 = -VAR_0;
 if (VAR_8[VAR_1]) {
  VAR_7->res.classid = FUNC_0(VAR_8[VAR_1]);
  FUNC_1(VAR_6, &VAR_7->res, VAR_10);
 }
 if (VAR_8[VAR_3]) {
  VAR_13 = FUNC_0(VAR_8[VAR_3]);
  if (VAR_13 != VAR_11->mask)
   goto errout;
 } else if (VAR_11->mask != 0xFFFFFFFF)
  goto errout;

 FUNC_3(VAR_6, &VAR_7->exts, &VAR_12);

 return 0;
errout:
 FUNC_4(VAR_6, &VAR_12);
 return VAR_14;
}
