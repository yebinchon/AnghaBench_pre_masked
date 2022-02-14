
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s390_unwind_cache {scalar_t__ func; scalar_t__ local_base; scalar_t__ frame_base; TYPE_1__* saved_regs; } ;
struct s390_prologue_data {int gpr_size; scalar_t__ fpr_size; struct prologue_value* spill; struct prologue_value* gpr; } ;
struct prologue_value {scalar_t__ kind; size_t reg; scalar_t__ k; } ;
struct gdbarch {int dummy; } ;
struct frame_info {int dummy; } ;
typedef int data ;
typedef scalar_t__ ULONGEST ;
struct TYPE_2__ {size_t realreg; scalar_t__ addr; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ FUNC_0 (struct frame_info*) ;
 scalar_t__ FUNC_1 (struct frame_info*) ;
 scalar_t__ FUNC_2 (struct frame_info*) ;
 scalar_t__ FUNC_3 (struct frame_info*,int) ;
 scalar_t__ FUNC_4 (struct gdbarch*,scalar_t__) ;
 int FUNC_5 (struct gdbarch*) ;
 struct gdbarch* FUNC_6 (struct frame_info*) ;
 scalar_t__ FUNC_7 (struct frame_info*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct s390_prologue_data*,int ,int) ;
 scalar_t__ FUNC_10 (struct prologue_value*,struct prologue_value*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_11 (struct gdbarch*,scalar_t__,scalar_t__,struct s390_prologue_data*) ;
 scalar_t__ FUNC_12 (struct gdbarch*,scalar_t__) ;
 int FUNC_13 (TYPE_1__*,size_t) ;

__attribute__((used)) static int
FUNC_14 (struct frame_info *VAR_8,
      struct s390_unwind_cache *VAR_9)
{
  struct gdbarch *VAR_10 = FUNC_6 (VAR_8);
  int VAR_11 = FUNC_5 (VAR_10) / 8;
  struct s390_prologue_data VAR_12;
  struct prologue_value *VAR_13 = &VAR_12.gpr[VAR_1 - VAR_4];
  struct prologue_value *VAR_14 = &VAR_12.gpr[VAR_6 - VAR_4];
  int VAR_15;
  CORE_ADDR VAR_16;
  CORE_ADDR VAR_17;
  CORE_ADDR VAR_18;
  ULONGEST VAR_19;
  CORE_ADDR VAR_20;
  int VAR_21;
  int VAR_22;





  VAR_17 = FUNC_0 (VAR_8);
  if (!VAR_17)
    return 0;


  VAR_18 = FUNC_11 (VAR_10, VAR_17,
      FUNC_1 (VAR_8), &VAR_12);
  if (!VAR_18)
    return 0;




  if (VAR_14->kind != VAR_7 || VAR_14->reg != VAR_6)
    return 0;





  if (VAR_14->k == 0)
    {



      if (FUNC_7 (VAR_8) == VAR_0


   && FUNC_2 (VAR_8) >= 0)
 return 0;



      VAR_19 = FUNC_3 (VAR_8, VAR_5);
      VAR_19 = FUNC_4 (VAR_10, VAR_19) - 1;
      if (FUNC_8 (VAR_19) == VAR_17)
 {







   struct s390_prologue_data VAR_23;
   struct prologue_value *VAR_24 = &VAR_23[VAR_6 - VAR_4];

   if (!(FUNC_11 (VAR_10, VAR_17, (CORE_ADDR)-1, &VAR_23)
         && VAR_24->kind == VAR_7
         && VAR_24->reg == VAR_6
         && VAR_24->k != 0))
     return 0;
 }
    }



  VAR_22 = -VAR_14->k;





  if (FUNC_10 (VAR_14, VAR_13))
    VAR_21 = VAR_1;
  else
    VAR_21 = VAR_6;





  if (VAR_22 > 0
      && (FUNC_7 (VAR_8) != VAR_0
   || FUNC_2 (VAR_8) < 0))
    {


      if (FUNC_12 (VAR_10, FUNC_1 (VAR_8)))
 {
   FUNC_9 (&VAR_12, 0, sizeof (VAR_12));
   VAR_22 = 0;
   VAR_21 = VAR_6;
 }
    }





  VAR_20 = FUNC_3 (VAR_8, VAR_21) + VAR_22;






  for (VAR_15 = 0, VAR_16 = VAR_20 + 2 * VAR_12.gpr_size;
       VAR_15 < 14;
       VAR_15++, VAR_16 += VAR_12.gpr_size)
    {
      struct prologue_value *VAR_25 = &VAR_12.spill[VAR_15];

      if (VAR_25->kind == VAR_7
          && VAR_25->k == 0)
        VAR_9->saved_regs[VAR_25->reg].addr = VAR_16;
    }


  for (VAR_15 = 14, VAR_16 = VAR_20 + 16 * VAR_12.gpr_size;
       VAR_15 < VAR_2;
       VAR_15++, VAR_16 += VAR_12.fpr_size)
    {
      struct prologue_value *VAR_26 = &VAR_12.spill[VAR_15];

      if (VAR_26->kind == VAR_7
          && VAR_26->k == 0)
        VAR_9->saved_regs[VAR_26->reg].addr = VAR_16;
    }


  VAR_9->saved_regs[VAR_3] = VAR_9->saved_regs[VAR_5];





  if (VAR_22 == 0
      && !FUNC_13 (VAR_9->saved_regs, VAR_3))
    {
      VAR_9->saved_regs[VAR_3].realreg = VAR_5;
    }





  if (VAR_22 > 0)
    {
      if (!FUNC_13 (VAR_9->saved_regs, VAR_6)
   || !FUNC_13 (VAR_9->saved_regs, VAR_3))
 VAR_20 = -1;
    }



  if (VAR_20 != -1)
    {
      VAR_9->frame_base = VAR_20 + 16*VAR_11 + 32;
      VAR_9->local_base = VAR_20 - VAR_22;
    }

  VAR_9->func = VAR_17;
  return 1;
}
