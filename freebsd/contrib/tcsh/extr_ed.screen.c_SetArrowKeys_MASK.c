
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int XmapVal ;
struct TYPE_5__ {int type; int fun; int name; } ;
struct TYPE_4__ {int buf; } ;
typedef TYPE_1__ CStr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 TYPE_2__* VAR_1 ;

int
FUNC_1(const CStr *VAR_2, XmapVal *VAR_3, int VAR_4)
{
    int VAR_5;
    for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
 if (FUNC_0(VAR_2->buf, VAR_1[VAR_5].name) == 0) {
     VAR_1[VAR_5].fun = *VAR_3;
     VAR_1[VAR_5].type = VAR_4;
     return 0;
 }
    return -1;
}
