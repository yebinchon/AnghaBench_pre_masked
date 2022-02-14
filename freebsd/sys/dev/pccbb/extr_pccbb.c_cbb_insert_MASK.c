
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct cbb_softc {int dev; int cbdev; int flags; TYPE_1__* exca; } ;
struct TYPE_2__ {int pccarddev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cbb_softc*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(struct cbb_softc *VAR_5)
{
 uint32_t VAR_6, VAR_7;

 VAR_6 = FUNC_2(VAR_5, VAR_1);
 VAR_7 = FUNC_2(VAR_5, VAR_2);

 FUNC_1((VAR_5->dev, "card inserted: event=0x%08x, state=%08x\n",
     VAR_6, VAR_7));

 if (VAR_7 & VAR_4) {
  if (FUNC_3(VAR_5->exca[0].pccarddev)) {
   VAR_5->flags |= VAR_0;
   FUNC_5(&VAR_5->exca[0]);
  } else {
   FUNC_4(VAR_5->dev,
       "16-bit card inserted, but no pccard bus.\n");
  }
 } else if (VAR_7 & VAR_3) {
  if (FUNC_3(VAR_5->cbdev)) {
   VAR_5->flags &= ~VAR_0;
   FUNC_0(VAR_5->cbdev);
  } else {
   FUNC_4(VAR_5->dev,
       "CardBus card inserted, but no cardbus bus.\n");
  }
 } else {




  FUNC_4(VAR_5->dev, "Unsupported card type detected\n");
 }
}
