
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum floatformat_byteorders { ____Placeholder_floatformat_byteorders } floatformat_byteorders ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_0 (unsigned char *VAR_3, enum floatformat_byteorders VAR_4,
    unsigned int VAR_5, unsigned int VAR_6, unsigned int VAR_7,
    unsigned long VAR_8)
{
  unsigned int VAR_9;
  int VAR_10;


  if (VAR_4 == VAR_1 || VAR_4 == VAR_2)
    {
      int VAR_11 = VAR_0 - (VAR_5 % VAR_0);
      VAR_9 = (VAR_5 / VAR_0)
                 - ((VAR_6 + VAR_7 + VAR_11) / VAR_0);
      VAR_10 = ((VAR_6 + VAR_7 + VAR_11) % VAR_0)
                     - VAR_0;
    }
  else
    {
      VAR_9 = (VAR_6 + VAR_7) / VAR_0;
      VAR_10 =
 ((VAR_6 + VAR_7) % VAR_0) - VAR_0;
    }
  if (VAR_10 > -VAR_0)
    {
      *(VAR_3 + VAR_9) &=
 ~(((1 << ((VAR_6 + VAR_7) % VAR_0)) - 1)
   << (-VAR_10));
      *(VAR_3 + VAR_9) |=
 (VAR_8 & ((1 << VAR_0) - 1)) << (-VAR_10);
    }
  VAR_10 += VAR_0;
  if (VAR_4 == VAR_1 || VAR_4 == VAR_2)
    ++VAR_9;
  else
    --VAR_9;


  while (VAR_10 < VAR_7)
    {
      if (VAR_7 - VAR_10 < VAR_0)
 {

   *(VAR_3 + VAR_9) &=
     ~((1 << (VAR_7 - VAR_10)) - 1);
   *(VAR_3 + VAR_9) |= (VAR_8 >> VAR_10);
 }
      else
 *(VAR_3 + VAR_9) = ((VAR_8 >> VAR_10)
         & ((1 << VAR_0) - 1));
      VAR_10 += VAR_0;
      if (VAR_4 == VAR_1 || VAR_4 == VAR_2)
 ++VAR_9;
      else
 --VAR_9;
    }
}
