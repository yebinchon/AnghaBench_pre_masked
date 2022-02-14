
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t am_mapno; } ;
typedef TYPE_1__ am_node ;


 int FUNC_0 (TYPE_1__*) ;
 int ** VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static void
FUNC_2(am_node *VAR_3)
{



  if (!VAR_3)
    return;




  VAR_0[VAR_3->am_mapno] = ((void*)0);




  if (VAR_3->am_mapno == VAR_2)
    while (VAR_2 >= 0 && VAR_0[VAR_2] == 0)
      --VAR_2;

  if (VAR_1 > VAR_3->am_mapno)
    VAR_1 = VAR_3->am_mapno;




  FUNC_1((char *) VAR_3, 0, sizeof(am_node));
  FUNC_0(VAR_3);
}
