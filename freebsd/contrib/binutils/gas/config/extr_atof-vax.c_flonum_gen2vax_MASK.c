
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ low; scalar_t__ leader; char sign; long exponent; } ;
typedef unsigned long LITTLENUM_TYPE ;
typedef TYPE_1__ FLONUM_TYPE ;


 long VAR_0 ;
 long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (unsigned long*) ;
 long* VAR_4 ;
 int FUNC_1 (unsigned long*,char,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int*,long*) ;

int
FUNC_4 (int VAR_5,
  FLONUM_TYPE *VAR_6,
  LITTLENUM_TYPE *VAR_7)
{
  LITTLENUM_TYPE *VAR_8;
  int VAR_9;
  long VAR_10;
  int VAR_11;

  VAR_11 = FUNC_3 (VAR_5, &VAR_9, &VAR_10);

  if (VAR_11 != 0)
    FUNC_0 (VAR_7);

  else
    {
      if (VAR_6->low > VAR_6->leader)

 FUNC_1 (VAR_7, '\0', sizeof (LITTLENUM_TYPE) * VAR_9);

      else
 {
   long VAR_12;
   long VAR_13;
   long VAR_14;
   long VAR_15;
   int VAR_16;
   LITTLENUM_TYPE VAR_17;


   if (VAR_6->sign != '-' && VAR_6->sign != '+')
     {
       FUNC_0 (VAR_7);
       return VAR_11;
     }
   VAR_1 = VAR_0;
   VAR_3 = VAR_6->leader;
   VAR_2 = VAR_6->low;

   for (VAR_16 = 0;
        !FUNC_2 (1);
        VAR_16++);;

   VAR_12 = VAR_6->exponent + VAR_6->leader + 1 - VAR_6->low;

   VAR_13 = VAR_12 * VAR_0;

   VAR_14 = VAR_13 - VAR_16;

   VAR_15 = VAR_14 + (1 << (VAR_10 - 1));


   if (VAR_15 & ~VAR_4[VAR_10])
     {

       FUNC_0 (VAR_7);




     }
   else
     {
       VAR_8 = VAR_7;



       VAR_17 = (((VAR_15 & VAR_4[VAR_10]) << (15 - VAR_10))
         | ((VAR_6->sign == '+') ? 0 : 0x8000)
         | FUNC_2 (15 - VAR_10));
       *VAR_8++ = VAR_17;


       for (; VAR_8 < VAR_7 + VAR_9; VAR_8++)
  *VAR_8 = FUNC_2 (VAR_0);

       if (FUNC_2 (1))
  {






    unsigned long VAR_18;
    for (VAR_18 = 1, VAR_8--;
         VAR_18 && (VAR_8 >= VAR_7);
         VAR_8--)
      {
        VAR_18 = *VAR_8 + VAR_18;
        *VAR_8 = VAR_18;
        VAR_18 >>= VAR_0;
      }

    if ((VAR_17 ^ *VAR_7) & (1 << (VAR_0 - 1)))
      {
        FUNC_0 (VAR_7);



      }
  }
     }
 }
    }
  return VAR_11;
}
