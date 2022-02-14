
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ow_temp_softc {int temp; int bad_crc; int bad_reads; int reading_interval; int parasite; int event_thread; int temp_lock; int type; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,char*,int,int*,int ,char*) ;
 int FUNC_1 (int ,int ,int ,char*,int,int*,int ,int ,char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct ow_temp_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (int ,struct ow_temp_softc*,int *,int ,int ,char*,int ) ;
 int FUNC_9 (int *,char*,int *,int ) ;
 int FUNC_10 (int ) ;
 int VAR_6 ;
 int FUNC_11 (char*) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_12(device_t VAR_8)
{
 struct ow_temp_softc *VAR_9;

 VAR_9 = FUNC_4(VAR_8);
 VAR_9->dev = VAR_8;
 VAR_9->type = FUNC_10(VAR_8);
 FUNC_1(FUNC_5(VAR_8),
     FUNC_2(FUNC_6(VAR_8)),
     VAR_4, "temperature", VAR_0 | VAR_2,
     &VAR_9->temp, 0, VAR_7,
     "IK3", "Current Temperature");
 FUNC_0(FUNC_5(VAR_8),
     FUNC_2(FUNC_6(VAR_8)),
     VAR_4, "badcrc", VAR_0,
     &VAR_9->bad_crc, 0,
     "Number of Bad CRC on reading scratchpad");
 FUNC_0(FUNC_5(VAR_8),
     FUNC_2(FUNC_6(VAR_8)),
     VAR_4, "badread", VAR_0,
     &VAR_9->bad_reads, 0,
     "Number of errors on reading scratchpad");
 FUNC_0(FUNC_5(VAR_8),
     FUNC_2(FUNC_6(VAR_8)),
     VAR_4, "reading_interval", VAR_1,
     &VAR_9->reading_interval, 0,
     "ticks between reads");
 FUNC_0(FUNC_5(VAR_8),
     FUNC_2(FUNC_6(VAR_8)),
     VAR_4, "parasite", VAR_1,
     &VAR_9->parasite, 0,
     "In Parasite mode");





 VAR_9->temp = -1;
 VAR_9->reading_interval = 10 * VAR_5;
 FUNC_9(&VAR_9->temp_lock, "lock for doing temperature", ((void*)0), VAR_3);

 if (FUNC_8(VAR_6, VAR_9, &VAR_9->event_thread, 0, 0,
     "%s event thread", FUNC_3(VAR_8))) {
  FUNC_7(VAR_8, "unable to create event thread.\n");
  FUNC_11("ow_temp_attach, can't create thread");
 }

 return 0;
}
