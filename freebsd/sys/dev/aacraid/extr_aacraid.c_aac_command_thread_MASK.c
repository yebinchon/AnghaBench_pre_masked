
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aac_softc {int aifflags; int aac_dev; int aac_io_lock; TYPE_1__* aac_common; int aifthread; } ;
struct TYPE_2__ {scalar_t__* ac_printf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct aac_softc*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct aac_softc*) ;
 int FUNC_3 (struct aac_softc*) ;
 int FUNC_4 (struct aac_softc*) ;
 int FUNC_5 (struct aac_softc*,char*,char*) ;
 int VAR_8 ;
 int FUNC_6 (int ,int *,int ,char*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(struct aac_softc *VAR_9)
{
 int VAR_10;

 FUNC_5(VAR_9, VAR_6, "");

 FUNC_7(&VAR_9->aac_io_lock);
 VAR_9->aifflags = VAR_3;

 while ((VAR_9->aifflags & VAR_1) == 0) {

  VAR_10 = 0;
  if ((VAR_9->aifflags & VAR_2) == 0)
   VAR_10 = FUNC_6(VAR_9->aifthread, &VAR_9->aac_io_lock, VAR_7,
     "aacraid_aifthd", VAR_4 * VAR_8);






  if ((VAR_9->aifflags & VAR_0) != 0) {
   FUNC_0(VAR_9);
   VAR_9->aifflags &= ~VAR_0;
   FUNC_4(VAR_9);
  }






  if (VAR_10 == VAR_5)
   FUNC_3(VAR_9);


  if (VAR_9->aac_common->ac_printf[0] != 0)
   FUNC_2(VAR_9);
 }
 VAR_9->aifflags &= ~VAR_3;
 FUNC_8(&VAR_9->aac_io_lock);
 FUNC_9(VAR_9->aac_dev);

 FUNC_1(0);
}
