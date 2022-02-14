
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct opt_info {int dummy; } ;
struct niter_desc {int simple_p; } ;
struct loops {int dummy; } ;
struct TYPE_2__ {unsigned int times; } ;
struct loop {TYPE_1__ lpt_decision; } ;
typedef int sbitmap ;


 int VAR_0 ;
 int VAR_1 ;
 struct opt_info* FUNC_0 (struct loop*) ;
 int FUNC_1 (struct opt_info*,unsigned int,int,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct loop*,int ,struct loops*,unsigned int,int ,int *,int *,int *,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (scalar_t__,char*,unsigned int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct opt_info*) ;
 int FUNC_6 (int) ;
 struct niter_desc* FUNC_7 (struct loop*) ;
 int FUNC_8 (struct loop*) ;
 int FUNC_9 (struct loop*) ;
 int FUNC_10 (struct opt_info*) ;
 int FUNC_11 (unsigned int) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void
FUNC_13 (struct loops *VAR_5, struct loop *VAR_6)
{
  sbitmap VAR_7;
  unsigned VAR_8 = VAR_6->lpt_decision.times;
  struct niter_desc *VAR_9 = FUNC_7 (VAR_6);
  struct opt_info *VAR_10 = ((void*)0);
  bool VAR_11;

  if (VAR_3
      || VAR_4)
    VAR_10 = FUNC_0 (VAR_6);


  VAR_7 = FUNC_11 (VAR_8 + 1);
  FUNC_12 (VAR_7);
  FUNC_10 (VAR_10);

  VAR_11 = FUNC_2 (VAR_6, FUNC_8 (VAR_6),
          VAR_5, VAR_8, VAR_7,
          ((void*)0), ((void*)0), ((void*)0),
          VAR_0
          | (VAR_10
      ? VAR_1
        : 0));
  FUNC_6 (VAR_11);

  if (VAR_10)
    {
      FUNC_1 (VAR_10, VAR_8, 1, 1);
      FUNC_5 (VAR_10);
    }

  FUNC_4 (VAR_7);

  if (VAR_9->simple_p)
    {






      VAR_9->simple_p = 0;
    }

  if (VAR_2)
    FUNC_3 (VAR_2, ";; Unrolled loop %d times, %i insns\n",
      VAR_8, FUNC_9 (VAR_6));
}
