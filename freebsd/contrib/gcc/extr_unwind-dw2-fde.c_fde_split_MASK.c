
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object {int dummy; } ;
struct fde_vector {size_t count; int const** array; } ;
typedef scalar_t__ (* fde_compare_t ) (struct object*,int const*,int const*) ;
typedef int const fde ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void
FUNC_1 (struct object *VAR_0, fde_compare_t VAR_1,
    struct fde_vector *VAR_2, struct fde_vector *VAR_3)
{
  static const fde *VAR_4;
  size_t VAR_5 = VAR_2->count;
  const fde **VAR_6 = &VAR_4;
  size_t VAR_7, VAR_8, VAR_9;




  FUNC_0 (sizeof (const fde *) == sizeof (const fde **));

  for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
    {
      const fde **VAR_10;

      for (VAR_10 = VAR_6;
    VAR_10 != &VAR_4 && VAR_1 (VAR_0, VAR_2->array[VAR_7], *VAR_10) < 0;
    VAR_10 = VAR_6)
 {
   VAR_6 = (const fde **) VAR_3->array[VAR_10 - VAR_2->array];
   VAR_3->array[VAR_10 - VAR_2->array] = ((void*)0);
 }
      VAR_3->array[VAR_7] = (const fde *) VAR_6;
      VAR_6 = &VAR_2->array[VAR_7];
    }




  for (VAR_7 = VAR_8 = VAR_9 = 0; VAR_7 < VAR_5; VAR_7++)
    if (VAR_3->array[VAR_7])
      VAR_2->array[VAR_8++] = VAR_2->array[VAR_7];
    else
      VAR_3->array[VAR_9++] = VAR_2->array[VAR_7];
  VAR_2->count = VAR_8;
  VAR_3->count = VAR_9;
}
