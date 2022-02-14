
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* sbitmap ;
struct TYPE_3__ {unsigned int size; unsigned int n_bits; unsigned int* elms; } ;
typedef unsigned int SBITMAP_ELT_TYPE ;
typedef int FILE ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;

void
FUNC_1 (FILE *VAR_1, sbitmap VAR_2)
{
  unsigned int VAR_3, VAR_4, VAR_5;
  unsigned int VAR_6 = VAR_2->size;
  unsigned int VAR_7 = VAR_2->n_bits;

  FUNC_0 (VAR_1, "  ");
  for (VAR_3 = VAR_4 = 0; VAR_3 < VAR_6 && VAR_4 < VAR_7; VAR_3++)
    for (VAR_5 = 0; VAR_5 < VAR_0 && VAR_4 < VAR_7; VAR_5++, VAR_4++)
      {
 if (VAR_4 != 0 && VAR_4 % 10 == 0)
   FUNC_0 (VAR_1, " ");

 FUNC_0 (VAR_1, "%d",
   (VAR_2->elms[VAR_3] & ((SBITMAP_ELT_TYPE) 1 << VAR_5)) != 0);
      }

  FUNC_0 (VAR_1, "\n");
}
