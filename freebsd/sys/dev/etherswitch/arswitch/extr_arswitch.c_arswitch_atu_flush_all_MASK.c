
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ count; } ;
struct TYPE_3__ {int (* arswitch_atu_flush ) (struct arswitch_softc*) ;} ;
struct arswitch_softc {TYPE_2__ atu; TYPE_1__ hal; } ;
typedef int device_t ;


 int FUNC_0 (struct arswitch_softc*) ;
 int FUNC_1 (struct arswitch_softc*) ;
 struct arswitch_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct arswitch_softc*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0)
{
 struct arswitch_softc *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_2(VAR_0);
 FUNC_0(VAR_1);
 VAR_2 = VAR_1->hal.arswitch_atu_flush(VAR_1);

 VAR_1->atu.count = 0;
 FUNC_1(VAR_1);
 return (VAR_2);
}
