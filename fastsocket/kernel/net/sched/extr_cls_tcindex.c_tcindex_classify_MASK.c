
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcf_result {int classid; scalar_t__ class; } ;
struct tcindex_filter_result {int exts; struct tcf_result res; } ;
struct tcindex_data {int mask; int shift; int fall_through; } ;
struct tcf_proto {TYPE_1__* q; } ;
struct sk_buff {int tc_index; } ;
struct TYPE_2__ {int handle; } ;


 struct tcindex_data* FUNC_0 (struct tcf_proto*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*,struct sk_buff*,...) ;
 int FUNC_4 (struct sk_buff*,int *,struct tcf_result*) ;
 struct tcindex_filter_result* FUNC_5 (struct tcindex_data*,int) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_0, struct tcf_proto *VAR_1,
       struct tcf_result *VAR_2)
{
 struct tcindex_data *VAR_3 = FUNC_0(VAR_1);
 struct tcindex_filter_result *VAR_4;
 int VAR_5 = (VAR_0->tc_index & VAR_3->mask) >> VAR_3->shift;

 FUNC_3("tcindex_classify(skb %p,tp %p,res %p),p %p\n",
   VAR_0, VAR_1, VAR_2, VAR_3);

 VAR_4 = FUNC_5(VAR_3, VAR_5);
 if (!VAR_4) {
  if (!VAR_3->fall_through)
   return -1;
  VAR_2->classid = FUNC_2(FUNC_1(VAR_1->q->handle), VAR_5);
  VAR_2->class = 0;
  FUNC_3("alg 0x%x\n", VAR_2->classid);
  return 0;
 }
 *VAR_2 = VAR_4->res;
 FUNC_3("map 0x%x\n", VAR_2->classid);

 return FUNC_4(VAR_0, &VAR_4->exts, VAR_2);
}
