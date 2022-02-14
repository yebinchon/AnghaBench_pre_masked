
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ich_arg; int ich_func; } ;
struct axp2xx_softc {int type; int nregs; struct axp2xx_reg_sc** regs; TYPE_2__ intr_hook; void* nsensors; void* sensors; void* gpiodev; void* npins; void* pins; int res; int mtx; } ;
struct axp2xx_regdef {char* name; } ;
struct axp2xx_reg_sc {int dummy; } ;
typedef scalar_t__ phandle_t ;
typedef int device_t ;
struct TYPE_3__ {int ocd_data; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 struct axp2xx_reg_sc* FUNC_0 (int ,scalar_t__,struct axp2xx_regdef*) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int VAR_15 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 struct axp2xx_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 void* FUNC_6 (int ) ;
 struct axp2xx_reg_sc** FUNC_7 (int,int ,int) ;
 int FUNC_8 (int *,int ,int *,int ) ;
 void* FUNC_9 (void*) ;
 scalar_t__ FUNC_10 (scalar_t__,char*) ;
 scalar_t__ FUNC_11 (int ) ;
 TYPE_1__* FUNC_12 (int ,int ) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_16)
{
 struct axp2xx_softc *VAR_17;
 struct axp2xx_reg_sc *VAR_18;
 struct axp2xx_regdef *VAR_19;
 phandle_t VAR_20, VAR_21;
 int VAR_22;

 VAR_17 = FUNC_4(VAR_16);
 FUNC_8(&VAR_17->mtx, FUNC_3(VAR_16), ((void*)0), VAR_2);

 if (FUNC_1(VAR_16, VAR_13, VAR_17->res) != 0) {
  FUNC_5(VAR_16, "can't allocate device resources\n");
  return (VAR_1);
 }

 VAR_17->type = FUNC_12(VAR_16, VAR_15)->ocd_data;
 switch (VAR_17->type) {
 case 129:
  VAR_17->pins = VAR_6;
  VAR_17->npins = FUNC_9(VAR_6);
  VAR_17->gpiodev = FUNC_6(VAR_16);

  VAR_17->sensors = VAR_8;
  VAR_17->nsensors = FUNC_9(VAR_8);

  VAR_19 = VAR_7;
  VAR_17->nregs = FUNC_9(VAR_7);
  break;
 case 128:
  VAR_17->pins = VAR_9;
  VAR_17->npins = FUNC_9(VAR_9);
  VAR_17->gpiodev = FUNC_6(VAR_16);

  VAR_17->sensors = VAR_11;
  VAR_17->nsensors = FUNC_9(VAR_11);

  VAR_19 = VAR_10;
  VAR_17->nregs = FUNC_9(VAR_10);
  break;
 }

 VAR_17->regs = FUNC_7(sizeof(struct axp2xx_reg_sc *) * VAR_17->nregs,
     VAR_3, VAR_4 | VAR_5);

 VAR_17->intr_hook.ich_func = VAR_12;
 VAR_17->intr_hook.ich_arg = VAR_16;

 if (FUNC_2(&VAR_17->intr_hook) != 0)
  return (VAR_0);


 VAR_20 = FUNC_10(FUNC_11(VAR_16), "regulators");
 if (VAR_20 > 0) {
  for (VAR_22 = 0; VAR_22 < VAR_17->nregs; VAR_22++) {
   VAR_21 = FUNC_10(VAR_20,
       VAR_19[VAR_22].name);
   if (VAR_21 == 0)
    continue;
   VAR_18 = FUNC_0(VAR_16, VAR_21, &VAR_19[VAR_22]);
   if (VAR_18 == ((void*)0)) {
    FUNC_5(VAR_16,
        "cannot attach regulator %s\n",
        VAR_19[VAR_22].name);
    continue;
   }
   VAR_17->regs[VAR_22] = VAR_18;
   if (VAR_14)
    FUNC_5(VAR_16, "Regulator %s attached\n",
        VAR_19[VAR_22].name);
  }
 }

 return (0);
}
