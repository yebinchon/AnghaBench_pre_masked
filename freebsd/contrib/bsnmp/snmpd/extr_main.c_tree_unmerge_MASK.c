
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct lmodule {int dummy; } ;
struct TYPE_2__ {struct lmodule* tree_data; } ;


 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct lmodule *VAR_2)
{
 u_int VAR_3, VAR_4;

 for(VAR_3 = VAR_4 = 0; VAR_3 < VAR_1; VAR_3++)
  if (VAR_0[VAR_3].tree_data != VAR_2) {
   if (VAR_3 != VAR_4)
    VAR_0[VAR_4] = VAR_0[VAR_3];
   VAR_4++;
  }
 VAR_1 = VAR_4;
}
