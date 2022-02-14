
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int am_path; } ;
typedef TYPE_1__ am_node ;


 scalar_t__ FUNC_0 (int ,char*) ;
 TYPE_1__* FUNC_1 (int*) ;
 TYPE_1__* FUNC_2 (int*) ;

am_node *
FUNC_3(char *VAR_0)
{
  int VAR_1;
  am_node *VAR_2;

  VAR_2 = FUNC_1(&VAR_1);
  while (VAR_2 != ((void*)0)) {
    if (FUNC_0(VAR_2->am_path, VAR_0))
      break;
    VAR_2 = FUNC_2(&VAR_1);
  }
  return VAR_2;
}
