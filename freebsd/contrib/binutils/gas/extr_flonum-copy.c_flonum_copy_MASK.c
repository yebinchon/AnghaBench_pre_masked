
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int leader; unsigned int low; unsigned int high; scalar_t__ exponent; int sign; } ;
typedef int LITTLENUM_TYPE ;
typedef TYPE_1__ FLONUM_TYPE ;


 int FUNC_0 (void*,void*,unsigned int) ;
 int FUNC_1 (char*,char,unsigned int) ;

void
FUNC_2 (FLONUM_TYPE *VAR_0, FLONUM_TYPE *VAR_1)
{
  unsigned int VAR_2;
  unsigned int VAR_3;

  VAR_1->sign = VAR_0->sign;
  VAR_2 = VAR_0->leader - VAR_0->low;

  if (VAR_0->leader < VAR_0->low)
    {
      VAR_1->leader = VAR_1->low - 1;
    }
  else
    {
      VAR_3 = VAR_1->high - VAR_1->low;


      if (VAR_2 <= VAR_3)
 {
   {



     if (VAR_2 < VAR_3)
       {
  FUNC_1 ((char *) (VAR_1->low + VAR_2 + 1), '\0',
   VAR_3 - VAR_2);
       }
   }
   FUNC_0 ((void *) (VAR_1->low), (void *) (VAR_0->low),
    ((VAR_2 + 1) * sizeof (LITTLENUM_TYPE)));
   VAR_1->exponent = VAR_0->exponent;
   VAR_1->leader = VAR_0->leader - VAR_0->low + VAR_1->low;
 }
      else
 {
   int VAR_4;

   VAR_4 = VAR_2 - VAR_3;

   FUNC_0 ((void *) (VAR_1->low), (void *) (VAR_0->low + VAR_4),
    ((VAR_3 + 1) * sizeof (LITTLENUM_TYPE)));
   VAR_1->leader = VAR_1->high;
   VAR_1->exponent = VAR_0->exponent + VAR_4;
 }
    }
}
