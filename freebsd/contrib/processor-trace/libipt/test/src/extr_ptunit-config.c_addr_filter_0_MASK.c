
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct ptunit_result {int dummy; } ;
struct TYPE_6__ {int addr0_cfg; } ;
struct TYPE_7__ {int addr_cfg; TYPE_1__ ctl; } ;
struct TYPE_8__ {int addr0_a; int addr0_b; TYPE_2__ config; } ;
struct pt_config {TYPE_3__ addr_filter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pt_config*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,int) ;
 struct ptunit_result FUNC_4 () ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,unsigned long long) ;

__attribute__((used)) static struct ptunit_result FUNC_7(void)
{
 struct pt_config VAR_2;
 uint64_t VAR_3, VAR_4;
 uint32_t VAR_5;
 uint8_t VAR_6;

 FUNC_0(&VAR_2);
 VAR_2.addr_filter.config.ctl.addr0_cfg = VAR_1;
 VAR_2.addr_filter.addr0_a = 0xa000ull;
 VAR_2.addr_filter.addr0_b = 0xb000ull;

 FUNC_6(VAR_2.addr_filter.config.addr_cfg, 0ull);

 VAR_5 = FUNC_3(&VAR_2.addr_filter, 0);
 FUNC_5(VAR_5, VAR_1);

 VAR_3 = FUNC_1(&VAR_2.addr_filter, 0);
 FUNC_5(VAR_3, 0xa000ull);

 VAR_4 = FUNC_2(&VAR_2.addr_filter, 0);
 FUNC_5(VAR_4, 0xb000ull);

 for (VAR_6 = 1; VAR_6 < 4; ++VAR_6) {

  VAR_5 = FUNC_3(&VAR_2.addr_filter, VAR_6);

  FUNC_5(VAR_5, VAR_0);
 }

 return FUNC_4();
}
