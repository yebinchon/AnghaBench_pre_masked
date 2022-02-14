
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;



 scalar_t__ FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_0 ;


 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;

 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;


 scalar_t__ FUNC_11 (scalar_t__,int) ;
 int FUNC_12 (scalar_t__) ;
 unsigned int VAR_1 ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (int) ;
 char* FUNC_16 (int) ;
 int FUNC_17 (int) ;
 scalar_t__ FUNC_18 (scalar_t__) ;


 int FUNC_19 (scalar_t__) ;
 int FUNC_20 (scalar_t__) ;
 int FUNC_21 (scalar_t__) ;
 int VAR_2 ;
 unsigned int FUNC_22 (scalar_t__) ;
 int FUNC_23 (unsigned int) ;
 int FUNC_24 (scalar_t__) ;
 scalar_t__ FUNC_25 (unsigned int) ;
 int VAR_3 ;

 unsigned int FUNC_26 (scalar_t__) ;
 scalar_t__ FUNC_27 (scalar_t__) ;

 unsigned int VAR_4 ;


 int VAR_5 ;
 scalar_t__ FUNC_28 (scalar_t__,int) ;
 scalar_t__ FUNC_29 (scalar_t__,int) ;
 scalar_t__ FUNC_30 (scalar_t__,int) ;
 scalar_t__ FUNC_31 (scalar_t__,int,int) ;
 int FUNC_32 (scalar_t__,int) ;
 scalar_t__ VAR_6 ;
 int * VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_33 () ;
 int * VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned int FUNC_34 (scalar_t__) ;
 scalar_t__ VAR_11 ;
 unsigned int FUNC_35 (int ) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;

