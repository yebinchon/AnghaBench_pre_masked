
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct niter_desc {int assumptions; scalar_t__ simple_p; } ;
struct TYPE_4__ {unsigned int times; int decision; } ;
struct loop {unsigned int ninsns; unsigned int av_ninsns; TYPE_2__ lpt_decision; TYPE_1__* header; } ;
struct TYPE_3__ {scalar_t__ count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct loop*) ;
 int FUNC_2 (scalar_t__,char*,...) ;
 struct niter_desc* FUNC_3 (struct loop*) ;
 int FUNC_4 (struct loop*) ;

__attribute__((used)) static void
FUNC_5 (struct loop *VAR_6, int VAR_7)
{
  unsigned VAR_8, VAR_9, VAR_10;
  struct niter_desc *VAR_11;

  if (!(VAR_7 & VAR_4))
    {

      return;
    }

  if (VAR_5)
    FUNC_2 (VAR_5, "\n;; Considering unrolling loop stupidly\n");



  VAR_8 = FUNC_0 (VAR_2) / VAR_6->ninsns;
  VAR_9
    = FUNC_0 (VAR_1) / VAR_6->av_ninsns;
  if (VAR_8 > VAR_9)
    VAR_8 = VAR_9;
  if (VAR_8 > (unsigned) FUNC_0 (VAR_3))
    VAR_8 = FUNC_0 (VAR_3);


  if (VAR_8 <= 1)
    {
      if (VAR_5)
 FUNC_2 (VAR_5, ";; Not considering loop, is too big\n");
      return;
    }


  VAR_11 = FUNC_3 (VAR_6);


  if (VAR_11->simple_p && !VAR_11->assumptions)
    {
      if (VAR_5)
 FUNC_2 (VAR_5, ";; The loop is simple\n");
      return;
    }



  if (FUNC_4 (VAR_6) > 1)
    {
      if (VAR_5)
 FUNC_2 (VAR_5, ";; Not unrolling, contains branches\n");
      return;
    }


  if (VAR_6->header->count
      && FUNC_1 (VAR_6) < 2 * VAR_8)
    {
      if (VAR_5)
 FUNC_2 (VAR_5, ";; Not unrolling loop, doesn't roll\n");
      return;
    }




  for (VAR_10 = 1; 2 * VAR_10 <= VAR_8; VAR_10 *= 2)
    continue;

  VAR_6->lpt_decision.decision = VAR_0;
  VAR_6->lpt_decision.times = VAR_10 - 1;

  if (VAR_5)
    FUNC_2 (VAR_5,
      ";; Decided to unroll the loop stupidly, %d times.\n",
      VAR_6->lpt_decision.times);
}
