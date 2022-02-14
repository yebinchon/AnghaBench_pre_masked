
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* mtkswitch_reg_write ) (int ,int,int) ;} ;
struct mtkswitch_softc {TYPE_1__ hal; } ;
typedef int device_t ;


 struct mtkswitch_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, int VAR_1, int VAR_2)
{
 struct mtkswitch_softc *VAR_3 = FUNC_0(VAR_0);

 return (VAR_3->hal.mtkswitch_reg_write(VAR_0, VAR_1, VAR_2));
}
