
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resources {int cc; int memory; int volatil; int regs; int unch_memory; } ;
typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum mark_resource_type { ____Placeholder_mark_resource_type } mark_resource_type ;




 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;

 int VAR_0 ;

 int FUNC_2 (int ) ;







 unsigned int VAR_1 ;
 int FUNC_3 (int ) ;
 size_t FUNC_4 (int ) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (int) ;

 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;


 int VAR_2 ;
 int VAR_3 ;

 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

 int FUNC_12 (int ) ;
 unsigned int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int VAR_4 ;


 int FUNC_15 (int ) ;
 int FUNC_16 (int ,unsigned int) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;


 int FUNC_19 (int ) ;




 int FUNC_20 (int ,int) ;
 int FUNC_21 (int ,int,int) ;
 int FUNC_22 (int ,int) ;

 int * VAR_5 ;
 int FUNC_23 (int ,int ,int *) ;
 int FUNC_24 (int) ;
 int * VAR_6 ;
 int ** VAR_7 ;
 unsigned int FUNC_25 (int ) ;

void
FUNC_26 (rtx VAR_8, struct resources *VAR_9, int VAR_10,
      enum mark_resource_type VAR_11)
{
  enum rtx_code VAR_12;
  int VAR_13, VAR_14;
  unsigned int VAR_15;
  const char *VAR_16;

 restart:

  VAR_12 = FUNC_3 (VAR_8);

  switch (VAR_12)
    {
    case 145:
    case 158:
    case 154:
    case 129:
    case 151:
    case 152:
    case 150:
    case 147:
    case 132:
    case 153:
    case 144:

      return;

    case 156:
      if (VAR_10)
 VAR_9->cc = 1;
      return;

    case 157:




      if (VAR_11 == VAR_3)
 {
   rtx VAR_17;

   VAR_9->cc = VAR_9->memory = 1;
   for (VAR_15 = 0; VAR_15 < VAR_1; VAR_15++)
     if (VAR_5[VAR_15] || VAR_6[VAR_15])
       FUNC_16 (VAR_9->regs, VAR_15);

   for (VAR_17 = FUNC_2 (VAR_8);
        VAR_17; VAR_17 = FUNC_20 (VAR_17, 1))
     if (FUNC_3 (FUNC_20 (VAR_17, 0)) == 155)
       FUNC_26 (FUNC_15 (FUNC_20 (VAR_17, 0)), VAR_9, 1,
      VAR_2);



   if (FUNC_23 (VAR_8, VAR_4, ((void*)0)))
     FUNC_17 (VAR_9->regs);
 }



    case 148:
    case 149:
      VAR_8 = FUNC_12 (VAR_8);
      if (FUNC_3 (VAR_8) != 129 && FUNC_3 (VAR_8) != 155)
 goto restart;
      return;

    case 135:




      FUNC_26 (FUNC_15 (VAR_8), VAR_9,
     (VAR_11 == VAR_3
      || FUNC_3 (FUNC_18 (VAR_8)) != VAR_0),
     VAR_11);

      FUNC_26 (FUNC_18 (VAR_8), VAR_9, 0, VAR_2);
      return;

    case 155:
      FUNC_26 (FUNC_20 (VAR_8, 0), VAR_9, 1, VAR_2);
      return;

    case 136:
      for (VAR_13 = 0; VAR_13 < FUNC_22 (VAR_8, 0); VAR_13++)
 if (! (FUNC_7 (FUNC_21 (VAR_8, 0, 0))
        && FUNC_8 (FUNC_21 (VAR_8, 0, VAR_13))))
   FUNC_26 (FUNC_21 (VAR_8, 0, VAR_13), VAR_9, 0, VAR_11);
      return;

    case 142:
    case 139:
    case 143:
    case 140:
      FUNC_26 (FUNC_20 (VAR_8, 0), VAR_9, 1, VAR_2);
      return;

    case 138:
    case 141:
      FUNC_26 (FUNC_20 (VAR_8, 0), VAR_9, 1, VAR_2);
      FUNC_26 (FUNC_20 (FUNC_20 (VAR_8, 1), 0), VAR_9, 0, VAR_2);
      FUNC_26 (FUNC_20 (FUNC_20 (VAR_8, 1), 1), VAR_9, 0, VAR_2);
      return;

    case 134:
    case 128:
      FUNC_26 (FUNC_20 (VAR_8, 0), VAR_9, VAR_10, VAR_2);
      FUNC_26 (FUNC_20 (VAR_8, 1), VAR_9, 0, VAR_2);
      FUNC_26 (FUNC_20 (VAR_8, 2), VAR_9, 0, VAR_2);
      return;

    case 146:
      if (VAR_10)
 {
   VAR_9->memory = 1;
   VAR_9->unch_memory |= FUNC_10 (VAR_8);
   VAR_9->volatil |= FUNC_11 (VAR_8);
 }

      FUNC_26 (FUNC_20 (VAR_8, 0), VAR_9, 0, VAR_2);
      return;

    case 133:
      if (VAR_10)
 {
   if (!FUNC_14 (FUNC_19 (VAR_8)))
     FUNC_26 (FUNC_19 (VAR_8), VAR_9, VAR_10, VAR_11);
   else
     {
       unsigned int VAR_18 = FUNC_25 (VAR_8);
       unsigned int VAR_19
  = VAR_18 + VAR_7[VAR_18][FUNC_4 (VAR_8)];

       FUNC_24 (VAR_19 <= VAR_1);
       for (VAR_15 = VAR_18; VAR_15 < VAR_19; VAR_15++)
  FUNC_16 (VAR_9->regs, VAR_15);
     }
 }
      return;

    case 137:
      if (VAR_10)
 {
   unsigned int VAR_20 = FUNC_13 (VAR_8);
   unsigned int VAR_21
     = VAR_20 + VAR_7[VAR_20][FUNC_4 (VAR_8)];

   FUNC_24 (VAR_21 <= VAR_1);
   for (VAR_15 = VAR_20; VAR_15 < VAR_21; VAR_15++)
     FUNC_16 (VAR_9->regs, VAR_15);
 }
      return;

    case 130:
    case 160:

      VAR_9->volatil = 1;
      return;

    case 131:
      VAR_9->volatil = 1;
      break;

    case 159:
      VAR_9->volatil |= FUNC_11 (VAR_8);






      for (VAR_13 = 0; VAR_13 < FUNC_1 (VAR_8); VAR_13++)
 FUNC_26 (FUNC_0 (VAR_8, VAR_13), VAR_9, VAR_10,
       VAR_2);
      return;

    default:
      break;
    }


  VAR_16 = FUNC_5 (VAR_12);
  for (VAR_13 = 0; VAR_13 < FUNC_6 (VAR_12); VAR_13++)
    switch (*VAR_16++)
      {
      case 'e':
 FUNC_26 (FUNC_20 (VAR_8, VAR_13), VAR_9, VAR_10, VAR_11);
 break;

      case 'E':
 for (VAR_14 = 0; VAR_14 < FUNC_22 (VAR_8, VAR_13); VAR_14++)
   FUNC_26 (FUNC_21 (VAR_8, VAR_13, VAR_14), VAR_9, VAR_10, VAR_11);
 break;
      }
}
