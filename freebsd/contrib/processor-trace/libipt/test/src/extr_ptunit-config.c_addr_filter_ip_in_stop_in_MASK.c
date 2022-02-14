
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ptunit_result {int dummy; } ;
struct TYPE_4__ {int addr3_cfg; int addr1_cfg; } ;
struct TYPE_5__ {TYPE_1__ ctl; } ;
struct TYPE_6__ {int addr1_a; int addr1_b; int addr3_a; int addr3_b; TYPE_2__ config; } ;
struct pt_config {TYPE_3__ addr_filter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pt_config*) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int,int ) ;
 struct ptunit_result FUNC_3 () ;

__attribute__((used)) static struct ptunit_result FUNC_4(void)
{
 struct pt_config VAR_2;
 int VAR_3;

 FUNC_0(&VAR_2);
 VAR_2.addr_filter.config.ctl.addr1_cfg = VAR_0;
 VAR_2.addr_filter.addr1_a = 0x100f00;
 VAR_2.addr_filter.addr1_b = 0x10af00;
 VAR_2.addr_filter.config.ctl.addr3_cfg = VAR_1;
 VAR_2.addr_filter.addr3_a = 0x10a000;
 VAR_2.addr_filter.addr3_b = 0x10b000;

 VAR_3 = FUNC_1(&VAR_2.addr_filter, 0x10af00);
 FUNC_2(VAR_3, 0);

 VAR_3 = FUNC_1(&VAR_2.addr_filter, 0x10a0ff);
 FUNC_2(VAR_3, 0);

 return FUNC_3();
}
