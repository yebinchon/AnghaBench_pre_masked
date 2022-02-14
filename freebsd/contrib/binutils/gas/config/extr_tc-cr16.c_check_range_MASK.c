
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int op_err ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;

__attribute__((used)) static op_err
FUNC_0 (long *VAR_13, int VAR_14, int unsigned VAR_15, int VAR_16)
{
  long VAR_17, VAR_18;
  int VAR_19 = VAR_5;
  long VAR_20 = *VAR_13;

  if (VAR_14 == 0 && VAR_20 > 0) return VAR_8;




  if (VAR_20 & 0x80000000)
    VAR_20 |= (-1L << 31);



  if (VAR_15 & VAR_4)
    {
      if (VAR_20 % 2)
        return VAR_7;
    }

  if (VAR_15 & VAR_1)
    {
      VAR_20 -= 1;
      if (VAR_16)
        *VAR_13 = VAR_20;
    }

  if (VAR_15 & VAR_9)
    {
      VAR_20 >>= 1;
      if (VAR_16)
        *VAR_13 = VAR_20;
    }
  else if (VAR_15 & VAR_10)
    {
      VAR_20 = (VAR_20 >> 1) - 1;
      if (VAR_16)
        *VAR_13 = VAR_20;
    }

  if (VAR_15 & VAR_0)
    {
      if (VAR_20 > 0xEFFFF)
        return VAR_8;
    }

  if (VAR_15 & VAR_2)
    {
      if (VAR_20 == 0xB || VAR_20 == 0x9)
        return VAR_8;
      else if (VAR_20 == -1)
 {
   if (VAR_16)
     *VAR_13 = 9;
   return VAR_19;
 }
    }

  if (VAR_15 & VAR_3)
    {
      if (VAR_20 > 13)
        return VAR_8;
    }

   if (VAR_15 & VAR_11)
     {
       VAR_18 = (1 << (VAR_14 - 1)) - 1;
       VAR_17 = - (1 << (VAR_14 - 1));
       if ((VAR_20 > VAR_18) || (VAR_20 < VAR_17))
         VAR_19 = VAR_8;
     }
   else if (VAR_15 & VAR_12)
     {
       VAR_18 = ((((1 << (VAR_14 - 1)) - 1) << 1) | 1);
       VAR_17 = 0;
       if (((unsigned long) VAR_20 > (unsigned long) VAR_18)
            || ((unsigned long) VAR_20 < (unsigned long) VAR_17))
         VAR_19 = VAR_8;
     }
   else if (VAR_15 & VAR_6)
     {
       VAR_18 = - 1;
       VAR_17 = - ((1 << (VAR_14 - 1))-1);
       if ((VAR_20 > VAR_18) || (VAR_20 < VAR_17))
         VAR_19 = VAR_8;
     }
   return VAR_19;
}
