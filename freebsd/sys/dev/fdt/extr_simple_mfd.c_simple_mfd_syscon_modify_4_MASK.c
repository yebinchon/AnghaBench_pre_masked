
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct syscon {int pdev; } ;
struct simple_mfd_softc {int mem_res; } ;
typedef int bus_size_t ;


 int FUNC_0 (struct simple_mfd_softc*) ;
 int FUNC_1 (struct simple_mfd_softc*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 struct simple_mfd_softc* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct syscon *VAR_0, bus_size_t VAR_1,
    uint32_t VAR_2, uint32_t VAR_3)
{
 struct simple_mfd_softc *VAR_4;
 uint32_t VAR_5;

 VAR_4 = FUNC_4(VAR_0->pdev);

 FUNC_0(VAR_4);
 VAR_5 = FUNC_2(VAR_4->mem_res, VAR_1);
 VAR_5 &= ~VAR_2;
 VAR_5 |= VAR_3;
 FUNC_3(VAR_4->mem_res, VAR_1, VAR_5);
 FUNC_1(VAR_4);
 return (0);
}
