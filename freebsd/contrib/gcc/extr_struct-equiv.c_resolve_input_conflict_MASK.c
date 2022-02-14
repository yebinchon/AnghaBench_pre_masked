
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int local_count; } ;
struct equiv_info {int dying_inputs; void** x_local; void** y_local; int had_input_conflict; int * local_rvalue; TYPE_1__ cur; } ;
typedef void* rtx ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct equiv_info*) ;
 int FUNC_1 (scalar_t__,char*,int,char*) ;
 int FUNC_2 (void**,void**,int) ;
 int FUNC_3 (void*,void*) ;

__attribute__((used)) static bool
FUNC_4 (struct equiv_info *VAR_2)
{
  int VAR_3, VAR_4, VAR_5;
  int VAR_6 = 0;
  rtx VAR_7[VAR_0];
  rtx VAR_8[VAR_0];

  FUNC_0 (VAR_2);
  if (VAR_2->dying_inputs <= 1)
    return 1;
  FUNC_2 (VAR_7, VAR_2->x_local, sizeof VAR_7);
  FUNC_2 (VAR_8, VAR_2->y_local, sizeof VAR_8);
  VAR_5 = VAR_2->cur.local_count - 1;
  for (VAR_3 = 0; VAR_3 <= VAR_5; VAR_3++)
    {



      int VAR_9 = VAR_5 - VAR_3;


      if (!VAR_2->local_rvalue[VAR_3])
 continue;

      for (VAR_4 = VAR_3 + 1; VAR_4 <= VAR_5; VAR_4++)
 {
   rtx VAR_10;

   if (!VAR_2->local_rvalue[VAR_4])
     continue;
   if (!FUNC_3 (VAR_2->x_local[VAR_3], VAR_2->y_local[VAR_4]))
     continue;
   if (--VAR_9 < 0)
     {
       FUNC_2 (VAR_2->x_local, VAR_7, sizeof VAR_7);
       FUNC_2 (VAR_2->y_local, VAR_8, sizeof VAR_8);
       return 0;
     }
   VAR_6++;
   VAR_10 = VAR_2->x_local[VAR_3];
   VAR_2->x_local[VAR_3] = VAR_2->x_local[VAR_4];
   VAR_2->x_local[VAR_4] = VAR_10;
   VAR_10 = VAR_2->y_local[VAR_3];
   VAR_2->y_local[VAR_3] = VAR_2->y_local[VAR_4];
   VAR_2->y_local[VAR_4] = VAR_10;
   VAR_4 = VAR_3;
 }
    }
  VAR_2->had_input_conflict = 1;
  if (VAR_1 && VAR_6)
    FUNC_1 (VAR_1, "Resolved input conflict, %d %s.\n",
      VAR_6, VAR_6 == 1 ? "swap" : "swaps");
  return 1;
}
