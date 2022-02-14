
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int icode; struct TYPE_9__* prev_sri; } ;
typedef TYPE_2__ secondary_reload_info ;
typedef scalar_t__ rtx ;
typedef enum reload_type { ____Placeholder_reload_type } reload_type ;
typedef enum reg_class { ____Placeholder_reg_class } reg_class ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef enum insn_code { ____Placeholder_insn_code } insn_code ;
struct TYPE_12__ {int n_operands; TYPE_1__* operand; } ;
struct TYPE_11__ {int secondary_p; int class; int inmode; int outmode; int secondary_in_reload; int secondary_out_reload; int secondary_in_icode; int secondary_out_icode; int when_needed; int opnum; int optional; int nocombine; scalar_t__ out_reg; scalar_t__ in_reg; scalar_t__ inc; scalar_t__ reg_rtx; scalar_t__ out; scalar_t__ in; } ;
struct TYPE_10__ {int (* secondary_reload ) (int,scalar_t__,int,int,TYPE_2__*) ;} ;
struct TYPE_8__ {char* constraint; int mode; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int,int,int) ;
 scalar_t__ FUNC_4 (int,int,int,int) ;
 int FUNC_5 (int,int) ;
 int VAR_3 ;
 size_t FUNC_6 (scalar_t__) ;
 int FUNC_7 (unsigned char,char const*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_9 (int,int,int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int VAR_11 ;
 int FUNC_12 (int) ;
 int FUNC_13 (scalar_t__,int,int,int) ;
 TYPE_7__* VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_14 (int,int) ;
 scalar_t__* VAR_14 ;
 TYPE_5__* VAR_15 ;
 int FUNC_15 (int,scalar_t__,int,int,TYPE_2__*) ;
 TYPE_3__ VAR_16 ;

__attribute__((used)) static int
FUNC_16 (int VAR_17, rtx VAR_18, int VAR_19, int VAR_20,
         enum reg_class VAR_21,
         enum machine_mode VAR_22, enum reload_type VAR_23,
         enum insn_code *VAR_24, secondary_reload_info *VAR_25)
{
  enum reg_class VAR_26 = VAR_3;
  enum reg_class VAR_27;
  enum machine_mode VAR_28 = VAR_22;
  enum insn_code VAR_29 = VAR_0;
  enum insn_code VAR_30 = VAR_0;
  enum reload_type VAR_31;
  int VAR_32, VAR_33 = -1;
  const char *VAR_34;
  char VAR_35;
  secondary_reload_info VAR_36;

  if (VAR_23 == VAR_5
      || VAR_23 == VAR_7
      || VAR_23 == VAR_4
      || VAR_23 == VAR_6)
    VAR_31 = VAR_23;
  else
    VAR_31 = VAR_17 ? VAR_5 : VAR_7;

  *VAR_24 = VAR_0;



  if (FUNC_0 (VAR_18) == VAR_10
      && (FUNC_2 (FUNC_1 (VAR_18))
   > FUNC_2 (FUNC_1 (FUNC_11 (VAR_18)))))
    {
      VAR_18 = FUNC_11 (VAR_18);
      VAR_22 = FUNC_1 (VAR_18);
    }







  if (FUNC_8 (VAR_18) && FUNC_6 (VAR_18) >= VAR_1
      && VAR_14[FUNC_6 (VAR_18)] != 0)
    VAR_18 = VAR_14[FUNC_6 (VAR_18)];

  VAR_36.icode = VAR_0;
  VAR_36.prev_sri = VAR_25;
  VAR_26 = VAR_16.secondary_reload (VAR_17, VAR_18, VAR_21, VAR_22, &VAR_36);
  VAR_29 = VAR_36.icode;


  if (VAR_26 == VAR_3 && VAR_29 == VAR_0)
    return -1;

  if (VAR_26 != VAR_3)
    VAR_33 = FUNC_16 (VAR_17, VAR_18, VAR_19, VAR_20, VAR_26,
          VAR_22, VAR_23, &VAR_30, &VAR_36);




  if (VAR_29 != VAR_0)
    {
      FUNC_12 (VAR_12[(int) VAR_29].n_operands == 3);





      FUNC_12 (VAR_26 == VAR_3);

      VAR_34 = VAR_12[(int) VAR_29].operand[2].constraint;
      FUNC_12 (*VAR_34 == '=');
      VAR_34++;
      if (*VAR_34 == '&')
 VAR_34++;
      VAR_35 = *VAR_34;
      VAR_27 = (VAR_35 == 'r' ? VAR_2
         : FUNC_7 ((unsigned char) VAR_35,
         VAR_34));

      VAR_26 = VAR_27;
      VAR_28 = VAR_12[(int) VAR_29].operand[2].mode;
    }
  FUNC_12 (!VAR_17 || VAR_26 != VAR_21 || VAR_29 != VAR_0
       || VAR_30 != VAR_0);


  for (VAR_32 = 0; VAR_32 < VAR_13; VAR_32++)
    if (VAR_15[VAR_32].secondary_p
 && (FUNC_14 (VAR_26, VAR_15[VAR_32].class)
     || FUNC_14 (VAR_15[VAR_32].class, VAR_26))
 && ((VAR_17 && VAR_15[VAR_32].inmode == VAR_28)
     || (! VAR_17 && VAR_15[VAR_32].outmode == VAR_28))
 && ((VAR_17 && VAR_15[VAR_32].secondary_in_reload == VAR_33)
     || (! VAR_17 && VAR_15[VAR_32].secondary_out_reload == VAR_33))
 && ((VAR_17 && VAR_15[VAR_32].secondary_in_icode == VAR_30)
     || (! VAR_17 && VAR_15[VAR_32].secondary_out_icode == VAR_30))
 && (FUNC_10 (VAR_26) || VAR_9)
 && FUNC_3 (VAR_31, VAR_15[VAR_32].when_needed,
        VAR_19, VAR_15[VAR_32].opnum))
      {
 if (VAR_17)
   VAR_15[VAR_32].inmode = VAR_28;
 if (! VAR_17)
   VAR_15[VAR_32].outmode = VAR_28;

 if (FUNC_14 (VAR_26, VAR_15[VAR_32].class))
   VAR_15[VAR_32].class = VAR_26;

 VAR_15[VAR_32].opnum = FUNC_5 (VAR_15[VAR_32].opnum, VAR_19);
 VAR_15[VAR_32].optional &= VAR_20;
 VAR_15[VAR_32].secondary_p = 1;
 if (FUNC_4 (VAR_31, VAR_15[VAR_32].when_needed,
       VAR_19, VAR_15[VAR_32].opnum))
   VAR_15[VAR_32].when_needed = VAR_8;
      }

  if (VAR_32 == VAR_13)
    {
      VAR_15[VAR_32].in = VAR_15[VAR_32].out = 0;
      VAR_15[VAR_32].class = VAR_26;

      VAR_15[VAR_32].inmode = VAR_17 ? VAR_28 : VAR_11;
      VAR_15[VAR_32].outmode = ! VAR_17 ? VAR_28 : VAR_11;
      VAR_15[VAR_32].reg_rtx = 0;
      VAR_15[VAR_32].optional = VAR_20;
      VAR_15[VAR_32].inc = 0;

      VAR_15[VAR_32].nocombine = 1;
      VAR_15[VAR_32].in_reg = 0;
      VAR_15[VAR_32].out_reg = 0;
      VAR_15[VAR_32].opnum = VAR_19;
      VAR_15[VAR_32].when_needed = VAR_31;
      VAR_15[VAR_32].secondary_in_reload = VAR_17 ? VAR_33 : -1;
      VAR_15[VAR_32].secondary_out_reload = ! VAR_17 ? VAR_33 : -1;
      VAR_15[VAR_32].secondary_in_icode = VAR_17 ? VAR_30 : VAR_0;
      VAR_15[VAR_32].secondary_out_icode
 = ! VAR_17 ? VAR_30 : VAR_0;
      VAR_15[VAR_32].secondary_p = 1;

      VAR_13++;






    }

  *VAR_24 = VAR_29;
  return VAR_32;
}
