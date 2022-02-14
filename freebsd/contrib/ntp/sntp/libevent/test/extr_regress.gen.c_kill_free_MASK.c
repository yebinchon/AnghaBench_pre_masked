
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kill {int how_often_set; struct kill* how_often_data; scalar_t__ how_often_num_allocated; scalar_t__ how_often_length; struct kill* action_data; struct kill* weapon_data; } ;


 int FUNC_0 (struct kill*) ;

void
FUNC_1(struct kill *VAR_0)
{
  if (VAR_0->weapon_data != ((void*)0))
      FUNC_0 (VAR_0->weapon_data);
  if (VAR_0->action_data != ((void*)0))
      FUNC_0 (VAR_0->action_data);
  if (VAR_0->how_often_set == 1) {
    FUNC_0(VAR_0->how_often_data);
    VAR_0->how_often_data = ((void*)0);
    VAR_0->how_often_set = 0;
    VAR_0->how_often_length = 0;
    VAR_0->how_often_num_allocated = 0;
  }
  FUNC_0(VAR_0->how_often_data);
  FUNC_0(VAR_0);
}
