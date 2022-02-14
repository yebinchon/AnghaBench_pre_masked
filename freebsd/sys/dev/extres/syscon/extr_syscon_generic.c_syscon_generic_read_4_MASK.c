
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct syscon_generic_softc {int mem_res; } ;
struct syscon {int pdev; } ;
typedef int bus_size_t ;


 int FUNC_0 (struct syscon_generic_softc*) ;
 int FUNC_1 (struct syscon_generic_softc*) ;
 int FUNC_2 (int ,int ) ;
 struct syscon_generic_softc* FUNC_3 (int ) ;

__attribute__((used)) static uint32_t
FUNC_4(struct syscon *VAR_0, bus_size_t VAR_1)
{
 struct syscon_generic_softc *VAR_2;
 uint32_t VAR_3;

 VAR_2 = FUNC_3(VAR_0->pdev);

 FUNC_0(VAR_2);
 VAR_3 = FUNC_2(VAR_2->mem_res, VAR_1);
 FUNC_1(VAR_2);
 return (VAR_3);
}
