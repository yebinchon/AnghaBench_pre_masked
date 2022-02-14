
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int class; } ;
struct tcindex_filter_result {int exts; TYPE_1__ res; } ;
struct tcindex_filter {struct tcindex_filter* next; struct tcindex_filter_result result; } ;
struct tcindex_data {int hash; struct tcindex_filter** h; scalar_t__ perfect; } ;
struct tcf_proto {int dummy; } ;


 int VAR_0 ;
 struct tcindex_data* FUNC_0 (struct tcf_proto*) ;
 int FUNC_1 (struct tcindex_filter*) ;
 int FUNC_2 (char*,struct tcf_proto*,unsigned long,struct tcindex_data*,struct tcindex_filter*) ;
 int FUNC_3 (struct tcf_proto*,int *) ;
 int FUNC_4 (struct tcf_proto*) ;
 int FUNC_5 (struct tcf_proto*) ;
 int FUNC_6 (struct tcf_proto*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_7(struct tcf_proto *VAR_1, unsigned long VAR_2, int VAR_3)
{
 struct tcindex_data *VAR_4 = FUNC_0(VAR_1);
 struct tcindex_filter_result *VAR_5 = (struct tcindex_filter_result *) VAR_2;
 struct tcindex_filter *VAR_6 = ((void*)0);

 FUNC_2("tcindex_delete(tp %p,arg 0x%lx),p %p,f %p\n", VAR_1, VAR_2, VAR_4, VAR_6);
 if (VAR_4->perfect) {
  if (!VAR_5->res.class)
   return -VAR_0;
 } else {
  int VAR_7;
  struct tcindex_filter **VAR_8 = ((void*)0);

  for (VAR_7 = 0; VAR_7 < VAR_4->hash; VAR_7++)
   for (VAR_8 = VAR_4->h+VAR_7; *VAR_8; VAR_8 = &(*VAR_8)->next)
    if (&(*VAR_8)->result == VAR_5)
     goto found;
  return -VAR_0;

found:
  VAR_6 = *VAR_8;
  if (VAR_3)
   FUNC_4(VAR_1);
  *VAR_8 = VAR_6->next;
  if (VAR_3)
   FUNC_5(VAR_1);
 }
 FUNC_6(VAR_1, &VAR_5->res);
 FUNC_3(VAR_1, &VAR_5->exts);
 FUNC_1(VAR_6);
 return 0;
}
