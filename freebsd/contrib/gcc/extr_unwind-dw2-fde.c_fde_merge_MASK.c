
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object {int dummy; } ;
struct fde_vector {size_t count; int const** array; } ;
typedef scalar_t__ (* fde_compare_t ) (struct object*,int const*,int const*) ;
typedef int const fde ;



__attribute__((used)) static inline void
FUNC_0 (struct object *VAR_0, fde_compare_t VAR_1,
    struct fde_vector *VAR_2, struct fde_vector *VAR_3)
{
  size_t VAR_4, VAR_5;
  const fde * VAR_6;

  VAR_5 = VAR_3->count;
  if (VAR_5 > 0)
    {
      VAR_4 = VAR_2->count;
      do
 {
   VAR_5--;
   VAR_6 = VAR_3->array[VAR_5];
   while (VAR_4 > 0 && VAR_1 (VAR_0, VAR_2->array[VAR_4-1], VAR_6) > 0)
     {
       VAR_2->array[VAR_4+VAR_5] = VAR_2->array[VAR_4-1];
       VAR_4--;
     }
   VAR_2->array[VAR_4+VAR_5] = VAR_6;
 }
      while (VAR_5 > 0);
      VAR_2->count += VAR_3->count;
    }
}
