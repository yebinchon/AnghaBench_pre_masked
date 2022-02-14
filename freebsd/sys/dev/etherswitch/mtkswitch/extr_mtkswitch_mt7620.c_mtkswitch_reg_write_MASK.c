
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int (* mtkswitch_write ) (struct mtkswitch_softc*,int ,int ) ;int (* mtkswitch_read ) (struct mtkswitch_softc*,int ) ;} ;
struct mtkswitch_softc {TYPE_1__ hal; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 struct mtkswitch_softc* FUNC_4 (int ) ;
 int FUNC_5 (struct mtkswitch_softc*,int ) ;
 int FUNC_6 (struct mtkswitch_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_2, int VAR_3, int VAR_4)
{
 struct mtkswitch_softc *VAR_5 = FUNC_4(VAR_2);
 uint32_t VAR_6;

 VAR_6 = VAR_5->hal.mtkswitch_read(VAR_5, FUNC_1(VAR_3));
 if (FUNC_0(VAR_3)) {
  VAR_6 &= VAR_1;
  VAR_6 |= FUNC_2(VAR_4);
 } else {
  VAR_6 &= VAR_0;
  VAR_6 |= FUNC_3(VAR_4);
 }
 VAR_5->hal.mtkswitch_write(VAR_5, FUNC_1(VAR_3), VAR_6);

 return (0);
}
