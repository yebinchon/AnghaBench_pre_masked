
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* splay_tree_node ;
typedef TYPE_2__* priority_info ;
typedef int location_t ;
struct TYPE_5__ {scalar_t__ destructions_p; scalar_t__ initializations_p; } ;
struct TYPE_4__ {int value; scalar_t__ key; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_1 (splay_tree_node VAR_3, void * VAR_4)
{
  location_t *VAR_5 = (location_t *) VAR_4;
  int VAR_6 = (int) VAR_3->key;
  priority_info VAR_7 = (priority_info) VAR_3->value;



  if (VAR_7->initializations_p
      || (VAR_6 == VAR_0 && VAR_1))
    FUNC_0 ( 1, VAR_6, VAR_5);
  if (VAR_7->destructions_p
      || (VAR_6 == VAR_0 && VAR_2))
    FUNC_0 ( 0, VAR_6, VAR_5);


  return 0;
}
