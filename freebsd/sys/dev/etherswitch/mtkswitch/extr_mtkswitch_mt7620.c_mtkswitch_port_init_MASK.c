
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int (* mtkswitch_read ) (struct mtkswitch_softc*,int ) ;int (* mtkswitch_write ) (struct mtkswitch_softc*,int ,int) ;} ;
struct mtkswitch_softc {int cpuport; TYPE_1__ hal; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct mtkswitch_softc*,int ) ;
 int FUNC_4 (struct mtkswitch_softc*,int ,int) ;
 int FUNC_5 (struct mtkswitch_softc*,int ) ;
 int FUNC_6 (struct mtkswitch_softc*,int ,int) ;
 int FUNC_7 (struct mtkswitch_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_8(struct mtkswitch_softc *VAR_7, int VAR_8)
{
 uint32_t VAR_9;




 VAR_9 = VAR_7->hal.mtkswitch_read(VAR_7, FUNC_0(VAR_8));
 VAR_9 |= VAR_0;
 VAR_7->hal.mtkswitch_write(VAR_7, FUNC_0(VAR_8), VAR_9);


 VAR_9 = VAR_7->hal.mtkswitch_read(VAR_7, FUNC_2(VAR_8));
 VAR_9 &= ~VAR_6;
 VAR_7->hal.mtkswitch_write(VAR_7, FUNC_2(VAR_8), VAR_9);

 VAR_9 = VAR_1;
 if (VAR_8 == VAR_7->cpuport)
  VAR_9 |= VAR_3 | VAR_2 | VAR_5 |
      VAR_4;

 VAR_7->hal.mtkswitch_write(VAR_7, FUNC_1(VAR_8), VAR_9);
}
