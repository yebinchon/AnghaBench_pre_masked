
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* htab_t ;
typedef size_t hashval_t ;
typedef enum insert_option { ____Placeholder_insert_option } insert_option ;
struct TYPE_7__ {int n_elements; scalar_t__* entries; int n_deleted; scalar_t__ (* eq_f ) (scalar_t__,scalar_t__ const) ;int collisions; int searches; } ;
typedef scalar_t__ PTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 size_t FUNC_1 (size_t,TYPE_1__*) ;
 size_t FUNC_2 (size_t,TYPE_1__*) ;
 size_t FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__ const) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__ const) ;

PTR *
FUNC_6 (htab_t VAR_4, const PTR VAR_5,
                          hashval_t VAR_6, enum insert_option VAR_7)
{
  PTR *VAR_8;
  hashval_t VAR_9, VAR_10;
  size_t VAR_11;
  PTR VAR_12;

  VAR_11 = FUNC_3 (VAR_4);
  if (VAR_7 == VAR_2 && VAR_11 * 3 <= VAR_4->n_elements * 4)
    {
      if (FUNC_0 (VAR_4) == 0)
 return ((void*)0);
      VAR_11 = FUNC_3 (VAR_4);
    }

  VAR_9 = FUNC_1 (VAR_6, VAR_4);

  VAR_4->searches++;
  VAR_8 = ((void*)0);

  VAR_12 = VAR_4->entries[VAR_9];
  if (VAR_12 == VAR_1)
    goto empty_entry;
  else if (VAR_12 == VAR_0)
    VAR_8 = &VAR_4->entries[VAR_9];
  else if ((*VAR_4->eq_f) (VAR_12, VAR_5))
    return &VAR_4->entries[VAR_9];

  VAR_10 = FUNC_2 (VAR_6, VAR_4);
  for (;;)
    {
      VAR_4->collisions++;
      VAR_9 += VAR_10;
      if (VAR_9 >= VAR_11)
 VAR_9 -= VAR_11;

      VAR_12 = VAR_4->entries[VAR_9];
      if (VAR_12 == VAR_1)
 goto empty_entry;
      else if (VAR_12 == VAR_0)
 {
   if (!VAR_8)
     VAR_8 = &VAR_4->entries[VAR_9];
 }
      else if ((*VAR_4->eq_f) (VAR_12, VAR_5))
 return &VAR_4->entries[VAR_9];
    }

 empty_entry:
  if (VAR_7 == VAR_3)
    return ((void*)0);

  if (VAR_8)
    {
      VAR_4->n_deleted--;
      *VAR_8 = VAR_1;
      return VAR_8;
    }

  VAR_4->n_elements++;
  return &VAR_4->entries[VAR_9];
}
