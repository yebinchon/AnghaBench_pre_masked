
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct mips_arg_info {int fpr_p; int reg_offset; int stack_offset; scalar_t__ reg_words; scalar_t__ stack_words; } ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_3__ {int arg_number; int num_gprs; int num_fprs; int stack_words; int gp_reg_found; } ;
typedef TYPE_1__ CUMULATIVE_ARGS ;







 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int) ;
 unsigned int FUNC_3 (int) ;
 unsigned int FUNC_4 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (unsigned int,unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (scalar_t__) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 () ;
 unsigned int FUNC_9 (scalar_t__) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_10 (const CUMULATIVE_ARGS *VAR_8, enum machine_mode VAR_9,
        tree VAR_10, int VAR_11, struct mips_arg_info *VAR_12)
{
  bool VAR_13;
  unsigned int VAR_14, VAR_15, VAR_16;


  VAR_14 = VAR_10 ? FUNC_9 (VAR_10) : FUNC_3 (VAR_9);
  VAR_15 = (VAR_14 + VAR_6 - 1) / VAR_6;






  switch (VAR_7)
    {
    case 130:


      VAR_12->fpr_p = ((FUNC_2 (VAR_9) == VAR_3
        || FUNC_2 (VAR_9) == VAR_4)
       && FUNC_3 (VAR_9) <= VAR_5);
      break;

    case 132:
    case 128:



      VAR_12->fpr_p = (!VAR_8->gp_reg_found
       && VAR_8->arg_number < 2
       && (VAR_10 == 0 || FUNC_6 (VAR_10)
    || FUNC_7 (VAR_10))
       && (FUNC_2 (VAR_9) == VAR_3
    || FUNC_2 (VAR_9) == VAR_4)
       && FUNC_3 (VAR_9) <= VAR_5);
      break;

    case 129:
    case 131:


      VAR_12->fpr_p = (VAR_11
       && (VAR_10 == 0 || FUNC_0 (VAR_10))
       && (FUNC_2 (VAR_9) == VAR_3
    || FUNC_2 (VAR_9) == VAR_2
    || FUNC_2 (VAR_9) == VAR_4)
       && FUNC_4 (VAR_9) <= VAR_5);
      if (VAR_12->fpr_p
   && FUNC_2 (VAR_9) == VAR_2
   && FUNC_4 (VAR_9) < VAR_5)
 {
   if (VAR_8->num_gprs >= VAR_1 - 1)
     VAR_12->fpr_p = 0;
   else
     VAR_15 = 2;
 }
      break;

    default:
      FUNC_8 ();
    }


  VAR_13 = FUNC_1 (VAR_9, VAR_10) > VAR_0;




  VAR_12->reg_offset = (VAR_7 == 130 && VAR_12->fpr_p
        ? VAR_8->num_fprs
        : VAR_8->num_gprs);


  if (VAR_13)
    VAR_12->reg_offset += VAR_12->reg_offset & 1;


  VAR_12->stack_offset = VAR_8->stack_words;
  if (VAR_13)
    VAR_12->stack_offset += VAR_12->stack_offset & 1;

  VAR_16 = VAR_1 - VAR_12->reg_offset;


  VAR_12->reg_words = FUNC_5 (VAR_15, VAR_16);
  VAR_12->stack_words = VAR_15 - VAR_12->reg_words;
}
