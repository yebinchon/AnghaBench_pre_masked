
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ich_arg; int ich_func; } ;
struct syr827_softc {int * reg; TYPE_1__ intr_hook; int addr; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 struct syr827_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3)
{
 struct syr827_softc *VAR_4;
 phandle_t VAR_5;

 VAR_4 = FUNC_1(VAR_3);
 VAR_5 = FUNC_4(VAR_3);

 VAR_4->addr = FUNC_3(VAR_3);

 VAR_4->intr_hook.ich_func = VAR_2;
 VAR_4->intr_hook.ich_arg = VAR_3;

 if (FUNC_0(&VAR_4->intr_hook) != 0)
  return (VAR_0);

 VAR_4->reg = FUNC_5(VAR_3, VAR_5);
 if (VAR_4->reg == ((void*)0)) {
  FUNC_2(VAR_3, "cannot attach regulator\n");
  return (VAR_1);
 }

 return (0);
}
