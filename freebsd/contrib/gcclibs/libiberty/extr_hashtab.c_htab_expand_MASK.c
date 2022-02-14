
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* htab_t ;
struct TYPE_7__ {size_t prime; } ;
struct TYPE_6__ {scalar_t__* entries; unsigned int size_prime_index; size_t size; int alloc_arg; int (* free_with_arg_f ) (int ,scalar_t__*) ;int (* free_f ) (scalar_t__*) ;int (* hash_f ) (scalar_t__) ;scalar_t__ n_deleted; int n_elements; scalar_t__ (* alloc_f ) (size_t,int) ;scalar_t__ (* alloc_with_arg_f ) (int ,size_t,int) ;} ;
typedef scalar_t__ PTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__* FUNC_0 (TYPE_1__*,int ) ;
 unsigned int FUNC_1 (size_t) ;
 size_t FUNC_2 (TYPE_1__*) ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_3 (int ,size_t,int) ;
 scalar_t__ FUNC_4 (size_t,int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__*) ;
 int FUNC_7 (int ,scalar_t__*) ;

__attribute__((used)) static int
FUNC_8 (htab_t VAR_3)
{
  PTR *VAR_4;
  PTR *VAR_5;
  PTR *VAR_6;
  PTR *VAR_7;
  size_t VAR_8, VAR_9, VAR_10;
  unsigned int VAR_11, VAR_12;

  VAR_4 = VAR_3->entries;
  VAR_11 = VAR_3->size_prime_index;
  VAR_9 = VAR_3->size;
  VAR_5 = VAR_4 + VAR_9;
  VAR_10 = FUNC_2 (VAR_3);



  if (VAR_10 * 2 > VAR_9 || (VAR_10 * 8 < VAR_9 && VAR_9 > 32))
    {
      VAR_12 = FUNC_1 (VAR_10 * 2);
      VAR_8 = VAR_2[VAR_12].prime;
    }
  else
    {
      VAR_12 = VAR_11;
      VAR_8 = VAR_9;
    }

  if (VAR_3->alloc_with_arg_f != ((void*)0))
    VAR_7 = (PTR *) (*VAR_3->alloc_with_arg_f) (VAR_3->alloc_arg, VAR_8,
        sizeof (PTR *));
  else
    VAR_7 = (PTR *) (*VAR_3->alloc_f) (VAR_8, sizeof (PTR *));
  if (VAR_7 == ((void*)0))
    return 0;
  VAR_3->entries = VAR_7;
  VAR_3->size = VAR_8;
  VAR_3->size_prime_index = VAR_12;
  VAR_3->n_elements -= VAR_3->n_deleted;
  VAR_3->n_deleted = 0;

  VAR_6 = VAR_4;
  do
    {
      PTR VAR_13 = *VAR_6;

      if (VAR_13 != VAR_1 && VAR_13 != VAR_0)
 {
   PTR *VAR_14 = FUNC_0 (VAR_3, (*VAR_3->hash_f) (VAR_13));

   *VAR_14 = VAR_13;
 }

      VAR_6++;
    }
  while (VAR_6 < VAR_5);

  if (VAR_3->free_f != ((void*)0))
    (*VAR_3->free_f) (VAR_4);
  else if (VAR_3->free_with_arg_f != ((void*)0))
    (*VAR_3->free_with_arg_f) (VAR_3->alloc_arg, VAR_4);
  return 1;
}
