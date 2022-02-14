
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pages_per_block; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_1 ;

int FUNC_3(int VAR_2)
{
    FUNC_0();
    FUNC_1("%d", VAR_2);

    if ((VAR_2 < 0) || (VAR_2 > 7))
        FUNC_2(VAR_0);

    FUNC_2(VAR_1[VAR_2].pages_per_block);
}
