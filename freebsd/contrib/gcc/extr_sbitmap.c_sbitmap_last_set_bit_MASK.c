
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* sbitmap ;
struct TYPE_3__ {int* elms; int size; } ;
typedef int SBITMAP_ELT_TYPE ;


 int VAR_0 ;

int
FUNC_0 (sbitmap VAR_1)
{
  int VAR_2;
  SBITMAP_ELT_TYPE *VAR_3 = VAR_1->elms;

  for (VAR_2 = VAR_1->size - 1; VAR_2 >= 0; VAR_2--)
    {
      SBITMAP_ELT_TYPE VAR_4 = VAR_3[VAR_2];

      if (VAR_4 != 0)
 {
   unsigned int VAR_5 = (VAR_2 + 1) * VAR_0 - 1;
   SBITMAP_ELT_TYPE VAR_6
     = (SBITMAP_ELT_TYPE) 1 << (VAR_0 - 1);

   while (1)
     {
       if ((VAR_4 & VAR_6) != 0)
  return VAR_5;

       VAR_6 >>= 1;
       VAR_5--;
     }
 }
    }

  return -1;
}
