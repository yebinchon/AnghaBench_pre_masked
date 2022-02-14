
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ code; int y; int Y; int x; int X; struct TYPE_4__* next; } ;
typedef TYPE_1__ mseRegion ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static mseRegion *
FUNC_0(int VAR_1, int VAR_2, int VAR_3)
{
    mseRegion *VAR_4;

    for (VAR_4 = VAR_0; VAR_4; VAR_4 = VAR_4->next) {
 if (VAR_3 ^ (VAR_4->code >= 0)) {
     continue;
 }
 if (VAR_1 < VAR_4->y || VAR_1 >= VAR_4->Y) {
     continue;
 }
 if (VAR_2 < VAR_4->x || VAR_2 >= VAR_4->X) {
     continue;
 }
 break;
    }
    return VAR_4;
}
