
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcf_proto {int dummy; } ;
struct TYPE_4__ {int nmatches; } ;
struct tcf_ematch_tree {void* matches; TYPE_2__ hdr; } ;
struct tcf_ematch {TYPE_1__* ops; scalar_t__ data; } ;
struct TYPE_3__ {int owner; int (* destroy ) (struct tcf_proto*,struct tcf_ematch*) ;} ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tcf_proto*,struct tcf_ematch*) ;
 struct tcf_ematch* FUNC_3 (struct tcf_ematch_tree*,int) ;
 int FUNC_4 (struct tcf_ematch*) ;

void FUNC_5(struct tcf_proto *VAR_0, struct tcf_ematch_tree *VAR_1)
{
 int VAR_2;

 if (VAR_1->matches == ((void*)0))
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1->hdr.nmatches; VAR_2++) {
  struct tcf_ematch *VAR_3 = FUNC_3(VAR_1, VAR_2);

  if (VAR_3->ops) {
   if (VAR_3->ops->destroy)
    VAR_3->ops->destroy(VAR_0, VAR_3);
   else if (!FUNC_4(VAR_3))
    FUNC_0((void *) VAR_3->data);
   FUNC_1(VAR_3->ops->owner);
  }
 }

 VAR_1->hdr.nmatches = 0;
 FUNC_0(VAR_1->matches);
 VAR_1->matches = ((void*)0);
}
