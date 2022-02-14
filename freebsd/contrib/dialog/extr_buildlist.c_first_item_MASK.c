
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int item_no; int * items; int * list; } ;
typedef int MY_DATA ;
typedef TYPE_1__ ALL_DATA ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(ALL_DATA * VAR_0, int VAR_1)
{
    MY_DATA *VAR_2 = VAR_0->list + VAR_1;
    int VAR_3 = -1;
    int VAR_4;

    if (FUNC_1(VAR_2, 0) != 0) {
 for (VAR_4 = 0; VAR_4 < VAR_0->item_no; ++VAR_4) {
     if (FUNC_1(VAR_2, 0) == &VAR_0->items[VAR_4]) {
  VAR_3 = VAR_4;
  break;
     }
 }
    }
    FUNC_0(("! first_item %s = %d\n", FUNC_2(VAR_1), VAR_3));
    return VAR_3;
}
