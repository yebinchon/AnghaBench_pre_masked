
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int type; int name; } ;
struct TYPE_4__ {int buf; } ;
typedef TYPE_1__ CStr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;

int
FUNC_1(const CStr *VAR_3)
{
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
 if (FUNC_0(VAR_3->buf, VAR_2[VAR_4].name) == 0) {
     VAR_2[VAR_4].type = VAR_1;
     return 0;
 }
    return -1;
}
