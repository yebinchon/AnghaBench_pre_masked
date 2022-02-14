
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uaddr ;
struct TYPE_4__ {struct fde_vector* sort; } ;
struct object {TYPE_1__ u; } ;
struct fde_vector {size_t count; TYPE_2__** array; } ;
struct TYPE_5__ {scalar_t__ pc_begin; } ;
typedef TYPE_2__ fde ;



__attribute__((used)) static inline const fde *
FUNC_0 (struct object *VAR_0, void *VAR_1)
{
  struct fde_vector *VAR_2 = VAR_0->u.sort;
  size_t VAR_3, VAR_4;

  for (VAR_3 = 0, VAR_4 = VAR_2->count; VAR_3 < VAR_4; )
    {
      size_t VAR_5 = (VAR_3 + VAR_4) / 2;
      const fde *VAR_6 = VAR_2->array[VAR_5];
      void *VAR_7;
      uaddr VAR_8;

      VAR_7 = ((void **) VAR_6->pc_begin)[0];
      VAR_8 = ((uaddr *) VAR_6->pc_begin)[1];

      if (VAR_1 < VAR_7)
 VAR_4 = VAR_5;
      else if (VAR_1 >= VAR_7 + VAR_8)
 VAR_3 = VAR_5 + 1;
      else
 return VAR_6;
    }

  return ((void*)0);
}
