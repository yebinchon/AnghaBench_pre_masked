
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_rpm; int default_rpm; int (* set ) (struct pmac_fan*,int) ;int * read; scalar_t__ zone; int name; scalar_t__ min_rpm; } ;
struct adm1030_softc {TYPE_1__ fan; int enum_hook; int sc_addr; int sc_dev; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (int *) ;
 struct adm1030_softc* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_1)
{
 struct adm1030_softc *VAR_2;

 device_t VAR_3 = (device_t) VAR_1;

 VAR_2 = FUNC_2(VAR_3);


 FUNC_0(VAR_2->sc_dev, VAR_2->sc_addr, 0x1, 0x1);
 FUNC_0(VAR_2->sc_dev, VAR_2->sc_addr, 0x0, 0x95);
 FUNC_0(VAR_2->sc_dev, VAR_2->sc_addr, 0x23, 0x91);


 VAR_2->fan.min_rpm = 0;
 VAR_2->fan.max_rpm = 0x0F;
 VAR_2->fan.default_rpm = 2;

 FUNC_4(VAR_2->fan.name, "MDD Case fan");
 VAR_2->fan.zone = 0;
 VAR_2->fan.read = ((void*)0);
 VAR_2->fan.set = (int (*)(struct pmac_fan *, int))VAR_0;
 FUNC_1(&VAR_2->enum_hook);

 FUNC_3(&VAR_2->fan);
}
