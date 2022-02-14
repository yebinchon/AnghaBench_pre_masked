
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int valueT ;
struct TYPE_6__ {int id; int * symbol; struct TYPE_6__* next; int sub_section; int section; scalar_t__ next_free_entry; } ;
typedef TYPE_1__ literal_pool ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int ,int ,int ,int *) ;
 int VAR_4 ;
 TYPE_1__* FUNC_2 (int) ;
 int VAR_5 ;

__attribute__((used)) static literal_pool *
FUNC_3 (void)
{

  static unsigned int VAR_6 = 1;
  literal_pool * VAR_7;

  VAR_7 = FUNC_0 ();

  if (VAR_7 == ((void*)0))
    {

      VAR_7 = FUNC_2 (sizeof (* VAR_7));
      if (! VAR_7)
 return ((void*)0);

      VAR_7->next_free_entry = 0;
      VAR_7->section = VAR_2;
      VAR_7->sub_section = VAR_3;
      VAR_7->next = VAR_1;
      VAR_7->symbol = ((void*)0);


      VAR_1 = VAR_7;
    }


  if (VAR_7->symbol == ((void*)0))
    {
      VAR_7->symbol = FUNC_1 (VAR_0, VAR_4,
        (valueT) 0, &VAR_5);
      VAR_7->id = VAR_6 ++;
    }


  return VAR_7;
}
