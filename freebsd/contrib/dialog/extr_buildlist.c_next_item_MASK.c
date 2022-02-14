
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * list; } ;
typedef int MY_DATA ;
typedef TYPE_1__ ALL_DATA ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int,int) ;

__attribute__((used)) static int
FUNC_5(ALL_DATA * VAR_0, int VAR_1, int VAR_2)
{
    MY_DATA *VAR_3 = VAR_0->list + VAR_2;
    int VAR_4 = VAR_1;
    int VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2);
    FUNC_0(("! given item %d, testing next-item on row %d\n", VAR_1, VAR_5 + 1));
    if (FUNC_2(VAR_3, VAR_5 + 1)) {
 VAR_4 = FUNC_4(VAR_0, VAR_5 + 1, VAR_2);
    }
    FUNC_0(("! next_item(%d, %s) ->%d\n", VAR_1, FUNC_3(VAR_2), VAR_4));
    return VAR_4;
}
