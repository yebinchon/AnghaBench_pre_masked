
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct costs {int mem_cost; int* cost; } ;
typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum reg_class { ____Placeholder_reg_class } reg_class ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;




 int FUNC_0 (int ) ;
 int VAR_0 ;

 size_t VAR_1 ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_2 ;

 int VAR_3 ;
 int FUNC_4 (size_t,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;

 size_t FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int ) ;

 int VAR_9 ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int,int const,int) ;
 struct costs* VAR_10 ;
 int* VAR_11 ;
 int*** VAR_12 ;
 int FUNC_11 (int ,int,int const,int) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void
FUNC_13 (enum machine_mode VAR_13, rtx VAR_14, int VAR_15,
       enum rtx_code VAR_16, enum rtx_code VAR_17,
       int VAR_18)
{
  enum rtx_code VAR_19 = FUNC_1 (VAR_14);
  enum reg_class VAR_20;

  if (VAR_15 == 1)
    VAR_20 = VAR_2;
  else
    VAR_20 = FUNC_10 (VAR_13, VAR_16, VAR_17);

  switch (VAR_19)
    {
    case 139:
    case 140:
    case 141:
    case 137:
    case 128:
    case 138:
      return;

    case 136:
      {
 rtx VAR_21 = FUNC_9 (VAR_14, 0);
 rtx VAR_22 = FUNC_9 (VAR_14, 1);
 enum rtx_code VAR_23 = FUNC_1 (VAR_21);
 enum rtx_code VAR_24 = FUNC_1 (VAR_22);


 if (VAR_23 == VAR_8)
   VAR_21 = FUNC_8 (VAR_21), VAR_23 = FUNC_1 (VAR_21);
 if (VAR_24 == VAR_8)
   VAR_22 = FUNC_8 (VAR_22), VAR_24 = FUNC_1 (VAR_22);




 if (VAR_3 == 1)
   FUNC_13 (VAR_13, VAR_21, 0, 136, VAR_24, VAR_18);






 else if (VAR_2 == FUNC_10 (VAR_9, 136, VAR_7))
   {
     FUNC_13 (VAR_13, VAR_21, VAR_15, 136, VAR_24, VAR_18);
     if (! FUNC_0 (VAR_22))
       FUNC_13 (VAR_13, VAR_22, VAR_15, 136, VAR_23, VAR_18);
   }




 else if (VAR_24 == 139 || VAR_24 == VAR_0)
   FUNC_13 (VAR_13, VAR_21, VAR_15, 136, VAR_24, VAR_18);




 else if (VAR_24 == 128 || VAR_24 == 140 || VAR_24 == 138)
   FUNC_13 (VAR_13, VAR_21, 1, 136, VAR_24, VAR_18);





 else if (VAR_23 == 129 && VAR_24 == 129
   && FUNC_5 (VAR_21) < VAR_1
   && (FUNC_11 (VAR_21, VAR_13, 136, 129)
       || FUNC_12 (VAR_21)))
   FUNC_13 (VAR_13, VAR_22,
          FUNC_11 (VAR_21, VAR_13, 136, 129)
          ? 1 : 0,
          136, 129, VAR_18);
 else if (VAR_23 == 129 && VAR_24 == 129
   && FUNC_5 (VAR_22) < VAR_1
   && (FUNC_11 (VAR_22, VAR_13, 136, 129)
       || FUNC_12 (VAR_22)))
   FUNC_13 (VAR_13, VAR_21,
          FUNC_11 (VAR_22, VAR_13, 136, 129)
          ? 1 : 0,
          136, 129, VAR_18);





 else if ((VAR_23 == 129 && FUNC_7 (VAR_21))
   || VAR_24 == VAR_4)
   {
     FUNC_13 (VAR_13, VAR_21, 0, 136, VAR_24, VAR_18);
     FUNC_13 (VAR_13, VAR_22, 1, 136, VAR_23, VAR_18);
   }
 else if ((VAR_24 == 129 && FUNC_7 (VAR_22))
   || VAR_23 == VAR_4)
   {
     FUNC_13 (VAR_13, VAR_21, 1, 136, VAR_24, VAR_18);
     FUNC_13 (VAR_13, VAR_22, 0, 136, VAR_23, VAR_18);
   }




 else
   {
     FUNC_13 (VAR_13, VAR_21, 0, 136, VAR_24, VAR_18 / 2);
     FUNC_13 (VAR_13, VAR_21, 1, 136, VAR_24, VAR_18 / 2);
     FUNC_13 (VAR_13, VAR_22, 0, 136, VAR_23, VAR_18 / 2);
     FUNC_13 (VAR_13, VAR_22, 1, 136, VAR_23, VAR_18 / 2);
   }
      }
      break;




    case 133:
    case 130:
      FUNC_13 (VAR_13, FUNC_9 (VAR_14, 0), 0, VAR_19,
      FUNC_1 (FUNC_9 (FUNC_9 (VAR_14, 1), 1)), 2 * VAR_18);
      if (FUNC_6 (FUNC_9 (FUNC_9 (VAR_14, 1), 1)))
 FUNC_13 (VAR_13, FUNC_9 (FUNC_9 (VAR_14, 1), 1), 1, VAR_19, 129,
        2 * VAR_18);
      break;

    case 134:
    case 131:
    case 135:
    case 132:
      FUNC_13 (VAR_13, FUNC_9 (VAR_14, 0), 0, VAR_19, VAR_7, 2 * VAR_18);
      break;

    case 129:
      {
 struct costs *VAR_25 = &VAR_10[FUNC_5 (VAR_14)];
 int VAR_26;

 VAR_25->mem_cost += (FUNC_4 (VAR_6, VAR_20, 1) * VAR_18) / 2;

 for (VAR_26 = 0; VAR_26 < VAR_5; VAR_26++)
   VAR_25->cost[VAR_26] += (VAR_12[VAR_6][VAR_26][(int) VAR_20] * VAR_18) / 2;
      }
      break;

    default:
      {
 const char *VAR_27 = FUNC_2 (VAR_19);
 int VAR_28;
 for (VAR_28 = FUNC_3 (VAR_19) - 1; VAR_28 >= 0; VAR_28--)
   if (VAR_27[VAR_28] == 'e')
     FUNC_13 (VAR_13, FUNC_9 (VAR_14, VAR_28), VAR_15, VAR_19, VAR_7,
     VAR_18);
      }
    }
}
