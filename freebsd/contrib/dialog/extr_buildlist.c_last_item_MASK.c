
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * list; } ;
typedef int MY_DATA ;
typedef TYPE_1__ ALL_DATA ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int,int) ;

__attribute__((used)) static int
FUNC_4(ALL_DATA * VAR_0, int VAR_1)
{
    MY_DATA *VAR_2 = VAR_0->list + VAR_1;
    int VAR_3 = -1;
    int VAR_4;

    for (VAR_4 = 0; FUNC_1(VAR_2, VAR_4) != 0; ++VAR_4) {
 VAR_3 = VAR_4;
    }
    if (VAR_3 >= 0) {
 VAR_3 = FUNC_3(VAR_0, VAR_3, VAR_1);
    }
    FUNC_0(("! last_item %s = %d\n", FUNC_2(VAR_1), VAR_3));
    return VAR_3;
}
