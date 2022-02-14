
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ opaque_t ;
struct TYPE_4__ {scalar_t__ refc; int hdr; struct TYPE_4__* map_name; } ;
typedef TYPE_1__ mnt_map ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

void
FUNC_3(opaque_t VAR_0)
{
  mnt_map *VAR_1 = (mnt_map *) VAR_0;






  if (VAR_1 && --VAR_1->refc == 0) {
    FUNC_1(VAR_1);
    FUNC_0(VAR_1->map_name);
    FUNC_2(&VAR_1->hdr);
    FUNC_0(VAR_1);
  }
}
