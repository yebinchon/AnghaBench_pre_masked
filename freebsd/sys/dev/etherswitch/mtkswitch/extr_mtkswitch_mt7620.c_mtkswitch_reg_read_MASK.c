
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int (* mtkswitch_read ) (struct mtkswitch_softc*,int ) ;} ;
struct mtkswitch_softc {TYPE_1__ hal; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 struct mtkswitch_softc* FUNC_4 (int ) ;
 int FUNC_5 (struct mtkswitch_softc*,int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_0, int VAR_1)
{
 struct mtkswitch_softc *VAR_2 = FUNC_4(VAR_0);
 uint32_t VAR_3;

 VAR_3 = VAR_2->hal.mtkswitch_read(VAR_2, FUNC_3(VAR_1));
 if (FUNC_1(VAR_1))
  return (FUNC_0(VAR_3));
 return (FUNC_2(VAR_3));
}
