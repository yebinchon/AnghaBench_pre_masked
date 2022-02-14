
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct niter_desc {int niter; scalar_t__ noloop_assumptions; scalar_t__ assumptions; int const_iter; int simple_p; } ;
struct TYPE_2__ {unsigned int times; int decision; } ;
struct loop {unsigned int ninsns; unsigned int av_ninsns; TYPE_1__ lpt_decision; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (scalar_t__,char*,...) ;
 struct niter_desc* FUNC_2 (struct loop*) ;
 int FUNC_3 (struct loop*) ;

__attribute__((used)) static void
FUNC_4 (struct loop *VAR_7, int VAR_8)
{
  unsigned VAR_9, VAR_10, VAR_11, VAR_12 = 0, VAR_13, VAR_14;
  struct niter_desc *VAR_15;

  if (!(VAR_8 & VAR_5))
    {

      return;
    }

  if (VAR_6)
    FUNC_1 (VAR_6,
      "\n;; Considering unrolling loop with constant "
      "number of iterations\n");



  VAR_9 = FUNC_0 (VAR_3) / VAR_7->ninsns;
  VAR_10
    = FUNC_0 (VAR_2) / VAR_7->av_ninsns;
  if (VAR_9 > VAR_10)
    VAR_9 = VAR_10;
  if (VAR_9 > (unsigned) FUNC_0 (VAR_4))
    VAR_9 = FUNC_0 (VAR_4);


  if (VAR_9 <= 1)
    {
      if (VAR_6)
 FUNC_1 (VAR_6, ";; Not considering loop, is too big\n");
      return;
    }


  VAR_15 = FUNC_2 (VAR_7);


  if (!VAR_15->simple_p || !VAR_15->const_iter || VAR_15->assumptions)
    {
      if (VAR_6)
 FUNC_1 (VAR_6,
   ";; Unable to prove that the loop iterates constant times\n");
      return;
    }


  if (VAR_15->niter < 2 * VAR_9)
    {
      if (VAR_6)
 FUNC_1 (VAR_6, ";; Not unrolling loop, doesn't roll\n");
      return;
    }





  VAR_11 = 2 * VAR_9 + 10;

  VAR_14 = 2 * VAR_9 + 2;
  if (VAR_14 - 1 >= VAR_15->niter)
    VAR_14 = VAR_15->niter - 2;

  for (; VAR_14 >= VAR_9 - 1; VAR_14--)
    {
      unsigned VAR_16 = VAR_15->niter % (VAR_14 + 1);

      if (!FUNC_3 (VAR_7))
 VAR_13 = VAR_16 + VAR_14 + 1;
      else if (VAR_16 != (unsigned) VAR_14
        || VAR_15->noloop_assumptions != VAR_1)
 VAR_13 = VAR_16 + VAR_14 + 2;
      else
 VAR_13 = VAR_14 + 1;

      if (VAR_13 < VAR_11)
 {
   VAR_11 = VAR_13;
   VAR_12 = VAR_14;
 }
    }

  if (VAR_6)
    FUNC_1 (VAR_6, ";; max_unroll %d (%d copies, initial %d).\n",
      VAR_12 + 1, VAR_11, VAR_9);

  VAR_7->lpt_decision.decision = VAR_0;
  VAR_7->lpt_decision.times = VAR_12;

  if (VAR_6)
    FUNC_1 (VAR_6,
      ";; Decided to unroll the constant times rolling loop, %d times.\n",
      VAR_7->lpt_decision.times);
}
