
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct reload {int dummy; } ;
struct insn_chain {int n_reloads; TYPE_1__* rld; int used_spill_regs; int insn; } ;
struct TYPE_4__ {int regno; scalar_t__ out; scalar_t__ in; int class; int optional; scalar_t__ secondary_p; scalar_t__ reg_rtx; int nregs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 size_t FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (struct insn_chain*,int) ;
 int FUNC_7 (scalar_t__,char*,int) ;
 int ** VAR_2 ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*,int) ;
 int VAR_3 ;
 int FUNC_9 (struct insn_chain*) ;
 int FUNC_10 (int*,int,int,int ) ;
 int* VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_11 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_12 (struct insn_chain *VAR_9)
{
  int VAR_10;





  for (VAR_10 = 0; VAR_10 < VAR_9->n_reloads; VAR_10++)
    {

      if (VAR_9->rld[VAR_10].reg_rtx)
 {
   int VAR_11 = FUNC_5 (VAR_9->rld[VAR_10].reg_rtx);
   VAR_9->rld[VAR_10].regno = VAR_11;
   VAR_9->rld[VAR_10].nregs
     = VAR_2[VAR_11][FUNC_2 (VAR_9->rld[VAR_10].reg_rtx)];
 }
      else
 VAR_9->rld[VAR_10].regno = -1;
      VAR_4[VAR_10] = VAR_10;
    }

  VAR_3 = VAR_9->n_reloads;
  FUNC_8 (VAR_6, VAR_9->rld, VAR_3 * sizeof (struct reload));

  FUNC_0 (VAR_8);

  if (VAR_0)
    FUNC_7 (VAR_0, "Spilling for insn %d.\n", FUNC_3 (VAR_9->insn));

  FUNC_10 (VAR_4, VAR_3, sizeof (short), VAR_5);



  FUNC_9 (VAR_9);

  for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
    {
      int VAR_12 = VAR_4[VAR_10];


      if ((VAR_6[VAR_12].out != 0 || VAR_6[VAR_12].in != 0 || VAR_6[VAR_12].secondary_p)
   && ! VAR_6[VAR_12].optional
   && VAR_6[VAR_12].regno == -1)
 if (! FUNC_6 (VAR_9, VAR_10))
   {
     if (VAR_0)
       FUNC_7(VAR_0, "reload failure for reload %d\n", VAR_12);
     FUNC_11 (VAR_9->insn, VAR_6[VAR_12].class);
     VAR_1 = 1;
     return;
   }
    }

  FUNC_1 (VAR_9->used_spill_regs, VAR_8);
  FUNC_4 (VAR_7, VAR_8);

  FUNC_8 (VAR_9->rld, VAR_6, VAR_3 * sizeof (struct reload));
}
