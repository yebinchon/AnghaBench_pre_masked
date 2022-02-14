
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcindex_filter {int result; struct tcindex_filter* next; } ;
struct tcindex_data {int hash; struct tcindex_filter** h; TYPE_2__* perfect; } ;
struct tcf_walker {scalar_t__ count; scalar_t__ skip; scalar_t__ (* fn ) (struct tcf_proto*,unsigned long,struct tcf_walker*) ;int stop; } ;
struct tcf_proto {int dummy; } ;
struct TYPE_3__ {int class; } ;
struct TYPE_4__ {TYPE_1__ res; } ;


 struct tcindex_data* FUNC_0 (struct tcf_proto*) ;
 int FUNC_1 (char*,struct tcf_proto*,struct tcf_walker*,struct tcindex_data*) ;
 scalar_t__ FUNC_2 (struct tcf_proto*,unsigned long,struct tcf_walker*) ;
 scalar_t__ FUNC_3 (struct tcf_proto*,unsigned long,struct tcf_walker*) ;

__attribute__((used)) static void FUNC_4(struct tcf_proto *VAR_0, struct tcf_walker *VAR_1)
{
 struct tcindex_data *VAR_2 = FUNC_0(VAR_0);
 struct tcindex_filter *VAR_3, *VAR_4;
 int VAR_5;

 FUNC_1("tcindex_walk(tp %p,walker %p),p %p\n", VAR_0, VAR_1, VAR_2);
 if (VAR_2->perfect) {
  for (VAR_5 = 0; VAR_5 < VAR_2->hash; VAR_5++) {
   if (!VAR_2->perfect[VAR_5].res.class)
    continue;
   if (VAR_1->count >= VAR_1->skip) {
    if (VAR_1->fn(VAR_0,
        (unsigned long) (VAR_2->perfect+VAR_5), VAR_1)
         < 0) {
     VAR_1->stop = 1;
     return;
    }
   }
   VAR_1->count++;
  }
 }
 if (!VAR_2->h)
  return;
 for (VAR_5 = 0; VAR_5 < VAR_2->hash; VAR_5++) {
  for (VAR_3 = VAR_2->h[VAR_5]; VAR_3; VAR_3 = VAR_4) {
   VAR_4 = VAR_3->next;
   if (VAR_1->count >= VAR_1->skip) {
    if (VAR_1->fn(VAR_0, (unsigned long) &VAR_3->result,
        VAR_1) < 0) {
     VAR_1->stop = 1;
     return;
    }
   }
   VAR_1->count++;
  }
 }
}
