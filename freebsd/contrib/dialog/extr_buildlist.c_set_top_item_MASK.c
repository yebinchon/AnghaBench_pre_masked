
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* list; } ;
struct TYPE_4__ {int top_index; } ;
typedef TYPE_2__ ALL_DATA ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(ALL_DATA * VAR_0, int VAR_1, int VAR_2)
{
    if (VAR_1 != VAR_0->list[VAR_2].top_index) {
 FUNC_0(("# set top of %s column to %d\n",
     FUNC_1(VAR_2),
     VAR_1));
 VAR_0->list[VAR_2].top_index = VAR_1;
    }
}
