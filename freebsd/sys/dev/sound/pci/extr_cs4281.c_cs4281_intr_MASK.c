
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_4__ {int channel; } ;
struct TYPE_3__ {int channel; } ;
struct sc_info {TYPE_2__ rch; TYPE_1__ pch; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sc_info*,int ) ;
 int FUNC_4 (struct sc_info*,int ,int ) ;

__attribute__((used)) static void
FUNC_5(void *VAR_5)
{
    struct sc_info *VAR_6 = (struct sc_info *)VAR_5;
    u_int32_t VAR_7;

    VAR_7 = FUNC_3(VAR_6, VAR_2);

    if (VAR_7 == 0) return;

    if (VAR_7 & FUNC_1(VAR_3)) {
 FUNC_2(VAR_6->pch.channel);
 FUNC_3(VAR_6, FUNC_0(VAR_3));
    }

    if (VAR_7 & FUNC_1(VAR_4)) {
 FUNC_2(VAR_6->rch.channel);
 FUNC_3(VAR_6, FUNC_0(VAR_4));
    }


    FUNC_4(VAR_6, VAR_0, VAR_1);
}
