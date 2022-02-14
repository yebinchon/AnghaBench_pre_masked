
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct temp_slot {scalar_t__ slot; scalar_t__ address; scalar_t__ base_offset; scalar_t__ full_size; struct temp_slot* next; } ;
typedef scalar_t__ rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 int FUNC_4 () ;
 struct temp_slot** FUNC_5 (int) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static struct temp_slot *
FUNC_6 (rtx VAR_4)
{
  struct temp_slot *VAR_5;
  rtx VAR_6;
  int VAR_7;

  for (VAR_7 = FUNC_4 (); VAR_7 >= 0; VAR_7--)
    for (VAR_5 = *FUNC_5 (VAR_7); VAR_5; VAR_5 = VAR_5->next)
      {
 if (FUNC_3 (VAR_5->slot, 0) == VAR_4
     || VAR_5->address == VAR_4
     || (FUNC_0 (VAR_4) == VAR_2
  && FUNC_3 (VAR_4, 0) == VAR_3
  && FUNC_0 (FUNC_3 (VAR_4, 1)) == VAR_0
  && FUNC_1 (FUNC_3 (VAR_4, 1)) >= VAR_5->base_offset
  && FUNC_1 (FUNC_3 (VAR_4, 1)) < VAR_5->base_offset + VAR_5->full_size))
   return VAR_5;

 else if (VAR_5->address != 0 && FUNC_0 (VAR_5->address) == VAR_1)
   for (VAR_6 = VAR_5->address; VAR_6; VAR_6 = FUNC_3 (VAR_6, 1))
     if (FUNC_3 (VAR_6, 0) == VAR_4)
       return VAR_5;
      }



  if (FUNC_0 (VAR_4) == VAR_2 && FUNC_2 (FUNC_3 (VAR_4, 0))
      && (VAR_5 = FUNC_6 (FUNC_3 (VAR_4, 0))) != 0)
    return VAR_5;
  else if (FUNC_0 (VAR_4) == VAR_2 && FUNC_2 (FUNC_3 (VAR_4, 1))
    && (VAR_5 = FUNC_6 (FUNC_3 (VAR_4, 1))) != 0)
    return VAR_5;

  return 0;
}
