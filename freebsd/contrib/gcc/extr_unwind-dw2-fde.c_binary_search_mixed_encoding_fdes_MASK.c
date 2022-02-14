
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct fde_vector* sort; } ;
struct object {TYPE_1__ u; } ;
struct fde_vector {size_t count; TYPE_2__** array; } ;
struct TYPE_6__ {unsigned char const* pc_begin; } ;
typedef TYPE_2__ fde ;
typedef scalar_t__ _Unwind_Ptr ;


 int FUNC_0 (int,struct object*) ;
 int FUNC_1 (TYPE_2__ const*) ;
 unsigned char* FUNC_2 (int,int ,unsigned char const*,scalar_t__*) ;

__attribute__((used)) static inline const fde *
FUNC_3 (struct object *VAR_0, void *VAR_1)
{
  struct fde_vector *VAR_2 = VAR_0->u.sort;
  size_t VAR_3, VAR_4;

  for (VAR_3 = 0, VAR_4 = VAR_2->count; VAR_3 < VAR_4; )
    {
      size_t VAR_5 = (VAR_3 + VAR_4) / 2;
      const fde *VAR_6 = VAR_2->array[VAR_5];
      _Unwind_Ptr VAR_7, VAR_8;
      const unsigned char *VAR_9;
      int VAR_10;

      VAR_10 = FUNC_1 (VAR_6);
      VAR_9 = FUNC_2 (VAR_10,
     FUNC_0 (VAR_10, VAR_0),
     VAR_6->pc_begin, &VAR_7);
      FUNC_2 (VAR_10 & 0x0F, 0, VAR_9, &VAR_8);

      if ((_Unwind_Ptr) VAR_1 < VAR_7)
 VAR_4 = VAR_5;
      else if ((_Unwind_Ptr) VAR_1 >= VAR_7 + VAR_8)
 VAR_3 = VAR_5 + 1;
      else
 return VAR_6;
    }

  return ((void*)0);
}
