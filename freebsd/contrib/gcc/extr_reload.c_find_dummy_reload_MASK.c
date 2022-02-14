
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ rtx ;
typedef enum reg_class { ____Placeholder_reg_class } reg_class ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_6__ {TYPE_1__* rtl; } ;
struct TYPE_8__ {TYPE_2__ il; } ;
struct TYPE_7__ {scalar_t__ out; } ;
struct TYPE_5__ {int global_live_at_end; } ;


 TYPE_4__* VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int) ;
 int VAR_2 ;
 unsigned int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ,unsigned int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_12 (int ,unsigned int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_13 (int ,int ,scalar_t__) ;
 int * VAR_9 ;
 scalar_t__ FUNC_14 (int,unsigned int) ;
 int FUNC_15 (unsigned int,unsigned int,scalar_t__) ;
 unsigned int** VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_16 (unsigned int,unsigned int,scalar_t__,scalar_t__*) ;
 int * VAR_12 ;
 TYPE_3__* VAR_13 ;
 scalar_t__ FUNC_17 (int,int,int ,int) ;
 int VAR_14 ;

__attribute__((used)) static rtx
FUNC_18 (rtx VAR_15, rtx VAR_16, rtx *VAR_17, rtx *VAR_18,
     enum machine_mode VAR_19, enum machine_mode VAR_20,
     enum reg_class VAR_21, int VAR_22, int VAR_23)
{
  rtx VAR_24 = VAR_15;
  rtx VAR_25 = VAR_16;
  int VAR_26 = 0;
  int VAR_27 = 0;
  rtx VAR_28 = 0;



  if (FUNC_2 (VAR_20) != FUNC_2 (VAR_19)
      && (FUNC_2 (VAR_20) > VAR_6
   || FUNC_2 (VAR_19) > VAR_6))
    return 0;





  while (FUNC_0 (VAR_25) == VAR_5)
    {
      if (FUNC_8 (FUNC_10 (VAR_25))
   && FUNC_7 (FUNC_10 (VAR_25)) < VAR_1)
 VAR_27 += FUNC_17 (FUNC_7 (FUNC_10 (VAR_25)),
        FUNC_1 (FUNC_10 (VAR_25)),
        FUNC_9 (VAR_25),
        FUNC_1 (VAR_25));
      VAR_25 = FUNC_10 (VAR_25);
    }
  while (FUNC_0 (VAR_24) == VAR_5)
    {
      if (FUNC_8 (FUNC_10 (VAR_24))
   && FUNC_7 (FUNC_10 (VAR_24)) < VAR_1)
 VAR_26 += FUNC_17 (FUNC_7 (FUNC_10 (VAR_24)),
       FUNC_1 (FUNC_10 (VAR_24)),
       FUNC_9 (VAR_24),
       FUNC_1 (VAR_24));
      VAR_24 = FUNC_10 (VAR_24);
    }



  {
    enum reg_class VAR_29 = FUNC_6 (VAR_24, VAR_21);
    if (VAR_29 != VAR_2)
      VAR_21 = VAR_29;
  }


  if (FUNC_8 (VAR_25)
      && FUNC_7 (VAR_25) < VAR_1)
    {
      unsigned int VAR_30 = FUNC_7 (VAR_25) + VAR_27;
      unsigned int VAR_31 = VAR_10[VAR_30][VAR_20];
      rtx VAR_32;
      VAR_32 = *VAR_17;
      *VAR_17 = VAR_8;

      if (VAR_30 < VAR_1
   && FUNC_3 (VAR_30, VAR_20)
   && ! FUNC_16 (VAR_30, VAR_30 + VAR_31,
          FUNC_5 (VAR_14), VAR_18))
 {
   unsigned int VAR_33;

   for (VAR_33 = 0; VAR_33 < VAR_31; VAR_33++)
     if (! FUNC_11 (VAR_12[(int) VAR_21],
         VAR_30 + VAR_33))
       break;

   if (VAR_33 == VAR_31)
     {
       if (FUNC_8 (VAR_16))
  VAR_28 = VAR_16;
       else
  VAR_28 = FUNC_14 (VAR_20, VAR_30);
     }
 }

      *VAR_17 = VAR_32;
    }







  if (VAR_11
      && FUNC_8 (VAR_24)
      && FUNC_7 (VAR_24) < VAR_1
      && (VAR_28 == 0
   || FUNC_13 (VAR_14, VAR_4, VAR_16))
      && FUNC_13 (VAR_14, VAR_3, VAR_15)
      && !VAR_9[FUNC_7 (VAR_24)]
      && FUNC_3 (FUNC_7 (VAR_24),




        (FUNC_1 (VAR_25) != VAR_7
         ? FUNC_1 (VAR_25) : VAR_20))







      && (FUNC_4 (VAR_24) < VAR_1
          || ! FUNC_12 (VAR_0->il.rtl->global_live_at_end,
        FUNC_4 (VAR_24))))
    {
      unsigned int VAR_34 = FUNC_7 (VAR_24) + VAR_26;
      unsigned int VAR_35 = VAR_10[VAR_34][VAR_19];

      if (! FUNC_16 (VAR_34, VAR_34 + VAR_35, VAR_25, (rtx*) 0)
   && ! FUNC_15 (VAR_34, VAR_34 + VAR_35,
        FUNC_5 (VAR_14))
   && (! VAR_23
       || ! FUNC_16 (VAR_34, VAR_34 + VAR_35,
       FUNC_5 (VAR_14), VAR_17)))
 {
   unsigned int VAR_36;

   for (VAR_36 = 0; VAR_36 < VAR_35; VAR_36++)
     if (! FUNC_11 (VAR_12[(int) VAR_21],
         VAR_34 + VAR_36))
       break;

   if (VAR_36 == VAR_35)
     {



       if (VAR_22 >= 0 && VAR_28 == VAR_16)
  VAR_13[VAR_22].out = 0;
       if (FUNC_8 (VAR_15))
  VAR_28 = VAR_15;
       else
  VAR_28 = FUNC_14 (VAR_19, VAR_34);
     }
 }
    }

  return VAR_28;
}
