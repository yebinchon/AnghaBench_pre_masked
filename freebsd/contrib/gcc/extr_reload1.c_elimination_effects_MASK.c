
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elim_table {int ref_outside_mem; int offset; int can_eliminate; int to_rtx; int from_rtx; } ;
typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
 int FUNC_0 (int ) ;





 int VAR_0 ;




 int const FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;



 size_t VAR_1 ;


 int const VAR_2 ;







 int FUNC_7 (int) ;

 size_t FUNC_8 (int ) ;
 int FUNC_9 (int ) ;


 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;




 int FUNC_12 (int ) ;





 int FUNC_13 (int ,int) ;
 int FUNC_14 (int ,int,int) ;
 int FUNC_15 (int ,int) ;

 int FUNC_16 (int ) ;
 int VAR_3 ;
 struct elim_table* VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_17 (rtx VAR_9, enum machine_mode VAR_10)
{
  enum rtx_code VAR_11 = FUNC_1 (VAR_9);
  struct elim_table *VAR_12;
  int VAR_13;
  int VAR_14, VAR_15;
  const char *VAR_16;

  switch (VAR_11)
    {
    case 160:
    case 161:
    case 159:
    case 162:
    case 133:
    case 163:
    case 148:
    case 166:
    case 168:
    case 169:
    case 170:
    case 139:
      return;

    case 140:
      VAR_13 = FUNC_8 (VAR_9);



      if (VAR_13 < VAR_0)
 {
   for (VAR_12 = VAR_4; VAR_12 < &VAR_4[VAR_1];
        VAR_12++)
     if (VAR_12->from_rtx == VAR_9 && VAR_12->can_eliminate)
       {
  if (! VAR_10)
    VAR_12->ref_outside_mem = 1;
  return;
       }

 }
      else if (VAR_7[VAR_13] < 0 && VAR_5
        && VAR_5[VAR_13]
        && ! FUNC_16 (VAR_5[VAR_13]))
 FUNC_17 (VAR_5[VAR_13], VAR_10);
      return;

    case 142:
    case 145:
    case 143:
    case 146:
    case 144:
    case 141:
      for (VAR_12 = VAR_4; VAR_12 < &VAR_4[VAR_1]; VAR_12++)
 if (VAR_12->to_rtx == FUNC_13 (VAR_9, 0))
   {
     int VAR_17 = FUNC_3 (VAR_10);






     if (VAR_11 == 143 || VAR_11 == 146)
       VAR_12->offset += VAR_17;
     else if (VAR_11 == 142 || VAR_11 == 145)
       VAR_12->offset -= VAR_17;
     else if ((VAR_11 == 141 || VAR_11 == 144)
       && FUNC_1 (FUNC_13 (VAR_9, 1)) == VAR_2
       && FUNC_13 (VAR_9, 0) == FUNC_13 (FUNC_13 (VAR_9, 1), 0)
       && FUNC_0 (FUNC_13 (FUNC_13 (VAR_9, 1), 1)))
       VAR_12->offset -= FUNC_6 (FUNC_13 (FUNC_13 (VAR_9, 1), 1));
   }


      if (VAR_11 == 144 || VAR_11 == 141)
 break;


    case 135:
    case 151: case 150:
    case 137: case 128:
    case 132: case 154: case 153:
    case 155: case 156:
    case 131: case 130:
    case 171:
    case 136:
    case 157:
    case 164:
    case 158:
    case 147:
    case 149:
    case 167:
      FUNC_17 (FUNC_13 (VAR_9, 0), VAR_10);
      return;

    case 134:
      if (FUNC_9 (FUNC_12 (VAR_9))
   && (FUNC_3 (FUNC_2 (VAR_9))
       <= FUNC_3 (FUNC_2 (FUNC_12 (VAR_9))))
   && VAR_6 != 0
   && VAR_6[FUNC_8 (FUNC_12 (VAR_9))] != 0)
 return;

      FUNC_17 (FUNC_12 (VAR_9), VAR_10);
      return;

    case 129:



      for (VAR_12 = VAR_4; VAR_12 < &VAR_4[VAR_1]; VAR_12++)
 if (VAR_12->from_rtx == FUNC_13 (VAR_9, 0))
   VAR_12->can_eliminate = 0;

      FUNC_17 (FUNC_13 (VAR_9, 0), VAR_10);
      return;

    case 165:



      for (VAR_12 = VAR_4; VAR_12 < &VAR_4[VAR_1]; VAR_12++)
 if (VAR_12->to_rtx == FUNC_13 (VAR_9, 0))
   VAR_12->can_eliminate = 0;

      FUNC_17 (FUNC_13 (VAR_9, 0), VAR_10);
      return;

    case 138:

      if (FUNC_9 (FUNC_10 (VAR_9)))
 {
   for (VAR_12 = VAR_4; VAR_12 < &VAR_4[VAR_1];
        VAR_12++)
     if (VAR_12->to_rtx == FUNC_10 (VAR_9)
  && FUNC_10 (VAR_9) != VAR_3)
       {


  rtx VAR_18 = FUNC_11 (VAR_9);

  if (FUNC_1 (VAR_18) == VAR_2
      && FUNC_13 (VAR_18, 0) == FUNC_10 (VAR_9)
      && FUNC_1 (FUNC_13 (VAR_18, 1)) == 160)
    VAR_12->offset -= FUNC_6 (FUNC_13 (VAR_18, 1));
  else
    VAR_12->can_eliminate = 0;
       }
 }

      FUNC_17 (FUNC_10 (VAR_9), 0);
      FUNC_17 (FUNC_11 (VAR_9), 0);
      return;

    case 152:


      FUNC_17 (FUNC_13 (VAR_9, 0), FUNC_2 (VAR_9));
      return;

    default:
      break;
    }

  VAR_16 = FUNC_4 (VAR_11);
  for (VAR_14 = 0; VAR_14 < FUNC_5 (VAR_11); VAR_14++, VAR_16++)
    {
      if (*VAR_16 == 'e')
 FUNC_17 (FUNC_13 (VAR_9, VAR_14), VAR_10);
      else if (*VAR_16 == 'E')
 for (VAR_15 = 0; VAR_15 < FUNC_15 (VAR_9, VAR_14); VAR_15++)
   FUNC_17 (FUNC_14 (VAR_9, VAR_14, VAR_15), VAR_10);
    }
}
