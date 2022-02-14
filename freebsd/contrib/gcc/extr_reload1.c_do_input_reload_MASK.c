
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reload {scalar_t__ in; scalar_t__ in_reg; scalar_t__ out_reg; scalar_t__ reg_rtx; scalar_t__ when_needed; scalar_t__ out; } ;
struct insn_chain {scalar_t__ insn; } ;
typedef scalar_t__ rtx ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 size_t FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int ,size_t) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__,int,size_t) ;
 int FUNC_6 (struct insn_chain*,scalar_t__,scalar_t__,int) ;
 scalar_t__ VAR_2 ;
 size_t* VAR_3 ;
 int VAR_4 ;
 scalar_t__* VAR_5 ;
 scalar_t__* VAR_6 ;
 scalar_t__* VAR_7 ;
 size_t* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__* VAR_10 ;
 scalar_t__* VAR_11 ;

__attribute__((used)) static void
FUNC_8 (struct insn_chain *VAR_12, struct reload *VAR_13, int VAR_14)
{
  rtx VAR_15 = VAR_12->insn;
  rtx VAR_16 = (VAR_13->in && FUNC_0 (VAR_13->in)
      ? VAR_13->in_reg : VAR_13->in);

  if (VAR_16 != 0


      && (! VAR_6[VAR_14] || (VAR_13->out && ! VAR_13->out_reg))
      && ! FUNC_7 (VAR_13->reg_rtx, VAR_16)
      && VAR_13->reg_rtx != 0)
    FUNC_6 (VAR_12, VAR_9 + VAR_14, VAR_16, VAR_14);




  if (VAR_2 && VAR_6[VAR_14] && VAR_13->in
      && FUNC_0 (VAR_13->in)
      && FUNC_0 (VAR_13->in_reg)
      && VAR_8[VAR_14] >= 0
      && FUNC_3 (VAR_4, VAR_8[VAR_14]))
    VAR_13->in = VAR_5[VAR_3[VAR_8[VAR_14]]];





  if (VAR_2



      && VAR_13->when_needed == VAR_1
      && (VAR_6[VAR_14] || VAR_7[VAR_14])
      && VAR_13->reg_rtx
      && FUNC_2 (VAR_13->reg_rtx)
      && VAR_10[FUNC_1 (VAR_13->reg_rtx)] != 0
      && (FUNC_4 (VAR_15,
    VAR_11[FUNC_1 (VAR_13->reg_rtx)])
   || FUNC_7 (VAR_11[FUNC_1 (VAR_13->reg_rtx)],
     VAR_13->out_reg)))
    FUNC_5 (VAR_15, VAR_14, FUNC_1 (VAR_13->reg_rtx));
}