unsigned
FUNC_36 (rtx VAR_14, enum machine_mode VAR_15, int *VAR_16,
   int *VAR_17, bool VAR_18)
{
  int VAR_19, VAR_20;
  unsigned VAR_21 = 0;
  enum rtx_code VAR_22;
  const char *VAR_23;




 repeat:
  if (VAR_14 == 0)
    return VAR_21;

  VAR_22 = FUNC_13 (VAR_14);
  switch (VAR_22)
    {
    case 132:
      {
 unsigned int VAR_24 = FUNC_22 (VAR_14);

 if (!VAR_12)
   {
     bool VAR_25;

     if (VAR_24 >= VAR_1)
       VAR_25 = 1;
     else if (VAR_14 == VAR_8
       || VAR_14 == VAR_10
       || VAR_14 == VAR_6
       || VAR_14 == VAR_13
       || VAR_14 == VAR_11)
       VAR_25 = 1;
     else if (VAR_9[VAR_24])
       VAR_25 = 0;
     else if (VAR_7[VAR_24])
       VAR_25 = 1;
     else if (FUNC_15 (FUNC_14 (VAR_14)) == VAR_2)
       VAR_25 = 1;
     else if (VAR_3)
       VAR_25 = 0;
     else if (FUNC_6 (FUNC_23 (VAR_24)))
       VAR_25 = 0;
     else
       VAR_25 = 1;

     if (!VAR_25)
       {
  *VAR_16 = 1;
  return 0;
       }
   }

 VAR_21 += ((unsigned int) 132 << 7);
        VAR_21 += (VAR_18 ? (unsigned) FUNC_25 (VAR_24) : VAR_24);
 return VAR_21;
      }




    case 131:
      {
 if (FUNC_24 (FUNC_27 (VAR_14)))
   {
     VAR_21 += (((unsigned int) 131 << 7)
       + FUNC_22 (FUNC_27 (VAR_14))
       + (FUNC_26 (VAR_14) / VAR_4));
     return VAR_21;
   }
 break;
      }

    case 143:
      VAR_21 += (((unsigned int) 143 << 7) + (unsigned int) VAR_15
               + (unsigned int) FUNC_18 (VAR_14));
      return VAR_21;

    case 144:


      VAR_21 += (unsigned int) VAR_22 + (unsigned int) FUNC_14 (VAR_14);
      if (FUNC_14 (VAR_14) != VAR_5)
 VAR_21 += FUNC_35 (FUNC_10 (VAR_14));
      else
 VAR_21 += ((unsigned int) FUNC_9 (VAR_14)
   + (unsigned int) FUNC_8 (VAR_14));
      return VAR_21;

    case 142:
      {
 int VAR_26;
 rtx VAR_27;

 VAR_26 = FUNC_12 (VAR_14);

 for (VAR_19 = 0; VAR_19 < VAR_26; ++VAR_19)
   {
     VAR_27 = FUNC_11 (VAR_14, VAR_19);
     VAR_21 += FUNC_36 (VAR_27, FUNC_14 (VAR_27), VAR_16,
         VAR_17, VAR_18);
   }

 return VAR_21;
      }


    case 141:


  VAR_21 += (((unsigned int) 141 << 7)
    + FUNC_7 (FUNC_28 (VAR_14, 0)));
      return VAR_21;

    case 130:
      {





 unsigned int VAR_28 = 0;
 const unsigned char *VAR_29 = (const unsigned char *) FUNC_30 (VAR_14, 0);

 while (*VAR_29)
   VAR_28 += (VAR_28 << 7) + *VAR_29++;

 VAR_21 += ((unsigned int) 130 << 7) + VAR_28;
 return VAR_21;
      }

    case 140:


      if (FUNC_21 (VAR_14) || FUNC_14 (VAR_14) == VAR_0)
 {
   *VAR_16 = 1;
   return 0;
 }
      if (VAR_17 && !FUNC_20 (VAR_14))
 *VAR_17 = 1;



      VAR_21 += (unsigned) 140;
      VAR_14 = FUNC_28 (VAR_14, 0);
      goto repeat;

    case 128:





      if (FUNC_19 (FUNC_28 (VAR_14, 0))
   && ! FUNC_21 (FUNC_28 (VAR_14, 0)))
 {
   VAR_21 += (unsigned) 128;
   VAR_14 = FUNC_28 (VAR_14, 0);

   if (VAR_17 && !FUNC_20 (VAR_14))
     *VAR_17 = 1;



   VAR_21 += (unsigned) 140;
   VAR_14 = FUNC_28 (VAR_14, 0);
   goto repeat;
 }
      break;

    case 135:
    case 134:
    case 138:
    case 137:
    case 133:
    case 136:
    case 139:
    case 145:
    case 146:
    case 129:
      *VAR_16 = 1;
      return 0;

    case 147:
      if (FUNC_21 (VAR_14))
 {
   *VAR_16 = 1;
   return 0;
 }
      else
 {

   VAR_21 += (unsigned) VAR_22 + (unsigned) FUNC_14 (VAR_14)
     + FUNC_34 (FUNC_5 (VAR_14))
     + FUNC_34 (FUNC_3 (VAR_14))
     + (unsigned) FUNC_4 (VAR_14);

   if (FUNC_2 (VAR_14))
     {
       for (VAR_19 = 1; VAR_19 < FUNC_2 (VAR_14); VAR_19++)
  {
    VAR_21 += (FUNC_36 (FUNC_0 (VAR_14, VAR_19),
         FUNC_14 (FUNC_0 (VAR_14, VAR_19)),
         VAR_16, VAR_17,
         VAR_18)
      + FUNC_34
    (FUNC_1 (VAR_14, VAR_19)));
  }

       VAR_21 += FUNC_34 (FUNC_1 (VAR_14, 0));
       VAR_14 = FUNC_0 (VAR_14, 0);
       VAR_15 = FUNC_14 (VAR_14);
       goto repeat;
     }

   return VAR_21;
 }
      break;

    default:
      break;
    }

  VAR_19 = FUNC_17 (VAR_22) - 1;
  VAR_21 += (unsigned) VAR_22 + (unsigned) FUNC_14 (VAR_14);
  VAR_23 = FUNC_16 (VAR_22);
  for (; VAR_19 >= 0; VAR_19--)
    {
      switch (VAR_23[VAR_19])
 {
 case 'e':



   if (VAR_19 == 0)
     {
       VAR_14 = FUNC_28 (VAR_14, VAR_19);
       goto repeat;
     }

   VAR_21 += FUNC_36 (FUNC_28 (VAR_14, VAR_19), 0, VAR_16,
       VAR_17, VAR_18);
   break;

 case 'E':
   for (VAR_20 = 0; VAR_20 < FUNC_32 (VAR_14, VAR_19); VAR_20++)
     VAR_21 += FUNC_36 (FUNC_31 (VAR_14, VAR_19, VAR_20), 0, VAR_16,
         VAR_17, VAR_18);
   break;

 case 's':
   VAR_21 += FUNC_34 (FUNC_30 (VAR_14, VAR_19));
   break;

 case 'i':
   VAR_21 += (unsigned int) FUNC_29 (VAR_14, VAR_19);
   break;

 case '0': case 't':

   break;

 default:
   FUNC_33 ();
 }
    }

  return VAR_21;
}
