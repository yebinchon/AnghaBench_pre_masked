
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int st_top; struct TYPE_5__* st_data; int (* st_free ) (TYPE_1__) ;} ;
typedef TYPE_1__ stk_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__) ;

void
FUNC_2(stk_t *VAR_0)
{
 int VAR_1;

 if (VAR_0->st_free) {
  for (VAR_1 = 0; VAR_1 <= VAR_0->st_top; VAR_1++)
   VAR_0->st_free(VAR_0->st_data[VAR_1]);
 }
 FUNC_0(VAR_0->st_data);
 FUNC_0(VAR_0);
}
