
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int multilist_t ;
typedef int multilist_sublist_t ;
struct TYPE_4__ {int ** arcs_list; } ;
struct TYPE_3__ {int ** arcs_list; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 unsigned int FUNC_1 (int *) ;
 int * FUNC_2 (int *,unsigned int) ;

__attribute__((used)) static multilist_sublist_t *
FUNC_3(int VAR_4)
{
 multilist_t *VAR_5 = ((void*)0);
 unsigned int VAR_6;

 FUNC_0(VAR_4 >= 0 && VAR_4 <= 3);

 switch (VAR_4) {
 case 0:
  VAR_5 = VAR_2->arcs_list[VAR_1];
  break;
 case 1:
  VAR_5 = VAR_3->arcs_list[VAR_1];
  break;
 case 2:
  VAR_5 = VAR_2->arcs_list[VAR_0];
  break;
 case 3:
  VAR_5 = VAR_3->arcs_list[VAR_0];
  break;
 }







 VAR_6 = FUNC_1(VAR_5);
 return (FUNC_2(VAR_5, VAR_6));
}
