
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regnode {int dummy; } ;
struct as3722_reg_sc {int enable_usec; TYPE_1__* def; TYPE_2__* base_sc; scalar_t__ ext_control; scalar_t__ enable_tracking; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {scalar_t__ id; int name; int volt_reg; int nranges; int ranges; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_1 (struct as3722_reg_sc*) ;
 int FUNC_2 (struct as3722_reg_sc*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct as3722_reg_sc*) ;
 int VAR_4 ;
 int FUNC_4 (int ,char*,int,...) ;
 int FUNC_5 (int ) ;
 struct as3722_reg_sc* FUNC_6 (struct regnode*) ;

__attribute__((used)) static int
FUNC_7(struct regnode *VAR_5)
{
 struct as3722_reg_sc *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_6(VAR_5);

 VAR_6->enable_usec = 500;
 if (VAR_6->def->id == VAR_3) {
  if (FUNC_3(VAR_6)) {
   VAR_6->def->ranges = VAR_4;
   VAR_6->def->nranges = FUNC_5(VAR_4);
  }
  VAR_6->enable_usec = 600;
 } else if (VAR_6->def->id == VAR_2) {
  if (VAR_6->enable_tracking) {
   VAR_7 = FUNC_0(VAR_6->base_sc, VAR_6->def->volt_reg,
       VAR_0,
       VAR_1);
   if (VAR_7 < 0) {
    FUNC_4(VAR_6->base_sc->dev,
     "LDO3 tracking failed: %d\n", VAR_7);
    return (VAR_7);
   }
  }
 }

 if (VAR_6->ext_control) {

  VAR_7 = FUNC_1(VAR_6);
  if (VAR_7 < 0) {
   FUNC_4(VAR_6->base_sc->dev,
    "Failed to enable %s regulator: %d\n",
    VAR_6->def->name, VAR_7);
   return (VAR_7);
  }
  VAR_7 = FUNC_2(VAR_6, VAR_6->ext_control);
  if (VAR_7 < 0) {
   FUNC_4(VAR_6->base_sc->dev,
    "%s ext control failed: %d", VAR_6->def->name, VAR_7);
   return (VAR_7);
  }
 }
 return (0);
}
