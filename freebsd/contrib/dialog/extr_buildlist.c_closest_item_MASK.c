
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int item_no; TYPE_1__* items; } ;
struct TYPE_4__ {scalar_t__ state; } ;
typedef TYPE_2__ ALL_DATA ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(ALL_DATA * VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3 = VAR_1;
    int VAR_4 = VAR_1;
    int VAR_5 = VAR_1;
    int VAR_6;

    for (VAR_6 = VAR_1; VAR_6 >= 0; --VAR_6) {
 if ((VAR_0->items[VAR_6].state != 0) == VAR_2) {
     VAR_3 = VAR_6;
     break;
 }
    }
    for (VAR_6 = VAR_1; VAR_6 < VAR_0->item_no; ++VAR_6) {
 if ((VAR_0->items[VAR_6].state != 0) == VAR_2) {
     VAR_4 = VAR_6;
     break;
 }
    }
    if (VAR_3 != VAR_1) {
 VAR_5 = VAR_3;
 if (VAR_4 != VAR_1) {
     if ((VAR_1 - VAR_3) > (VAR_4 - VAR_1)) {
  VAR_5 = VAR_4;
     }
 }
    } else if (VAR_4 != VAR_1) {
 VAR_5 = VAR_4;
    }
    FUNC_0(("! XXX closest item choice %d, %s = %d\n",
    VAR_1, FUNC_1(VAR_2), VAR_5));
    return VAR_5;
}
