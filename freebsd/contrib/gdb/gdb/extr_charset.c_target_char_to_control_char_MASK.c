
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* target_char_to_control_char ) (int ,int,int*) ;int target_char_to_control_char_baton; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ,int,int*) ;

int
FUNC_1 (int VAR_1, int *VAR_2)
{
  return ((*VAR_0->target_char_to_control_char)
          (VAR_0->target_char_to_control_char_baton,
           VAR_1, VAR_2));
}
