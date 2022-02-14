
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ lastOut; } ;
struct TYPE_5__ {scalar_t__ hdl; } ;
typedef TYPE_1__ TERMINAL_CONTROL_BLOCK ;


 TYPE_3__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void
FUNC_2(TERMINAL_CONTROL_BLOCK * VAR_0)
{
    if (FUNC_0(VAR_0)->lastOut != VAR_0->hdl) {
 FUNC_0(VAR_0)->lastOut = VAR_0->hdl;
 FUNC_1(FUNC_0(VAR_0)->lastOut);
    }
}
