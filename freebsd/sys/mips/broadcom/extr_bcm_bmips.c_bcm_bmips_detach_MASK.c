
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_bmips_softc {int cfg; int cfg_rid; int mem; int mem_rid; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct bcm_bmips_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 struct bcm_bmips_softc *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_2(VAR_1);

 if ((VAR_3 = FUNC_0(VAR_1)))
  return (VAR_3);

 FUNC_1(VAR_1, VAR_0, VAR_2->mem_rid, VAR_2->mem);
 FUNC_1(VAR_1, VAR_0, VAR_2->cfg_rid, VAR_2->cfg);

 return (0);
}
