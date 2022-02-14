
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct loops {int num; struct loop** parray; } ;
struct TYPE_2__ {scalar_t__ decision; } ;
struct loop {int num; TYPE_1__ lpt_decision; int ninsns; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct loop*,int) ;
 int FUNC_1 (struct loop*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (scalar_t__,char*,int) ;
 int FUNC_3 (struct loop*) ;
 int FUNC_4 (struct loops*,struct loop*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct loops*) ;

__attribute__((used)) static void
FUNC_7 (struct loops *VAR_4, int VAR_5)
{
  struct loop *VAR_6;
  unsigned VAR_7;


  for (VAR_7 = VAR_4->num - 1; VAR_7 > 0; VAR_7--)
    {
      VAR_6 = VAR_4->parray[VAR_7];
      if (!VAR_6)
 continue;

      VAR_6->lpt_decision.decision = VAR_1;

      if (VAR_3)
 FUNC_2 (VAR_3,
   "\n;; *** Considering loop %d for complete peeling ***\n",
   VAR_6->num);

      VAR_6->ninsns = FUNC_3 (VAR_6);

      FUNC_1 (VAR_6, VAR_5);
      if (VAR_6->lpt_decision.decision == VAR_1)
 FUNC_0 (VAR_6, VAR_5);

      if (VAR_6->lpt_decision.decision == VAR_2)
 {
   FUNC_4 (VAR_4, VAR_6);




 }
    }
}
