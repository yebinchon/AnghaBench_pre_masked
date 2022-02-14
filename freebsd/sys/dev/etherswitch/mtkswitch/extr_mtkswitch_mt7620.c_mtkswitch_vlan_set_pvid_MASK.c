
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int (* mtkswitch_write ) (struct mtkswitch_softc*,int ,int ) ;} ;
struct mtkswitch_softc {TYPE_1__ hal; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtkswitch_softc*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (struct mtkswitch_softc*,int ,int ) ;
 int FUNC_5 (struct mtkswitch_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct mtkswitch_softc *VAR_2, int VAR_3, int VAR_4)
{
 uint32_t VAR_5;

 FUNC_0(VAR_2, VAR_0);
 VAR_5 = FUNC_3(VAR_4 & VAR_1);
 VAR_2->hal.mtkswitch_write(VAR_2, FUNC_1(VAR_3), VAR_5);
 VAR_2->hal.mtkswitch_write(VAR_2, FUNC_2(VAR_3), VAR_5);

 return (0);
}
