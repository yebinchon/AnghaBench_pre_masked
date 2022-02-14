
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int encoding; } ;
struct TYPE_8__ {TYPE_2__ b; } ;
struct TYPE_6__ {struct fde_vector* sort; } ;
struct object {TYPE_3__ s; TYPE_1__ u; } ;
struct fde_vector {size_t count; TYPE_4__** array; } ;
struct TYPE_9__ {unsigned char const* pc_begin; } ;
typedef TYPE_4__ fde ;
typedef scalar_t__ _Unwind_Ptr ;


 scalar_t__ FUNC_0 (int,struct object*) ;
 unsigned char* FUNC_1 (int,scalar_t__,unsigned char const*,scalar_t__*) ;

__attribute__((used)) static inline const fde *
FUNC_2 (struct object *VAR_0, void *VAR_1)
{
  struct fde_vector *VAR_2 = VAR_0->u.sort;
  int VAR_3 = VAR_0->s.b.encoding;
  _Unwind_Ptr VAR_4 = FUNC_0 (VAR_3, VAR_0);
  size_t VAR_5, VAR_6;

  for (VAR_5 = 0, VAR_6 = VAR_2->count; VAR_5 < VAR_6; )
    {
      size_t VAR_7 = (VAR_5 + VAR_6) / 2;
      const fde *VAR_8 = VAR_2->array[VAR_7];
      _Unwind_Ptr VAR_9, VAR_10;
      const unsigned char *VAR_11;

      VAR_11 = FUNC_1 (VAR_3, VAR_4, VAR_8->pc_begin,
     &VAR_9);
      FUNC_1 (VAR_3 & 0x0F, 0, VAR_11, &VAR_10);

      if ((_Unwind_Ptr) VAR_1 < VAR_9)
 VAR_6 = VAR_7;
      else if ((_Unwind_Ptr) VAR_1 >= VAR_9 + VAR_10)
 VAR_5 = VAR_7 + 1;
      else
 return VAR_8;
    }

  return ((void*)0);
}
