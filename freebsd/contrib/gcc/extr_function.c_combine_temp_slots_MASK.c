
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct temp_slot {scalar_t__ base_offset; scalar_t__ full_size; scalar_t__ size; int slot; struct temp_slot* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct temp_slot* VAR_1 ;
 int FUNC_1 (struct temp_slot*,struct temp_slot**) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  struct temp_slot *VAR_5, *VAR_6, *VAR_7, *VAR_8;
  int VAR_9;



  if (VAR_3)
    return;



  if (! VAR_2)
    for (VAR_5 = VAR_1, VAR_9 = 0; VAR_5; VAR_5 = VAR_5->next, VAR_9++)
      if (VAR_9 > 100 || (VAR_9 > 10 && VAR_4 == 0))
 return;

  for (VAR_5 = VAR_1; VAR_5; VAR_5 = VAR_7)
    {
      int VAR_10 = 0;

      VAR_7 = VAR_5->next;

      if (FUNC_0 (VAR_5->slot) != VAR_0)
 continue;

      for (VAR_6 = VAR_5->next; VAR_6; VAR_6 = VAR_8)
 {
          int VAR_11 = 0;

   VAR_8 = VAR_6->next;

   if (FUNC_0 (VAR_6->slot) != VAR_0)
     continue;

   if (VAR_5->base_offset + VAR_5->full_size == VAR_6->base_offset)
     {

       VAR_5->size += VAR_6->size;
       VAR_5->full_size += VAR_6->full_size;
       VAR_11 = 1;
     }
   else if (VAR_6->base_offset + VAR_6->full_size == VAR_5->base_offset)
     {

       VAR_6->size += VAR_5->size;
       VAR_6->full_size += VAR_5->full_size;
       VAR_10 = 1;
       break;
     }
   if (VAR_11)
     FUNC_1 (VAR_6, &VAR_1);
 }


      if (VAR_10)
 FUNC_1 (VAR_5, &VAR_1);
    }
}
