
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct opt_info {int dummy; } ;
struct niter_desc {unsigned int niter; int noloop_assumptions; int niter_expr; scalar_t__ const_iter; scalar_t__ simple_p; } ;
struct loops {int dummy; } ;
struct TYPE_2__ {unsigned int times; } ;
struct loop {TYPE_1__ lpt_decision; } ;
typedef int sbitmap ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int VAR_2 ;
 struct opt_info* FUNC_1 (struct loop*) ;
 int FUNC_2 (struct opt_info*,unsigned int,int,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct loop*,int ,struct loops*,unsigned int,int ,int *,int *,int *,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (scalar_t__,char*,unsigned int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct opt_info*) ;
 int FUNC_7 (struct loop*) ;
 int FUNC_8 (int) ;
 struct niter_desc* FUNC_9 (struct loop*) ;
 int FUNC_10 (struct loop*) ;
 int FUNC_11 (struct opt_info*) ;
 int FUNC_12 (unsigned int) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void
FUNC_14 (struct loops *VAR_5, struct loop *VAR_6)
{
  sbitmap VAR_7;
  unsigned VAR_8 = VAR_6->lpt_decision.times;
  struct niter_desc *VAR_9 = FUNC_9 (VAR_6);
  struct opt_info *VAR_10 = ((void*)0);
  bool VAR_11;

  if (VAR_4 && VAR_8 > 1)
    VAR_10 = FUNC_1 (VAR_6);

  VAR_7 = FUNC_12 (VAR_8 + 1);
  FUNC_13 (VAR_7);

  FUNC_11 (VAR_10);

  VAR_11 = FUNC_3 (VAR_6, FUNC_10 (VAR_6),
          VAR_5, VAR_8, VAR_7,
          ((void*)0), ((void*)0),
          ((void*)0), VAR_0
          | (VAR_10
      ? VAR_1
        : 0));
  FUNC_8 (VAR_11);

  FUNC_5 (VAR_7);

  if (VAR_10)
    {
      FUNC_2 (VAR_10, VAR_8, 0, 0);
      FUNC_6 (VAR_10);
    }

  if (VAR_9->simple_p)
    {
      if (VAR_9->const_iter)
 {
   VAR_9->niter -= VAR_8;
   VAR_9->niter_expr = FUNC_0 (VAR_9->niter);
   VAR_9->noloop_assumptions = VAR_2;
 }
      else
 {




   FUNC_7 (VAR_6);
 }
    }
  if (VAR_3)
    FUNC_4 (VAR_3, ";; Peeling loop %d times\n", VAR_8);
}
