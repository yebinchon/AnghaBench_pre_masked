
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int (* mtkswitch_read ) (struct mtkswitch_softc*,int ) ;int (* mtkswitch_write ) (struct mtkswitch_softc*,int ,int) ;} ;
struct mtkswitch_softc {TYPE_1__ hal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mtkswitch_softc*,int ) ;
 int FUNC_1 (struct mtkswitch_softc*,int ,int) ;
 int FUNC_2 (struct mtkswitch_softc*,int ) ;

__attribute__((used)) static void
FUNC_3(struct mtkswitch_softc *VAR_4, uint32_t VAR_5)
{

 while (VAR_4->hal.mtkswitch_read(VAR_4, VAR_0) & VAR_1);
 VAR_4->hal.mtkswitch_write(VAR_4, VAR_0, VAR_1 |
     VAR_2 | (VAR_5 & VAR_3));
 while (VAR_4->hal.mtkswitch_read(VAR_4, VAR_0) & VAR_1);
}
