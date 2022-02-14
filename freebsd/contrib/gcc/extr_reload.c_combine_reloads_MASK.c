
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ rtx ;
struct TYPE_10__ {TYPE_2__* rtl; } ;
struct TYPE_14__ {TYPE_3__ il; } ;
struct TYPE_13__ {int n_operands; TYPE_1__* operand; } ;
struct TYPE_12__ {int what; } ;
struct TYPE_11__ {scalar_t__ out; scalar_t__ in; scalar_t__ when_needed; size_t opnum; scalar_t__ class; size_t inmode; size_t outmode; scalar_t__ inc; scalar_t__ reg_rtx; int secondary_out_reload; int secondary_out_icode; int out_reg; int nocombine; scalar_t__ optional; } ;
struct TYPE_9__ {int global_live_at_end; } ;
struct TYPE_8__ {char* constraint; } ;


 scalar_t__ FUNC_0 (scalar_t__,size_t) ;
 TYPE_7__* VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (size_t,size_t) ;
 size_t FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 size_t FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_10 (int ,size_t) ;
 scalar_t__ FUNC_11 (scalar_t__,int) ;
 int FUNC_12 (int ,scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int * VAR_9 ;
 scalar_t__ FUNC_14 (size_t,size_t) ;
 scalar_t__** VAR_10 ;
 TYPE_6__* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int * VAR_14 ;
 scalar_t__* VAR_15 ;
 scalar_t__ FUNC_15 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__) ;
 int FUNC_17 (scalar_t__,size_t,int) ;
 TYPE_5__* VAR_16 ;
 TYPE_4__* VAR_17 ;
 scalar_t__ FUNC_18 (scalar_t__,scalar_t__) ;
 scalar_t__** VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static void
