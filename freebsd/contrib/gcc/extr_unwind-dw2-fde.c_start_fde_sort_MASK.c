
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fde_vector {int dummy; } ;
struct fde_accumulator {TYPE_2__* erratic; TYPE_1__* linear; } ;
typedef int fde ;
struct TYPE_4__ {scalar_t__ count; } ;
struct TYPE_3__ {scalar_t__ count; } ;


 void* FUNC_0 (size_t) ;

__attribute__((used)) static inline int
FUNC_1 (struct fde_accumulator *VAR_0, size_t VAR_1)
{
  size_t VAR_2;
  if (! VAR_1)
    return 0;

  VAR_2 = sizeof (struct fde_vector) + sizeof (const fde *) * VAR_1;
  if ((VAR_0->linear = FUNC_0 (VAR_2)))
    {
      VAR_0->linear->count = 0;
      if ((VAR_0->erratic = FUNC_0 (VAR_2)))
 VAR_0->erratic->count = 0;
      return 1;
    }
  else
    return 0;
}
