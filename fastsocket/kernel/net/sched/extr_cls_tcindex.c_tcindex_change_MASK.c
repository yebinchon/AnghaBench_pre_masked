
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcindex_filter_result {int dummy; } ;
struct tcindex_data {int dummy; } ;
struct tcf_proto {int dummy; } ;
struct nlattr {int dummy; } ;


 struct tcindex_data* FUNC_0 (struct tcf_proto*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct nlattr**,int ,struct nlattr*,int ) ;
 int FUNC_2 (char*,struct tcf_proto*,int ,struct nlattr**,unsigned long*,struct nlattr*,struct tcindex_data*,struct tcindex_filter_result*,unsigned long) ;
 int VAR_3 ;
 int FUNC_3 (struct tcf_proto*,unsigned long,int ,struct tcindex_data*,struct tcindex_filter_result*,struct nlattr**,struct nlattr*) ;

__attribute__((used)) static int
FUNC_4(struct tcf_proto *VAR_4, unsigned long VAR_5, u32 VAR_6,
        struct nlattr **VAR_7, unsigned long *VAR_8)
{
 struct nlattr *VAR_9 = VAR_7[VAR_0];
 struct nlattr *VAR_10[VAR_2 + 1];
 struct tcindex_data *VAR_11 = FUNC_0(VAR_4);
 struct tcindex_filter_result *VAR_12 = (struct tcindex_filter_result *) *VAR_8;
 int VAR_13;

 FUNC_2("tcindex_change(tp %p,handle 0x%08x,tca %p,arg %p),opt %p,"
     "p %p,r %p,*arg 0x%lx\n",
     VAR_4, VAR_6, VAR_7, VAR_8, VAR_9, VAR_11, VAR_12, VAR_8 ? *VAR_8 : 0L);

 if (!VAR_9)
  return 0;

 VAR_13 = FUNC_1(VAR_10, VAR_2, VAR_9, VAR_3);
 if (VAR_13 < 0)
  return VAR_13;

 return FUNC_3(VAR_4, VAR_5, VAR_6, VAR_11, VAR_12, VAR_10, VAR_7[VAR_1]);
}
