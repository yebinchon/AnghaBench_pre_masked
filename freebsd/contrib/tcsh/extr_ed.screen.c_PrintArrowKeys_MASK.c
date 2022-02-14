
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; int fun; int name; } ;
struct TYPE_4__ {scalar_t__ len; int buf; } ;
typedef TYPE_1__ CStr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (int ,int *,scalar_t__) ;

void
FUNC_2(const CStr *VAR_3)
{
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
 if (VAR_3->len == 0 || FUNC_0(VAR_3->buf, VAR_2[VAR_4].name) == 0)
     if (VAR_2[VAR_4].type != VAR_1)
  FUNC_1(VAR_2[VAR_4].name, &VAR_2[VAR_4].fun, VAR_2[VAR_4].type);
}
