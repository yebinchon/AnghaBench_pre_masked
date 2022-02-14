
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dummy_frame {scalar_t__ call_lo; scalar_t__ call_hi; struct dummy_frame* next; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ VAR_0 ;
 struct dummy_frame* VAR_1 ;

int
FUNC_0 (CORE_ADDR VAR_2)
{
  struct dummy_frame *VAR_3;
  for (VAR_3 = VAR_1;
       VAR_3 != ((void*)0);
       VAR_3 = VAR_3->next)
    {
      if ((VAR_2 >= VAR_3->call_lo)
   && (VAR_2 < VAR_3->call_hi + VAR_0))
 return 1;
    }
  return 0;
}
