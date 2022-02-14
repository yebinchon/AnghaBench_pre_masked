
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* btr_user ;
struct TYPE_3__ {int other_use_this_block; scalar_t__ use; struct TYPE_3__* next; } ;


 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void
FUNC_1 (unsigned int VAR_0, btr_user VAR_1)
{
  btr_user VAR_2;

  for (VAR_2 = VAR_1; VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
    if (VAR_2->use && FUNC_0 (VAR_2->use) == VAR_0)
      VAR_2->other_use_this_block = 1;
}
