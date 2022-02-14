
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int strings; } ;
typedef TYPE_1__ UI ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

int FUNC_4(UI *VAR_3, int VAR_4)
{
    if (VAR_4 < 0) {
        FUNC_1(VAR_0, VAR_2);
        return -1;
    }
    if (VAR_4 >= FUNC_2(VAR_3->strings)) {
        FUNC_1(VAR_0, VAR_1);
        return -1;
    }
    return FUNC_0(FUNC_3(VAR_3->strings, VAR_4));
}
