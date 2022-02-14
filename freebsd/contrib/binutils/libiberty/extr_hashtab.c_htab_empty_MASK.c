
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* htab_t ;
struct TYPE_6__ {int prime; } ;
struct TYPE_5__ {scalar_t__* entries; int size; int size_prime_index; scalar_t__ n_elements; scalar_t__ n_deleted; scalar_t__ (* alloc_f ) (int,int) ;int alloc_arg; scalar_t__ (* alloc_with_arg_f ) (int ,int,int) ;int (* free_with_arg_f ) (int ,scalar_t__*) ;int (* free_f ) (scalar_t__*) ;int (* del_f ) (scalar_t__) ;} ;
typedef scalar_t__ PTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__*,int ,size_t) ;
 TYPE_2__* VAR_2 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (int ,scalar_t__*) ;
 scalar_t__ FUNC_6 (int ,int,int) ;
 scalar_t__ FUNC_7 (int,int) ;

void
FUNC_8 (htab_t VAR_3)
{
  size_t VAR_4 = FUNC_1 (VAR_3);
  PTR *VAR_5 = VAR_3->entries;
  int VAR_6;

  if (VAR_3->del_f)
    for (VAR_6 = VAR_4 - 1; VAR_6 >= 0; VAR_6--)
      if (VAR_5[VAR_6] != VAR_1 && VAR_5[VAR_6] != VAR_0)
 (*VAR_3->del_f) (VAR_5[VAR_6]);


  if (VAR_4 > 1024*1024 / sizeof (PTR))
    {
      int VAR_7 = FUNC_0 (1024 / sizeof (PTR));
      int VAR_8 = VAR_2[VAR_7].prime;

      if (VAR_3->free_f != ((void*)0))
 (*VAR_3->free_f) (VAR_3->entries);
      else if (VAR_3->free_with_arg_f != ((void*)0))
 (*VAR_3->free_with_arg_f) (VAR_3->alloc_arg, VAR_3->entries);
      if (VAR_3->alloc_with_arg_f != ((void*)0))
 VAR_3->entries = (PTR *) (*VAR_3->alloc_with_arg_f) (VAR_3->alloc_arg, VAR_8,
                 sizeof (PTR *));
      else
 VAR_3->entries = (PTR *) (*VAR_3->alloc_f) (VAR_8, sizeof (PTR *));
     VAR_3->size = VAR_8;
     VAR_3->size_prime_index = VAR_7;
    }
  else
    FUNC_2 (VAR_5, 0, VAR_4 * sizeof (PTR));
  VAR_3->n_deleted = 0;
  VAR_3->n_elements = 0;
}
