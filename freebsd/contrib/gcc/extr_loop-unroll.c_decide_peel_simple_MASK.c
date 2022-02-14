
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct niter_desc {scalar_t__ const_iter; int assumptions; scalar_t__ simple_p; } ;
struct TYPE_4__ {unsigned int times; int decision; } ;
struct loop {unsigned int ninsns; TYPE_2__ lpt_decision; TYPE_1__* header; } ;
struct TYPE_3__ {scalar_t__ count; } ;
typedef unsigned int HOST_WIDEST_INT ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int FUNC_1 (struct loop*) ;
 int FUNC_2 (scalar_t__,char*,...) ;
 struct niter_desc* FUNC_3 (struct loop*) ;
 int FUNC_4 (struct loop*) ;

__attribute__((used)) static void
FUNC_5 (struct loop *VAR_6, int VAR_7)
{
  unsigned VAR_8;
  struct niter_desc *VAR_9;

  if (!(VAR_7 & VAR_4))
    {

      return;
    }

  if (VAR_5)
    FUNC_2 (VAR_5, "\n;; Considering simply peeling loop\n");


  VAR_8 = FUNC_0 (VAR_2) / VAR_6->ninsns;
  if (VAR_8 > (unsigned) FUNC_0 (VAR_3))
    VAR_8 = FUNC_0 (VAR_3);


  if (!VAR_8)
    {
      if (VAR_5)
 FUNC_2 (VAR_5, ";; Not considering loop, is too big\n");
      return;
    }


  VAR_9 = FUNC_3 (VAR_6);


  if (VAR_9->simple_p && !VAR_9->assumptions && VAR_9->const_iter)
    {
      if (VAR_5)
 FUNC_2 (VAR_5, ";; Loop iterates constant times\n");
      return;
    }



  if (FUNC_4 (VAR_6) > 1)
    {
      if (VAR_5)
 FUNC_2 (VAR_5, ";; Not peeling, contains branches\n");
      return;
    }

  if (VAR_6->header->count)
    {
      unsigned VAR_10 = FUNC_1 (VAR_6);
      if (VAR_10 + 1 > VAR_8)
 {
   if (VAR_5)
     {
       FUNC_2 (VAR_5, ";; Not peeling loop, rolls too much (");
       FUNC_2 (VAR_5, VAR_0,
         (HOST_WIDEST_INT) (VAR_10 + 1));
       FUNC_2 (VAR_5, " iterations > %d [maximum peelings])\n",
         VAR_8);
     }
   return;
 }
      VAR_8 = VAR_10 + 1;
    }
  else
    {


      if (VAR_5)
 FUNC_2 (VAR_5,
   ";; Not peeling loop, no evidence it will be profitable\n");
      return;
    }


  VAR_6->lpt_decision.decision = VAR_1;
  VAR_6->lpt_decision.times = VAR_8;

  if (VAR_5)
    FUNC_2 (VAR_5, ";; Decided to simply peel the loop, %d times.\n",
      VAR_6->lpt_decision.times);
}
