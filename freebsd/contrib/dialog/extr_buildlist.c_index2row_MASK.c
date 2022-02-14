
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int item_no; scalar_t__ items; int * list; } ;
typedef int MY_DATA ;
typedef TYPE_1__ ALL_DATA ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_4(ALL_DATA * VAR_0, int VAR_1, int VAR_2)
{
    MY_DATA *VAR_3 = VAR_0->list + VAR_2;
    int VAR_4 = -1;
    int VAR_5;

    if (FUNC_3(VAR_0, VAR_1)) {
 for (VAR_5 = 0; VAR_5 < VAR_0->item_no; ++VAR_5) {
     FUNC_0(("!... choice %d: %p vs row %d: %p\n",
     VAR_1, VAR_0->items + VAR_1,
     VAR_5, FUNC_1(VAR_3, VAR_5)));
     if (FUNC_1(VAR_3, VAR_5) == VAR_0->items + VAR_1) {
  VAR_4 = VAR_5;
  break;
     }
 }
    }
    FUNC_0(("! index2row(choice %d, %s) = %d\n", VAR_1, FUNC_2(VAR_2), VAR_4));
    return VAR_4;
}
