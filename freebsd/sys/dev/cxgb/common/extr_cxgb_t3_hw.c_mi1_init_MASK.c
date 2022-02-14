
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct adapter_info {int dummy; } ;
struct TYPE_6__ {int cclk; int mdc; } ;
struct TYPE_7__ {TYPE_1__ vpd; } ;
struct TYPE_8__ {TYPE_2__ params; } ;
typedef TYPE_3__ adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void FUNC_2(adapter_t *VAR_2, const struct adapter_info *VAR_3)
{
        u32 VAR_4 = VAR_2->params.vpd.cclk / (2 * VAR_2->params.vpd.mdc) - 1;
        u32 VAR_5 = VAR_1 | FUNC_0(VAR_4);

        FUNC_1(VAR_2, VAR_0, VAR_5);
}
