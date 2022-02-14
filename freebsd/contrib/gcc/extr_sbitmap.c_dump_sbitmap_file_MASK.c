
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* sbitmap ;
struct TYPE_4__ {int n_bits; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (TYPE_1__*,unsigned int) ;
 int FUNC_1 (int *,char*,...) ;

void
FUNC_2 (FILE *VAR_0, sbitmap VAR_1)
{
  unsigned int VAR_2, VAR_3;

  FUNC_1 (VAR_0, "n_bits = %d, set = {", VAR_1->n_bits);

  for (VAR_3 = 30, VAR_2 = 0; VAR_2 < VAR_1->n_bits; VAR_2++)
    if (FUNC_0 (VAR_1, VAR_2))
      {
 if (VAR_3 > 70)
   {
     FUNC_1 (VAR_0, "\n  ");
     VAR_3 = 0;
   }

 FUNC_1 (VAR_0, "%d ", VAR_2);
 VAR_3 += 2 + (VAR_2 >= 10) + (VAR_2 >= 100) + (VAR_2 >= 1000);
      }

  FUNC_1 (VAR_0, "}\n");
}
