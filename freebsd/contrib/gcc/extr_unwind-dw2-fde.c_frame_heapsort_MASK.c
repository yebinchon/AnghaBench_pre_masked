
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object {int dummy; } ;
struct fde_vector {size_t count; int ** array; } ;
typedef int fde_compare_t ;
typedef int fde ;


 int FUNC_0 (int const*,int const*) ;
 int FUNC_1 (struct object*,int ,int const**,int,int) ;

__attribute__((used)) static void
FUNC_2 (struct object *VAR_0, fde_compare_t VAR_1,
  struct fde_vector *VAR_2)
{



  const fde ** VAR_3 = VAR_2->array;



  size_t VAR_4 = VAR_2->count;
  int VAR_5;




  for (VAR_5 = VAR_4/2-1; VAR_5 >= 0; --VAR_5)
    FUNC_1 (VAR_0, VAR_1, VAR_3, VAR_5, VAR_4);




  for (VAR_5 = VAR_4-1; VAR_5 >= 1; --VAR_5)
    {
      FUNC_0 (VAR_3[0], VAR_3[VAR_5]);
      FUNC_1 (VAR_0, VAR_1, VAR_3, 0, VAR_5);
    }

}
