
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ class; int name; struct TYPE_4__* next; } ;
typedef TYPE_1__ bucket ;
struct TYPE_5__ {scalar_t__ class; int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(void)
{
    bucket *VAR_4;

    if (VAR_3->class == VAR_1)
 FUNC_0(VAR_3->name);

    for (VAR_4 = VAR_2; VAR_4; VAR_4 = VAR_4->next)
    {
 if (VAR_4->class == VAR_1)
 {
     FUNC_1(VAR_4->name);
     VAR_4->class = VAR_0;
 }
    }
}
