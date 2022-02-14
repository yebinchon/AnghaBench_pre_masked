
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elim_table {int can_eliminate; int initial_offset; int offset; } ;
typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;




 int FUNC_0 (int ) ;


 size_t FUNC_1 (int ) ;
 int const FUNC_2 (int ) ;




 int FUNC_3 (int ) ;
 unsigned int VAR_0 ;

 int FUNC_4 (int ) ;

 int VAR_1 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;


 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int,unsigned int) ;
 int FUNC_11 (int ,int) ;
 size_t VAR_2 ;
 int ** VAR_3 ;
 int* VAR_4 ;
 int VAR_5 ;
 int FUNC_12 (int ) ;
 struct elim_table* VAR_6 ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void
FUNC_14 (rtx VAR_7, rtx VAR_8, int VAR_9)
{
  enum rtx_code VAR_10 = FUNC_2 (VAR_7);
  rtx VAR_11;
  unsigned int VAR_12;
  struct elim_table *VAR_13;

  switch (VAR_10)
    {
    case 132:
      if (FUNC_3 (VAR_7))
 return;

      VAR_7 = FUNC_9 (VAR_7, 0);



    case 136:







      if (! VAR_4[FUNC_1 (VAR_7) - VAR_2])
 {
   for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++)
     VAR_3[FUNC_1 (VAR_7) - VAR_2][VAR_12]
       = (VAR_9 ? VAR_6[VAR_12].initial_offset
   : VAR_6[VAR_12].offset);
   VAR_4[FUNC_1 (VAR_7) - VAR_2] = 1;
 }





      else if (VAR_7 == VAR_8
        && (VAR_11 = FUNC_12 (VAR_8)) != 0
        && FUNC_0 (VAR_11))
 FUNC_13 (VAR_8);
      else




 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++)
   if (VAR_3[FUNC_1 (VAR_7) - VAR_2][VAR_12]
       != (VAR_9 ? VAR_6[VAR_12].initial_offset
    : VAR_6[VAR_12].offset))
     VAR_6[VAR_12].can_eliminate = 0;

      return;

    case 133:
      FUNC_14 (FUNC_4 (VAR_8), VAR_8, VAR_9);



    case 134:
    case 137:


      for (VAR_11 = FUNC_5 (VAR_7); VAR_11; VAR_11 = FUNC_9 (VAR_11, 1))
 if (FUNC_6 (VAR_11) == VAR_1)
   FUNC_14 (FUNC_9 (VAR_11, 0), VAR_8, 1);
      return;

    case 131:
    case 138:
    case 139:




      for (VAR_12 = 0; VAR_12 < (unsigned) FUNC_11 (VAR_7, VAR_10 == 139); VAR_12++)
 FUNC_14 (FUNC_10 (VAR_7, VAR_10 == 139, VAR_12),
      VAR_8, VAR_9);
      return;

    case 128:
      if (FUNC_7 (VAR_7) != VAR_5)
 return;

      switch (FUNC_2 (FUNC_8 (VAR_7)))
 {
 case 130:
 case 129:
   return;

 case 132:
   FUNC_14 (FUNC_8 (VAR_7), VAR_8, VAR_9);
   return;

 case 135:
   VAR_11 = FUNC_9 (FUNC_8 (VAR_7), 1);
   if (FUNC_2 (VAR_11) == 132)
     FUNC_14 (FUNC_9 (VAR_11, 0), VAR_8, VAR_9);
   else if (FUNC_2 (VAR_11) != 130 && FUNC_2 (VAR_11) != 129)
     break;

   VAR_11 = FUNC_9 (FUNC_8 (VAR_7), 2);
   if (FUNC_2 (VAR_11) == 132)
     FUNC_14 (FUNC_9 (VAR_11, 0), VAR_8, VAR_9);
   else if (FUNC_2 (VAR_11) != 130 && FUNC_2 (VAR_11) != 129)
     break;
   return;

 default:
   break;
 }



      for (VAR_13 = VAR_6; VAR_13 < &VAR_6[VAR_0]; VAR_13++)
 if (VAR_13->offset != VAR_13->initial_offset)
   VAR_13->can_eliminate = 0;
      break;

    default:
      break;
    }
}
