
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int local_count; } ;
struct equiv_info {int* local_rvalue; scalar_t__ dying_inputs; int x_local_live; int * x_local; TYPE_1__ cur; } ;
typedef int rtx ;


 unsigned int VAR_0 ;
 size_t FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,unsigned int) ;
 int** VAR_1 ;

__attribute__((used)) static void
FUNC_3 (struct equiv_info *VAR_2)
{
  int VAR_3;

  VAR_2->dying_inputs = 0;
  for (VAR_3 = VAR_2->cur.local_count-1; VAR_3 >=0; VAR_3--)
    {
      rtx VAR_4 = VAR_2->x_local[VAR_3];
      unsigned VAR_5 = FUNC_1 (VAR_4);
      int VAR_6 = (VAR_5 >= VAR_0
     ? 1 : VAR_1[VAR_5][FUNC_0 (VAR_4)]);

      for (VAR_2->local_rvalue[VAR_3] = 0; VAR_6 > 0; VAR_5++, --VAR_6)
 if (FUNC_2 (VAR_2->x_local_live, VAR_5))
   {
     VAR_2->dying_inputs++;
     VAR_2->local_rvalue[VAR_3] = 1;
     break;
   }
    }
}
