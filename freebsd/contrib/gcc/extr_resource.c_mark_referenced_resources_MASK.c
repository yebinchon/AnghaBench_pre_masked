
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resources {int unch_memory; int memory; int volatil; int cc; int regs; } ;
typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;




 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;


 int FUNC_2 (int ) ;






 unsigned int VAR_0 ;
 int VAR_1 ;
 int const FUNC_3 (int ) ;
 size_t FUNC_4 (int ) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_2 ;

 int FUNC_7 (int ) ;



 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

 int FUNC_13 (int ) ;

 unsigned int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int VAR_3 ;
 int const VAR_4 ;

 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int VAR_5 ;
 int const VAR_6 ;

 int FUNC_20 (int ) ;



 int const VAR_7 ;
 int FUNC_21 (int ,int) ;
 int FUNC_22 (int ,int,int) ;
 int FUNC_23 (int ,int) ;
 int const VAR_8 ;
 int FUNC_24 (int ,int ,int *) ;
 int VAR_9 ;
 int FUNC_25 (int) ;
 int * VAR_10 ;
 int ** VAR_11 ;
 int FUNC_26 (int ,int ) ;
 unsigned int FUNC_27 (int ) ;

void
FUNC_28 (rtx VAR_12, struct resources *VAR_13,
      int VAR_14)
{
  enum rtx_code VAR_15 = FUNC_3 (VAR_12);
  int VAR_16, VAR_17;
  unsigned int VAR_18;
  const char *VAR_19;



  switch (VAR_15)
    {
    case 142:
    case 140:
    case 141:
    case 139:
    case 134:
    case 130:
    case 136:
      return;

    case 131:
      if (!FUNC_15 (FUNC_20 (VAR_12)))
 FUNC_28 (FUNC_20 (VAR_12), VAR_13, 0);
      else
 {
   unsigned int VAR_20 = FUNC_27 (VAR_12);
   unsigned int VAR_21
     = VAR_20 + VAR_11[VAR_20][FUNC_4 (VAR_12)];

   FUNC_25 (VAR_21 <= VAR_0);
   for (VAR_18 = VAR_20; VAR_18 < VAR_21; VAR_18++)
     FUNC_17 (VAR_13->regs, VAR_18);
 }
      return;

    case 133:
 {
   unsigned int VAR_22 = FUNC_14 (VAR_12);
   unsigned int VAR_23
     = VAR_22 + VAR_11[VAR_22][FUNC_4 (VAR_12)];

   FUNC_25 (VAR_23 <= VAR_0);
   for (VAR_18 = VAR_22; VAR_18 < VAR_23; VAR_18++)
     FUNC_17 (VAR_13->regs, VAR_18);
 }
      return;

    case 135:


      if (FUNC_9 (VAR_12))
 VAR_13->unch_memory = 1;
      else
 VAR_13->memory = 1;
      VAR_13->volatil |= FUNC_10 (VAR_12);


      FUNC_28 (FUNC_21 (VAR_12, 0), VAR_13, 0);
      return;

    case 144:
      VAR_13->cc = 1;
      return;

    case 128:
    case 148:

      VAR_13->volatil = 1;
      return;

    case 129:
      VAR_13->volatil = 1;
      break;

    case 147:
      VAR_13->volatil |= FUNC_10 (VAR_12);






      for (VAR_16 = 0; VAR_16 < FUNC_1 (VAR_12); VAR_16++)
 FUNC_28 (FUNC_0 (VAR_12, VAR_16), VAR_13, 0);
      return;

    case 146:


      FUNC_28 (FUNC_21 (FUNC_21 (VAR_12, 0), 0), VAR_13, 0);
      FUNC_28 (FUNC_21 (VAR_12, 1), VAR_13, 0);
      return;

    case 132:




      FUNC_28 (FUNC_19 (VAR_12), VAR_13, 0);

      VAR_12 = FUNC_16 (VAR_12);
      if (FUNC_3 (VAR_12) == VAR_8
   || FUNC_3 (VAR_12) == VAR_6)
 FUNC_28 (VAR_12, VAR_13, 0);
      else if (FUNC_3 (VAR_12) == 131)
 VAR_12 = FUNC_20 (VAR_12);
      if (FUNC_8 (VAR_12))
 FUNC_28 (FUNC_21 (VAR_12, 0), VAR_13, 0);
      return;

    case 143:
      return;

    case 145:
      if (VAR_14)
 {







   rtx VAR_24 = FUNC_13 (VAR_12);
   rtx VAR_25 = 0;
   int VAR_26 = 0;
   int VAR_27;


   if (FUNC_11 (VAR_24) != VAR_12)
     {
       VAR_25 = FUNC_12 (FUNC_11 (VAR_24));
       VAR_26 = FUNC_23 (VAR_25, 0);
       FUNC_25 (FUNC_3 (VAR_25) == VAR_4);
     }

   VAR_13->memory = 1;
   FUNC_17 (VAR_13->regs, VAR_5);
   if (VAR_9)
     {
       FUNC_17 (VAR_13->regs, VAR_1);



     }

   for (VAR_27 = 0; VAR_27 < VAR_0; VAR_27++)
     if (VAR_10[VAR_27])
       FUNC_17 (VAR_13->regs, VAR_27);
   if (FUNC_24 (VAR_12, VAR_3, ((void*)0)))
     FUNC_18 (VAR_13->regs);

   {
     rtx VAR_28;

     for (VAR_28 = FUNC_2 (VAR_12);
   VAR_28;
   VAR_28 = FUNC_21 (VAR_28, 1))
       if (FUNC_3 (FUNC_21 (VAR_28, 0)) == VAR_7)
  {
    for (VAR_27 = 1; VAR_27 < VAR_26; VAR_27++)
      {
        rtx VAR_29 = FUNC_12 (FUNC_22 (VAR_25, 0, VAR_27));
        if (FUNC_3 (VAR_29) == 132
     && FUNC_26 (FUNC_16 (VAR_29),
       FUNC_21 (FUNC_21 (VAR_28, 0), 0)))
   break;
      }
    if (VAR_27 >= VAR_26)
      FUNC_28 (FUNC_21 (FUNC_21 (VAR_28, 0), 0),
            VAR_13, 0);
  }
   }
 }



    case 138:
    case 137:
      FUNC_28 (FUNC_12 (VAR_12), VAR_13, VAR_14);
      return;

    default:
      break;
    }


  VAR_19 = FUNC_5 (VAR_15);
  for (VAR_16 = 0; VAR_16 < FUNC_6 (VAR_15); VAR_16++)
    switch (*VAR_19++)
      {
      case 'e':
 FUNC_28 (FUNC_21 (VAR_12, VAR_16), VAR_13, VAR_14);
 break;

      case 'E':
 for (VAR_17 = 0; VAR_17 < FUNC_23 (VAR_12, VAR_16); VAR_17++)
   FUNC_28 (FUNC_22 (VAR_12, VAR_16, VAR_17), VAR_13,
         VAR_14);
 break;
      }
}
