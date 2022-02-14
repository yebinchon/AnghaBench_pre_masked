
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int two; int r_b; int n; } ;
struct TYPE_6__ {TYPE_1__ wait; } ;
typedef TYPE_2__ cvmx_nand_cmd_t ;
typedef int cmd ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (TYPE_2__) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int FUNC_5(int VAR_2)
{
    cvmx_nand_cmd_t VAR_3;

    FUNC_0();
    FUNC_1("%d", VAR_2);

    FUNC_4(&VAR_3, 0, sizeof(VAR_3));
    VAR_3.wait.two = 2;
    VAR_3.wait.r_b=0;
    VAR_3.wait.n = 2;






    if (FUNC_3(VAR_3))
        FUNC_2(VAR_0);
    if (FUNC_3(VAR_3))
        FUNC_2(VAR_0);
    if (FUNC_3(VAR_3))
        FUNC_2(VAR_0);
    if (FUNC_3(VAR_3))
        FUNC_2(VAR_0);
    VAR_3.wait.r_b=1;
    if (FUNC_3(VAR_3))
        FUNC_2(VAR_0);

    FUNC_2(VAR_1);
}
