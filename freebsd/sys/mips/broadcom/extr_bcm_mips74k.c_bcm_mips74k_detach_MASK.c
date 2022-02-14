
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_mips74k_softc {int mem; int mem_rid; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct bcm_mips74k_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 struct bcm_mips74k_softc *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_2(VAR_1);

 if ((VAR_3 = FUNC_0(VAR_1)))
  return (VAR_3);

 FUNC_1(VAR_1, VAR_0, VAR_2->mem_rid, VAR_2->mem);

 return (0);
}
