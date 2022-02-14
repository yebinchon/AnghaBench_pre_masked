
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcindex_data {struct tcindex_data* h; struct tcindex_data* perfect; } ;
struct tcf_walker {int * fn; scalar_t__ skip; scalar_t__ count; } ;
struct tcf_proto {int * root; } ;


 struct tcindex_data* FUNC_0 (struct tcf_proto*) ;
 int FUNC_1 (struct tcindex_data*) ;
 int FUNC_2 (char*,struct tcf_proto*,struct tcindex_data*) ;
 int VAR_0 ;
 int FUNC_3 (struct tcf_proto*,struct tcf_walker*) ;

__attribute__((used)) static void FUNC_4(struct tcf_proto *VAR_1)
{
 struct tcindex_data *VAR_2 = FUNC_0(VAR_1);
 struct tcf_walker VAR_3;

 FUNC_2("tcindex_destroy(tp %p),p %p\n", VAR_1, VAR_2);
 VAR_3.count = 0;
 VAR_3.skip = 0;
 VAR_3.fn = &VAR_0;
 FUNC_3(VAR_1, &VAR_3);
 FUNC_1(VAR_2->perfect);
 FUNC_1(VAR_2->h);
 FUNC_1(VAR_2);
 VAR_1->root = ((void*)0);
}
