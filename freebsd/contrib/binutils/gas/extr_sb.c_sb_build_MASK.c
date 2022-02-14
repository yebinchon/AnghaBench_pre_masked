
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; int data; struct TYPE_5__* next; } ;
typedef TYPE_1__ sb_element ;
struct TYPE_6__ {int pot; TYPE_1__* item; scalar_t__ len; int ptr; } ;
typedef TYPE_2__ sb ;
struct TYPE_7__ {TYPE_1__** size; } ;


 int FUNC_0 (int) ;
 TYPE_4__ VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2 (sb *VAR_3, int VAR_4)
{

  sb_element *VAR_5;

  FUNC_0 (VAR_4 < VAR_1);

  VAR_5 = VAR_0.size[VAR_4];
  if (!VAR_5)
    {

      VAR_5 = (sb_element *) FUNC_1 (sizeof (sb_element) + (1 << VAR_4));
      VAR_5->next = VAR_0.size[VAR_4];
      VAR_5->size = 1 << VAR_4;
      VAR_0.size[VAR_4] = VAR_5;
      VAR_2[VAR_4]++;
    }


  VAR_0.size[VAR_4] = VAR_5->next;


  VAR_3->ptr = VAR_5->data;
  VAR_3->pot = VAR_4;
  VAR_3->len = 0;
  VAR_3->item = VAR_5;
}
