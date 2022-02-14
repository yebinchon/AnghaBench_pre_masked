
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct iicoc_softc {int reg_shift; int mem_res; } ;
typedef int device_t ;


 int FUNC_0 (int ,int) ;
 struct iicoc_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, int VAR_1)
{
 uint8_t VAR_2;
 struct iicoc_softc *VAR_3;

 VAR_3 = FUNC_1(VAR_0);
 VAR_2 = FUNC_0(VAR_3->mem_res, VAR_1<<VAR_3->reg_shift);
 return (VAR_2);
}
