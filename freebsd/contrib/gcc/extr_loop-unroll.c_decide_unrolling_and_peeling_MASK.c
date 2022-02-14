
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct loops {struct loop* tree_root; } ;
struct TYPE_2__ {scalar_t__ decision; } ;
struct loop {int num; TYPE_1__ lpt_decision; int av_ninsns; int ninsns; struct loop* inner; int header; struct loop* outer; struct loop* next; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct loop*) ;
 int FUNC_1 (struct loop*) ;
 int FUNC_2 (struct loop*,int) ;
 int FUNC_3 (struct loop*,int) ;
 int FUNC_4 (struct loop*,int) ;
 int FUNC_5 (struct loop*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (scalar_t__,char*,...) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct loop*) ;

__attribute__((used)) static void
FUNC_9 (struct loops *VAR_2, int VAR_3)
{
  struct loop *VAR_4 = VAR_2->tree_root, *VAR_5;

  while (VAR_4->inner)
    VAR_4 = VAR_4->inner;


  while (VAR_4 != VAR_2->tree_root)
    {
      if (VAR_4->next)
 {
   VAR_5 = VAR_4->next;
   while (VAR_5->inner)
     VAR_5 = VAR_5->inner;
 }
      else
 VAR_5 = VAR_4->outer;

      VAR_4->lpt_decision.decision = VAR_0;

      if (VAR_1)
 FUNC_6 (VAR_1, "\n;; *** Considering loop %d ***\n", VAR_4->num);


      if (!FUNC_7 (VAR_4->header))
 {
   if (VAR_1)
     FUNC_6 (VAR_1, ";; Not considering loop, cold area\n");
   VAR_4 = VAR_5;
   continue;
 }


      if (!FUNC_1 (VAR_4))
 {
   if (VAR_1)
     FUNC_6 (VAR_1,
       ";; Not considering loop, cannot duplicate\n");
   VAR_4 = VAR_5;
   continue;
 }


      if (VAR_4->inner)
 {
   if (VAR_1)
     FUNC_6 (VAR_1, ";; Not considering loop, is not innermost\n");
   VAR_4 = VAR_5;
   continue;
 }

      VAR_4->ninsns = FUNC_8 (VAR_4);
      VAR_4->av_ninsns = FUNC_0 (VAR_4);




      FUNC_3 (VAR_4, VAR_3);
      if (VAR_4->lpt_decision.decision == VAR_0)
 FUNC_4 (VAR_4, VAR_3);
      if (VAR_4->lpt_decision.decision == VAR_0)
 FUNC_5 (VAR_4, VAR_3);
      if (VAR_4->lpt_decision.decision == VAR_0)
 FUNC_2 (VAR_4, VAR_3);

      VAR_4 = VAR_5;
    }
}
