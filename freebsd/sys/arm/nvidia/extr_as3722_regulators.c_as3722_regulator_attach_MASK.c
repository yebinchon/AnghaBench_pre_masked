
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct as3722_softc {int nregs; struct as3722_reg_sc** regs; int dev; } ;
struct as3722_reg_sc {int dummy; } ;
typedef scalar_t__ phandle_t ;
struct TYPE_4__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct as3722_reg_sc* FUNC_0 (struct as3722_softc*,scalar_t__,TYPE_1__*) ;
 TYPE_1__* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,char*,...) ;
 struct as3722_reg_sc** FUNC_2 (int,int ,int) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (scalar_t__,char*) ;

int
FUNC_5(struct as3722_softc *VAR_6, phandle_t VAR_7)
{
 struct as3722_reg_sc *VAR_8;
 phandle_t VAR_9, VAR_10;
 int VAR_11;

 VAR_10 = FUNC_4(VAR_7, "regulators");
 if (VAR_10 <= 0) {
  FUNC_1(VAR_6->dev, " Cannot find regulators subnode\n");
  return (VAR_0);
 }

 VAR_6->nregs = FUNC_3(VAR_4);
 VAR_6->regs = FUNC_2(sizeof(struct as3722_reg_sc *) * VAR_6->nregs,
     VAR_1, VAR_2 | VAR_3);



 for (VAR_11 = 0; VAR_11 < VAR_6->nregs; VAR_11++) {
  VAR_9 = FUNC_4(VAR_10, VAR_4[VAR_11].name);
  if (VAR_9 == 0) {
   if (VAR_5)
    FUNC_1(VAR_6->dev,
        "Regulator %s missing in DT\n",
        VAR_4[VAR_11].name);
   continue;
  }
  VAR_8 = FUNC_0(VAR_6, VAR_9, VAR_4 + VAR_11);
  if (VAR_8 == ((void*)0)) {
   FUNC_1(VAR_6->dev, "Cannot attach regulator: %s\n",
       VAR_4[VAR_11].name);
   return (VAR_0);
  }
  VAR_6->regs[VAR_11] = VAR_8;
 }
 return (0);
}
