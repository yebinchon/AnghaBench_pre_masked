
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tcindex_filter_result {int dummy; } ;
struct tcindex_data {scalar_t__ alloc_hash; scalar_t__ perfect; } ;
struct tcf_proto {int dummy; } ;


 struct tcindex_data* FUNC_0 (struct tcf_proto*) ;
 int FUNC_1 (char*,struct tcf_proto*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct tcindex_filter_result*) ;
 struct tcindex_filter_result* FUNC_3 (struct tcindex_data*,scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_4(struct tcf_proto *VAR_0, u32 VAR_1)
{
 struct tcindex_data *VAR_2 = FUNC_0(VAR_0);
 struct tcindex_filter_result *VAR_3;

 FUNC_1("tcindex_get(tp %p,handle 0x%08x)\n", VAR_0, VAR_1);
 if (VAR_2->perfect && VAR_1 >= VAR_2->alloc_hash)
  return 0;
 VAR_3 = FUNC_3(VAR_2, VAR_1);
 return VAR_3 && FUNC_2(VAR_3) ? (unsigned long) VAR_3 : 0UL;
}