FUNC_19 (void)
{
  int VAR_20;
  int VAR_21 = -1;
  int VAR_22 = -1;
  rtx VAR_23;




  for (VAR_20 = 0; VAR_20 < VAR_12; VAR_20++)
    if (VAR_17[VAR_20].out != 0)
      {
 if (VAR_21 >= 0)
   return;
 VAR_21 = VAR_20;
      }

  if (VAR_21 < 0 || VAR_17[VAR_21].optional)
    return;



  if (VAR_17[VAR_21].in != 0)
    return;


  if (FUNC_13 (VAR_17[VAR_21].out))
    return;





  for (VAR_20 = 0; VAR_20 < VAR_12; VAR_20++)
    if ((VAR_17[VAR_20].when_needed == VAR_6
  || VAR_17[VAR_20].when_needed == VAR_4)
 && VAR_17[VAR_20].opnum == VAR_17[VAR_21].opnum)
      return;



  for (VAR_20 = 0; VAR_20 < VAR_12; VAR_20++)
    if (VAR_17[VAR_20].in && ! VAR_17[VAR_20].optional && ! VAR_17[VAR_20].nocombine

 && VAR_17[VAR_20].when_needed != VAR_6
 && VAR_17[VAR_20].when_needed != VAR_4
 && VAR_17[VAR_20].when_needed != VAR_7
 && (FUNC_0 (VAR_17[VAR_20].class, VAR_17[VAR_20].inmode)
     == FUNC_0 (VAR_17[VAR_21].class,
    VAR_17[VAR_21].outmode))
 && VAR_17[VAR_20].inc == 0
 && VAR_17[VAR_20].reg_rtx == 0
 && (VAR_8
     ? (VAR_17[VAR_20].class == VAR_17[VAR_21].class)
     : (FUNC_15 (VAR_17[VAR_20].class,
       VAR_17[VAR_21].class)
        || FUNC_15 (VAR_17[VAR_21].class,
          VAR_17[VAR_20].class)))
 && (FUNC_4 (VAR_17[VAR_20].in, VAR_17[VAR_21].out)



     || (! FUNC_16 (VAR_17[VAR_21].out,
            VAR_17[VAR_20].in)






  && ! (FUNC_9 (VAR_17[VAR_20].in)
        && FUNC_16 (VAR_17[VAR_20].in,
            VAR_17[VAR_21].out))))
 && ! FUNC_17 (VAR_17[VAR_20].in, VAR_17[VAR_20].inmode,
      VAR_17[VAR_20].when_needed != VAR_3)
 && (VAR_15[(int) VAR_17[VAR_20].class]
     || VAR_8)


 && (VAR_17[VAR_20].when_needed == VAR_3
     || VAR_17[VAR_20].when_needed == VAR_5))
      {
 int VAR_24;


 VAR_17[VAR_20].out = VAR_17[VAR_21].out;
 VAR_17[VAR_20].out_reg = VAR_17[VAR_21].out_reg;
 VAR_17[VAR_20].outmode = VAR_17[VAR_21].outmode;

 VAR_17[VAR_21].out = 0;

 VAR_17[VAR_20].when_needed = VAR_7;

 if (VAR_17[VAR_21].secondary_out_reload != -1)
   {
     VAR_17[VAR_20].secondary_out_reload
       = VAR_17[VAR_21].secondary_out_reload;
     VAR_17[VAR_20].secondary_out_icode
       = VAR_17[VAR_21].secondary_out_icode;
   }
 if (FUNC_15 (VAR_17[VAR_21].class,
    VAR_17[VAR_20].class))
   VAR_17[VAR_20].class = VAR_17[VAR_21].class;


 for (VAR_24 = 0; VAR_24 < VAR_13; VAR_24++)
   if (VAR_16[VAR_24].what == VAR_21)
     VAR_16[VAR_24].what = VAR_20;

 return;
      }







  if (FUNC_3 (VAR_19) == -1)
    return;

  for (VAR_20 = 1; VAR_20 < VAR_11[FUNC_3 (VAR_19)].n_operands; VAR_20++)
    if (VAR_11[FUNC_3 (VAR_19)].operand[VAR_20].constraint[0] == '='
 || VAR_11[FUNC_3 (VAR_19)].operand[VAR_20].constraint[0] == '+')
      return;




  for (VAR_23 = FUNC_7 (VAR_19); VAR_23; VAR_23 = FUNC_11 (VAR_23, 1))
    if (FUNC_8 (VAR_23) == VAR_2
 && FUNC_9 (FUNC_11 (VAR_23, 0))
 && ! FUNC_16 (FUNC_11 (VAR_23, 0),
       VAR_17[VAR_21].out)
 && FUNC_6 (FUNC_11 (VAR_23, 0)) < VAR_1
 && FUNC_2 (FUNC_6 (FUNC_11 (VAR_23, 0)), VAR_17[VAR_21].outmode)
 && FUNC_10 (VAR_14[(int) VAR_17[VAR_21].class],
         FUNC_6 (FUNC_11 (VAR_23, 0)))
 && (VAR_10[FUNC_6 (FUNC_11 (VAR_23, 0))][VAR_17[VAR_21].outmode]
     <= VAR_10[FUNC_6 (FUNC_11 (VAR_23, 0))][FUNC_1 (FUNC_11 (VAR_23, 0))])


 && ((VAR_22 = VAR_17[VAR_21].secondary_out_reload) == -1
     || (! (FUNC_10
     (VAR_14[(int) VAR_17[VAR_22].class],
      FUNC_6 (FUNC_11 (VAR_23, 0))))
  && ((VAR_22 = VAR_17[VAR_22].secondary_out_reload) == -1
      || ! (FUNC_10
      (VAR_14[(int) VAR_17[VAR_22].class],
       FUNC_6 (FUNC_11 (VAR_23, 0)))))))
 && ! VAR_9[FUNC_6 (FUNC_11 (VAR_23, 0))]


 && (FUNC_5 (FUNC_11 (VAR_23, 0)) < VAR_1
     || ! FUNC_12 (VAR_0->il.rtl->global_live_at_end,
          FUNC_5 (FUNC_11 (VAR_23, 0)))))
      {
 VAR_17[VAR_21].reg_rtx
   = FUNC_14 (VAR_17[VAR_21].outmode,
    FUNC_6 (FUNC_11 (VAR_23, 0)));
 return;
      }
}
