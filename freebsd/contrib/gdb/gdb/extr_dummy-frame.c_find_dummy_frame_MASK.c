
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dummy_frame {scalar_t__ call_lo; scalar_t__ call_hi; scalar_t__ top; scalar_t__ fp; scalar_t__ sp; struct dummy_frame* next; } ;
typedef scalar_t__ CORE_ADDR ;


 struct dummy_frame* VAR_0 ;

__attribute__((used)) static struct dummy_frame *
FUNC_0 (CORE_ADDR VAR_1, CORE_ADDR VAR_2)
{
  struct dummy_frame *VAR_3;

  for (VAR_3 = VAR_0; VAR_3 != ((void*)0);
       VAR_3 = VAR_3->next)
    {


      if (!(VAR_1 >= VAR_3->call_lo && VAR_1 < VAR_3->call_hi))
 continue;

      if (VAR_3->top != 0)
 {






   if (VAR_2 != VAR_3->top)
     continue;
 }
      else
 {






   if (VAR_2 != VAR_3->fp && VAR_2 != VAR_3->sp)
     continue;
 }

      return VAR_3;
    }

  return ((void*)0);
}
