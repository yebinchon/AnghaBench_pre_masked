
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bcm_mbox_softc {scalar_t__* have_message; scalar_t__* msg; int lock; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct bcm_mbox_softc*) ;
 int FUNC_2 (struct bcm_mbox_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct bcm_mbox_softc*,int*) ;
 int VAR_4 ;
 struct bcm_mbox_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (char*,int,...) ;
 int VAR_5 ;
 int FUNC_7 (struct bcm_mbox_softc*,int ) ;
 scalar_t__ FUNC_8 (scalar_t__*,int *,int ,char*,int) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_6, int VAR_7, uint32_t *VAR_8)
{
 struct bcm_mbox_softc *VAR_9 = FUNC_4(VAR_6);
 int VAR_10, VAR_11;

 FUNC_6("bcm_mbox_read: chan %d\n", VAR_7);

 VAR_10 = 0;
 FUNC_1(VAR_9);
 if (!VAR_4) {
  if (VAR_9->have_message[VAR_7] == 0) {
   if (FUNC_8(&VAR_9->have_message[VAR_7], &VAR_9->lock, 0,
       "mbox", 10*VAR_5) != 0) {
    FUNC_5(VAR_6, "timeout waiting for message on chan %d\n", VAR_7);
    VAR_10 = VAR_1;
   }
  }
 } else {
  do {

   while ((FUNC_7(VAR_9, VAR_2) & VAR_3))
    ;

   if (FUNC_3(VAR_9, &VAR_11) != 0) {
    VAR_10 = VAR_0;
    goto out;
   }
  } while (VAR_11 != VAR_7);
 }




 *VAR_8 = FUNC_0(VAR_9->msg[VAR_7]);
 VAR_9->msg[VAR_7] = 0;
 VAR_9->have_message[VAR_7] = 0;
out:
 FUNC_2(VAR_9);
 FUNC_6("bcm_mbox_read: chan %d, data %08x\n", VAR_7, *VAR_8);

 return (VAR_10);
}
