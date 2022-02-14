
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* description; struct TYPE_3__* term_name; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static void
FUNC_1(void)
{
    if (VAR_1 != 0) {
 while (VAR_2 != 0) {
     --VAR_2;
     FUNC_0(VAR_1[VAR_2].term_name);
     FUNC_0(VAR_1[VAR_2].description);
 }
 FUNC_0(VAR_1);
 VAR_1 = 0;
    }
    VAR_2 = 0;
    VAR_0 = 0;
}
