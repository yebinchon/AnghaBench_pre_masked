
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_softc {scalar_t__ last_ts; int heartbeat_timer; int lr_timer; int device; } ;
typedef scalar_t__ sbintime_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct ntb_softc*) ;
 int FUNC_1 (int *,scalar_t__,void (*) (void*),struct ntb_softc*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct ntb_softc*) ;
 scalar_t__ FUNC_3 (struct ntb_softc*) ;
 int FUNC_4 (int ) ;
 void FUNC_5 (void*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_6(void *VAR_3)
{
 struct ntb_softc *VAR_4 = VAR_3;
 sbintime_t VAR_5, VAR_6;

 VAR_5 = VAR_0 * VAR_1;
 VAR_6 = VAR_4->last_ts + VAR_5;





 if ((sbintime_t)VAR_2 - VAR_6 < 0 && FUNC_3(VAR_4)) {
  VAR_5 = VAR_6 - VAR_2;
  goto out;
 }

 if (FUNC_2(VAR_4))
  FUNC_4(VAR_4->device);

 if (!FUNC_3(VAR_4) && FUNC_0(VAR_4)) {

  FUNC_1(&VAR_4->lr_timer, 0, FUNC_5, VAR_4);
  return;
 }

out:
 FUNC_1(&VAR_4->heartbeat_timer, VAR_5, FUNC_6, VAR_4);
}
