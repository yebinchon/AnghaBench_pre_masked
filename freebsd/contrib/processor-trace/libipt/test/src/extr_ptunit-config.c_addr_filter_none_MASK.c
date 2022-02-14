
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct ptunit_result {int dummy; } ;
struct TYPE_3__ {int addr_cfg; } ;
struct TYPE_4__ {TYPE_1__ config; } ;
struct pt_config {TYPE_2__ addr_filter; } ;


 unsigned long long VAR_0 ;
 int FUNC_0 (struct pt_config*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 struct ptunit_result FUNC_2 () ;
 int FUNC_3 (int ,unsigned long long) ;

__attribute__((used)) static struct ptunit_result FUNC_4(void)
{
 struct pt_config VAR_1;
 uint8_t VAR_2;

 FUNC_0(&VAR_1);

 FUNC_3(VAR_1.addr_filter.config.addr_cfg, 0ull);

 for (VAR_2 = 0; VAR_2 < 4; ++VAR_2) {
  uint32_t VAR_3;

  VAR_3 = FUNC_1(&VAR_1.addr_filter, VAR_2);

  FUNC_3(VAR_3, VAR_0);
 }

 return FUNC_2();
}
