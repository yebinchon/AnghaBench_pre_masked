
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bcm_platform {int pmu_addr; } ;
typedef int bus_size_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(bus_size_t VAR_0, uint32_t VAR_1, void *VAR_2) {
 struct bcm_platform *VAR_3 = VAR_2;
 FUNC_1(FUNC_0(VAR_3->pmu_addr, VAR_0), VAR_1);
}
