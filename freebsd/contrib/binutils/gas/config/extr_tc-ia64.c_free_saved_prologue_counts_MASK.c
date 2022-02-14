
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ label_prologue_count ;
struct TYPE_5__ {TYPE_1__* saved_prologue_counts; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void
FUNC_1 ()
{
  label_prologue_count *VAR_1 = VAR_0.saved_prologue_counts;
  label_prologue_count *VAR_2;

  while (VAR_1 != ((void*)0))
    {
      VAR_2 = VAR_1->next;
      FUNC_0 (VAR_1);
      VAR_1 = VAR_2;
    }

  VAR_0.saved_prologue_counts = ((void*)0);
}
