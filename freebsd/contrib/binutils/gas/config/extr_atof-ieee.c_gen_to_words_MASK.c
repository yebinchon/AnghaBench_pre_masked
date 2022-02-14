
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ low; scalar_t__ leader; char sign; long exponent; } ;
typedef unsigned long LITTLENUM_TYPE ;


 int VAR_0 ;
 long VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 long VAR_3 ;
 TYPE_1__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (unsigned long*) ;
 unsigned long* VAR_7 ;
 int FUNC_4 (unsigned long*,char,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;

int
FUNC_7 (LITTLENUM_TYPE *VAR_8, int VAR_9, long VAR_10)
{
  int VAR_11 = 0;

  long VAR_12;
  long VAR_13;
  long VAR_14;
  long VAR_15;
  int VAR_16;
  LITTLENUM_TYPE VAR_17;
  LITTLENUM_TYPE *VAR_18;
  LITTLENUM_TYPE *VAR_19;

  VAR_19 = VAR_8 + VAR_9;







  if (VAR_4.low > VAR_4.leader)
    {

      if (VAR_4.sign == '+')
 VAR_8[0] = 0x0000;
      else
 VAR_8[0] = 0x8000;
      FUNC_4 (&VAR_8[1], '\0',
       (VAR_19 - VAR_8 - 1) * sizeof (LITTLENUM_TYPE));
      return VAR_11;
    }


  if (VAR_4.sign == 0)
    {
      if (FUNC_0 (VAR_9))
 FUNC_2 ("NaNs are not supported by this target\n");
      if (VAR_9 == VAR_0)
 {
   VAR_8[0] = 0x7fff;
   VAR_8[1] = 0xffff;
 }
      else if (VAR_9 == VAR_2)
 {
   FUNC_1 ();


 }
      else
 {
   VAR_8[0] = 0x7fff;
   VAR_8[1] = 0xffff;
   VAR_8[2] = 0xffff;
   VAR_8[3] = 0xffff;
 }
      return VAR_11;
    }
  else if (VAR_4.sign == 'P')
    {
      if (FUNC_0 (VAR_9))
 FUNC_2 ("Infinities are not supported by this target\n");


      if (VAR_9 == VAR_0)
 {
   VAR_8[0] = 0x7f80;
   VAR_8[1] = 0;
 }
      else if (VAR_9 == VAR_2)
 {
   FUNC_1 ();


 }
      else
 {
   VAR_8[0] = 0x7ff0;
   VAR_8[1] = 0;
   VAR_8[2] = 0;
   VAR_8[3] = 0;
 }
      return VAR_11;
    }
  else if (VAR_4.sign == 'N')
    {
      if (FUNC_0 (VAR_9))
 FUNC_2 ("Infinities are not supported by this target\n");


      if (VAR_9 == VAR_0)
 {
   VAR_8[0] = 0xff80;
   VAR_8[1] = 0x0;
 }
      else if (VAR_9 == VAR_2)
 {
   FUNC_1 ();


 }
      else
 {
   VAR_8[0] = 0xfff0;
   VAR_8[1] = 0x0;
   VAR_8[2] = 0x0;
   VAR_8[3] = 0x0;
 }
      return VAR_11;
    }
  VAR_3 = VAR_1;
  VAR_5 = VAR_4.leader;
  VAR_6 = (1
       + VAR_4.leader
       - VAR_4.low);


  for (VAR_16 = 0; !FUNC_5 (1); ++VAR_16)
 ;;
  VAR_12 = (VAR_4.exponent
  + VAR_4.leader
  + 1
  - VAR_4.low);



  VAR_13 = VAR_12 * VAR_1;


  VAR_14 = VAR_13 - VAR_16;


  VAR_15 = VAR_14 + ((1 << (VAR_10 - 1)) - 2);


  VAR_18 = VAR_8;


  VAR_17 = ((VAR_4.sign == '+')
    ? 0
    : (1 << (VAR_1 - 1)));


  if (VAR_15 <= 0)
    {
      int VAR_20;
      int VAR_21;

      FUNC_6 (1);
      VAR_21 = -VAR_15;
      VAR_20 =
 VAR_1 * VAR_9 - (VAR_10 + 1 + VAR_21);
      if (VAR_21 >= VAR_1 - VAR_10)
 {

   VAR_21 -= (VAR_1 - 1) - VAR_10;
   *VAR_18++ = VAR_17;
   if (VAR_21 + VAR_10 + 1
       > VAR_9 * VAR_1)
     {

       FUNC_3 (VAR_8);
       return VAR_11;
     }




   while (VAR_21 >= VAR_1)
     {
       VAR_21 -= VAR_1;
       *VAR_18++ = 0;
     }
   if (VAR_21)
     *VAR_18++ = FUNC_5 (VAR_1 - (VAR_21));
 }
      else
 {
   if (VAR_9 == VAR_2 && VAR_10 == 15)
     {
       *VAR_18++ = VAR_17;



       *VAR_18++ = FUNC_5 (VAR_1 - VAR_21);
     }
   else
     {
       VAR_17 |= FUNC_5 ((VAR_1 - 1)
      - (VAR_10 + VAR_21));
       *VAR_18++ = VAR_17;
     }
 }
      while (VAR_18 < VAR_19)
 *VAR_18++ = FUNC_5 (VAR_1);


      if (FUNC_5 (1))
 {
   --VAR_18;
   if (VAR_20 >= VAR_1)
     {
       int VAR_22 = 0;
       int VAR_23;

       VAR_22 = 0;
       VAR_23 = VAR_20;
       while (VAR_23 > VAR_1)
  {
    if (VAR_18[VAR_22] != (LITTLENUM_TYPE) - 1)
      break;
    --VAR_22;
    VAR_23 -= VAR_1;
  }
       if (VAR_23 > VAR_1
    || (VAR_18[VAR_22] & VAR_7[VAR_23]) != VAR_7[VAR_23]
    || (VAR_20 != (VAR_9 * VAR_1
        - VAR_10 - 1)
        ))
  {
    unsigned long VAR_24;

    for (VAR_24 = 1; VAR_24 && (VAR_18 >= VAR_8); VAR_18--)
      {
        VAR_24 = *VAR_18 + VAR_24;
        *VAR_18 = VAR_24;
        VAR_24 >>= VAR_1;
      }
  }
       else
  {



    VAR_18 = VAR_8;
    VAR_17 = ((VAR_4.sign == '+')
      ? 0
      : (1 << (VAR_1 - 1)));
    VAR_17 |= (1
       << ((VAR_1 - 1)
    - VAR_10));
    *VAR_18++ = VAR_17;







    while (VAR_18 < VAR_19)
      *VAR_18++ = 0;
  }
     }
   else
     *VAR_18 += 1;
 }

      return VAR_11;
    }
  else if ((unsigned long) VAR_15 > VAR_7[VAR_10]
    || (! FUNC_0 (VAR_9)
        && (unsigned long) VAR_15 == VAR_7[VAR_10]))
    {





      FUNC_3 (VAR_8);
      return VAR_11;
    }
  else
    {
      VAR_17 |= (VAR_15 << ((VAR_1 - 1) - VAR_10))
 | FUNC_5 ((VAR_1 - 1) - VAR_10);
    }

  *VAR_18++ = VAR_17;



  if (VAR_10 == 15 && VAR_9 == VAR_2)
    {



      *VAR_18++ = (1 << (VAR_1 - 1)
        | FUNC_5 (VAR_1 - 1));
    }


  while (VAR_18 < VAR_19)
    *VAR_18++ = FUNC_5 (VAR_1);

  if (FUNC_5 (1))
    {
      unsigned long VAR_25;
      for (VAR_25 = 1, VAR_18--; VAR_25; VAR_18--)
 {
   VAR_25 = *VAR_18 + VAR_25;
   *VAR_18 = VAR_25;
   VAR_25 >>= VAR_1;
   if (VAR_18 == VAR_8)
     break;
 }
      if (VAR_9 == VAR_2 && VAR_10 == 15)
 {


   if (VAR_18 == VAR_8)
     {
       VAR_18[1] |= 1 << (VAR_1 - 1);
     }
 }
      if ((VAR_17 ^ *VAR_8) & (1 << (VAR_1 - 1)))
 {



   *VAR_8 &= ~(1 << (VAR_1 - 1));
 }
    }
  return VAR_11;
}
