
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object {int dummy; } ;
typedef scalar_t__ (* fde_compare_t ) (struct object*,int const*,int const*) ;
typedef int fde ;


 int FUNC_0 (int const*,int const*) ;

__attribute__((used)) static void
FUNC_1 (struct object *VAR_0, fde_compare_t VAR_1, const fde **VAR_2,
  int VAR_3, int VAR_4)
{
  int VAR_5, VAR_6;

  for (VAR_5 = VAR_3, VAR_6 = 2*VAR_5+1;
       VAR_6 < VAR_4;
       VAR_6 = 2*VAR_5+1)
    {
      if (VAR_6+1 < VAR_4 && VAR_1 (VAR_0, VAR_2[VAR_6], VAR_2[VAR_6+1]) < 0)
 ++VAR_6;

      if (VAR_1 (VAR_0, VAR_2[VAR_5], VAR_2[VAR_6]) < 0)
 {
   FUNC_0 (VAR_2[VAR_5], VAR_2[VAR_6]);
   VAR_5 = VAR_6;
 }
      else
 break;
    }
}
