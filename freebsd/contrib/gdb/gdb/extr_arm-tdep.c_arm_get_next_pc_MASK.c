
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 unsigned long VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,unsigned long) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned long,int) ;
 int FUNC_4 (unsigned long) ;
 unsigned long FUNC_5 (unsigned long,int,int) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,char*) ;
 int VAR_3 ;
 unsigned long FUNC_9 (scalar_t__,int) ;
 unsigned long FUNC_10 (unsigned long) ;
 unsigned long FUNC_11 (unsigned long,int,unsigned long,unsigned long) ;
 scalar_t__ FUNC_12 (scalar_t__) ;

CORE_ADDR
FUNC_13 (CORE_ADDR VAR_4)
{
  unsigned long VAR_5;
  unsigned long VAR_6;
  unsigned long VAR_7;
  CORE_ADDR VAR_8;

  if (FUNC_2 (VAR_4))
    return FUNC_12 (VAR_4);

  VAR_5 = (unsigned long) VAR_4;
  VAR_6 = FUNC_9 (VAR_4, 4);
  VAR_7 = FUNC_10 (VAR_0);
  VAR_8 = (CORE_ADDR) (VAR_5 + 4);

  if (FUNC_6 (FUNC_5 (VAR_6, 28, 31), VAR_7))
    {
      switch (FUNC_5 (VAR_6, 24, 27))
 {
 case 0x0:
 case 0x1:
 case 0x2:
 case 0x3:
   {
     unsigned long VAR_9, VAR_10, VAR_11 = 0;
     unsigned long VAR_12;
     int VAR_13;

     if (FUNC_5 (VAR_6, 12, 15) != 15)
       break;

     if (FUNC_5 (VAR_6, 22, 25) == 0
  && FUNC_5 (VAR_6, 4, 7) == 9)
       FUNC_7 ("Illegal update to pc in instruction");


     if (FUNC_5 (VAR_6, 4, 28) == 0x12fff1
  || FUNC_5 (VAR_6, 4, 28) == 0x12fff3)
       {
  VAR_12 = FUNC_5 (VAR_6, 0, 3);
  VAR_11 = (VAR_12 == 15) ? VAR_5 + 8 : FUNC_10 (VAR_12);
  VAR_8 = (CORE_ADDR) FUNC_0 (VAR_11);

  if (VAR_8 == VAR_4)
    FUNC_7 ("Infinite loop detected");

  return VAR_8;
       }


     VAR_13 = (VAR_7 & VAR_1) ? 1 : 0;
     VAR_12 = FUNC_5 (VAR_6, 16, 19);
     VAR_9 = (VAR_12 == 15) ? VAR_5 + 8 : FUNC_10 (VAR_12);

     if (FUNC_3 (VAR_6, 25))
       {
  unsigned long VAR_14 = FUNC_5 (VAR_6, 0, 7);
  unsigned long VAR_15 = 2 * FUNC_5 (VAR_6, 8, 11);
  VAR_10 = ((VAR_14 >> VAR_15) | (VAR_14 << (32 - VAR_15)))
    & 0xffffffff;
       }
     else
       VAR_10 = FUNC_11 (VAR_6, VAR_13, VAR_5, VAR_7);

     switch (FUNC_5 (VAR_6, 21, 24))
       {
       case 0x0:
  VAR_11 = VAR_9 & VAR_10;
  break;

       case 0x1:
  VAR_11 = VAR_9 ^ VAR_10;
  break;

       case 0x2:
  VAR_11 = VAR_9 - VAR_10;
  break;

       case 0x3:
  VAR_11 = VAR_10 - VAR_9;
  break;

       case 0x4:
  VAR_11 = VAR_9 + VAR_10;
  break;

       case 0x5:
  VAR_11 = VAR_9 + VAR_10 + VAR_13;
  break;

       case 0x6:
  VAR_11 = VAR_9 - VAR_10 + VAR_13;
  break;

       case 0x7:
  VAR_11 = VAR_10 - VAR_9 + VAR_13;
  break;

       case 0x8:
       case 0x9:
       case 0xa:
       case 0xb:
  VAR_11 = (unsigned long) VAR_8;
  break;

       case 0xc:
  VAR_11 = VAR_9 | VAR_10;
  break;

       case 0xd:

  VAR_11 = VAR_10;
  break;

       case 0xe:
  VAR_11 = VAR_9 & ~VAR_10;
  break;

       case 0xf:
  VAR_11 = ~VAR_10;
  break;
       }
     VAR_8 = (CORE_ADDR) FUNC_0 (VAR_11);

     if (VAR_8 == VAR_4)
       FUNC_7 ("Infinite loop detected");
     break;
   }

 case 0x4:
 case 0x5:
 case 0x6:
 case 0x7:
   if (FUNC_3 (VAR_6, 20))
     {

       if (FUNC_5 (VAR_6, 12, 15) == 15)
  {

    unsigned long VAR_16;
    unsigned long VAR_17;

    if (FUNC_3 (VAR_6, 22))
      FUNC_7 ("Illegal update to pc in instruction");


    VAR_16 = FUNC_5 (VAR_6, 16, 19);
    VAR_17 = (VAR_16 == 15) ? VAR_5 + 8 : FUNC_10 (VAR_16);
    if (FUNC_3 (VAR_6, 24))
      {

        int VAR_18 = (VAR_7 & VAR_1) ? 1 : 0;
        unsigned long VAR_19 =
        (FUNC_3 (VAR_6, 25)
         ? FUNC_11 (VAR_6, VAR_18, VAR_5, VAR_7)
         : FUNC_5 (VAR_6, 0, 11));

        if (FUNC_3 (VAR_6, 23))
   VAR_17 += VAR_19;
        else
   VAR_17 -= VAR_19;
      }
    VAR_8 = (CORE_ADDR) FUNC_9 ((CORE_ADDR) VAR_17,
           4);

    VAR_8 = FUNC_0 (VAR_8);

    if (VAR_8 == VAR_4)
      FUNC_7 ("Infinite loop detected");
  }
     }
   break;

 case 0x8:
 case 0x9:
   if (FUNC_3 (VAR_6, 20))
     {

       if (FUNC_3 (VAR_6, 15))
  {

    int VAR_20 = 0;

    if (FUNC_3 (VAR_6, 23))
      {

        unsigned long VAR_21 = FUNC_5 (VAR_6, 0, 14);
        VAR_20 = FUNC_4 (VAR_21) * 4;
        if (FUNC_3 (VAR_6, 24))
   VAR_20 += 4;
      }
    else if (FUNC_3 (VAR_6, 24))
      VAR_20 = -4;

    {
      unsigned long VAR_22 =
      FUNC_10 (FUNC_5 (VAR_6, 16, 19));
      VAR_8 =
        (CORE_ADDR) FUNC_9 ((CORE_ADDR) (VAR_22
          + VAR_20),
             4);
    }
    VAR_8 = FUNC_0 (VAR_8);
    if (VAR_8 == VAR_4)
      FUNC_7 ("Infinite loop detected");
  }
     }
   break;

 case 0xb:
 case 0xa:
   {
     VAR_8 = FUNC_1 (VAR_4, VAR_6);


     if (FUNC_5 (VAR_6, 28, 31) == VAR_2)
       VAR_8 |= FUNC_3 (VAR_6, 24) << 1;

     VAR_8 = FUNC_0 (VAR_8);
     if (VAR_8 == VAR_4)
       FUNC_7 ("Infinite loop detected");
     break;
   }

 case 0xc:
 case 0xd:
 case 0xe:
 case 0xf:
   break;

 default:
   FUNC_8 (VAR_3, "Bad bit-field extraction\n");
   return (VAR_4);
 }
    }

  return VAR_8;
}
