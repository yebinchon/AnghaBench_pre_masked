
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fde_accumulator {TYPE_1__* linear; } ;
typedef int fde ;
struct TYPE_2__ {int count; int const** array; } ;



__attribute__((used)) static inline void
FUNC_0 (struct fde_accumulator *VAR_0, const fde *VAR_1)
{
  if (VAR_0->linear)
    VAR_0->linear->array[VAR_0->linear->count++] = VAR_1;
}
