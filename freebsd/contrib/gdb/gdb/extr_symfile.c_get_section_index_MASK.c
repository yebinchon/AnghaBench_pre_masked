
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct objfile {int obfd; } ;
struct TYPE_3__ {int index; } ;
typedef TYPE_1__ asection ;


 TYPE_1__* FUNC_0 (int ,char*) ;

int
FUNC_1 (struct objfile *VAR_0, char *VAR_1)
{
  asection *VAR_2 = FUNC_0 (VAR_0->obfd, VAR_1);
  if (VAR_2)
    return VAR_2->index;
  else
    return -1;
}
