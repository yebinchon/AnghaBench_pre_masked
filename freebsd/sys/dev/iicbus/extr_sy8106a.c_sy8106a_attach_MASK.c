
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sy8106a_softc {int * reg; int addr; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 struct sy8106a_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 struct sy8106a_softc *VAR_2;
 phandle_t VAR_3;

 VAR_2 = FUNC_0(VAR_1);
 VAR_3 = FUNC_3(VAR_1);

 VAR_2->addr = FUNC_2(VAR_1);

 VAR_2->reg = FUNC_4(VAR_1, VAR_3);
 if (VAR_2->reg == ((void*)0)) {
  FUNC_1(VAR_1, "cannot attach regulator\n");
  return (VAR_0);
 }

 return (0);
}
