
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int y; int x; int line; int filename_0_7; } ;
struct TYPE_4__ {TYPE_1__ assert; } ;
struct fw_debug_cmd {TYPE_2__ u; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*,char*,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct adapter *VAR_0, struct fw_debug_cmd *VAR_1)
{
 FUNC_0(VAR_0,
    "FW assertion at %.16s:%u, val0 %#x, val1 %#x\n",
    VAR_1->u.assert.filename_0_7,
    FUNC_1(VAR_1->u.assert.line),
    FUNC_1(VAR_1->u.assert.x),
    FUNC_1(VAR_1->u.assert.y));
}
