
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cyapa_softc {int poll_thread_running; scalar_t__ count; int poll_ticks; int dev; int detaching; } ;
struct cyapa_regs {int stat; } ;
typedef int regs ;
typedef int device_t ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cyapa_softc*) ;
 int VAR_6 ;
 int FUNC_1 (struct cyapa_softc*,struct cyapa_regs*,int) ;
 int FUNC_2 (int ,int ,void*,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (struct cyapa_softc*,int) ;
 int VAR_8 ;
 int FUNC_4 (struct cyapa_softc*) ;
 int FUNC_5 (int ) ;
 int VAR_9 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int *,int) ;
 int FUNC_9 () ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (char*) ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_12(void *VAR_11)
{
 struct cyapa_softc *VAR_12;
 struct cyapa_regs VAR_13;
 device_t VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20;

 VAR_12 = VAR_11;
 VAR_16 = VAR_6;
 VAR_17 = 0;
 VAR_18 = 129;
 VAR_20 = VAR_10;

 VAR_14 = FUNC_5(VAR_12->dev);

 FUNC_0(VAR_12);
 VAR_12->poll_thread_running = 1;

 while (!VAR_12->detaching) {
  FUNC_4(VAR_12);
  VAR_15 = FUNC_7(VAR_14, VAR_12->dev, VAR_2);
  if (VAR_15 == 0) {
   VAR_15 = FUNC_2(VAR_12->dev, VAR_0,
       (void *)&VAR_13, sizeof(VAR_13));
   if (VAR_15 == 0) {
    VAR_17 = FUNC_1(VAR_12, &VAR_13, VAR_16);
   }






   if (VAR_7 ||
       ((VAR_13.stat & VAR_1) == 0 &&
        (unsigned)(VAR_10 - VAR_20) > VAR_3)) {
    VAR_7 = 0;
    VAR_20 = VAR_10;
    FUNC_8(VAR_12->dev, ((void*)0), 2);
   }
   FUNC_6(VAR_14, VAR_12->dev);
  }
  FUNC_10("cyapw", VAR_9 / VAR_16);
  ++VAR_12->poll_ticks;

  if (VAR_12->count == 0) {
   VAR_16 = VAR_5;
   VAR_19 = 129;
  } else if (VAR_17) {
   VAR_16 = VAR_8;
   VAR_19 = 129;
  } else {
   VAR_16 = VAR_6;
   VAR_19 = 130;
  }
  if (VAR_18 != VAR_19) {
   VAR_18 = VAR_19;
   FUNC_3(VAR_12, VAR_18);
   if (VAR_4) {
    switch(VAR_18) {
    case 128:
     FUNC_11("cyapa: power off\n");
     break;
    case 129:
     FUNC_11("cyapa: power idle\n");
     break;
    case 130:
     FUNC_11("cyapa: power full\n");
     break;
    }
   }
  }

  FUNC_0(VAR_12);
 }
 VAR_12->poll_thread_running = 0;
 FUNC_4(VAR_12);
 FUNC_9();
}
