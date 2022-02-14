
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int events; } ;
struct TYPE_4__ {TYPE_1__ cfg_blk; int read_cfg_blk; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 TYPE_2__ VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_5(void)
{
    if (!VAR_1.read_cfg_blk)
        FUNC_3();

    if (VAR_2)
        FUNC_2(FUNC_1(), VAR_0);

    FUNC_0();
    FUNC_4(0, VAR_1.cfg_blk.events);
}
