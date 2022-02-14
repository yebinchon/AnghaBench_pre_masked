
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_char ;
struct adb_softc {int sync_packet; int packet_reply; int syncreg; int parent; } ;
typedef int device_t ;


 int FUNC_0 (int ,int,int,int*,int) ;
 int FUNC_1 (int*,int,int) ;
 int FUNC_2 (int*,int ) ;
 int FUNC_3 (int*,int) ;
 struct adb_softc* FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (int*,int ,int) ;
 int FUNC_6 (struct adb_softc*,int ,char*,int) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_1, uint8_t VAR_2, uint8_t VAR_3,
    uint8_t VAR_4, int VAR_5, u_char *VAR_6, u_char *VAR_7)
{
 u_char VAR_8 = 0;
 struct adb_softc *VAR_9;
 int VAR_10 = -1;
 int VAR_11 = 1;

 VAR_9 = FUNC_4(VAR_1);

 VAR_8 |= VAR_2 << 4;
 VAR_8 |= VAR_3 << 2;
 VAR_8 |= VAR_4;


 while (!FUNC_1(&VAR_9->sync_packet, 0xffff, VAR_8))
  FUNC_6(VAR_9, 0, "ADB sync", VAR_0/10);

 VAR_9->packet_reply = 0;
 VAR_9->sync_packet = VAR_8;

 FUNC_0(VAR_9->parent, VAR_8, VAR_5, VAR_6, 1);

 while (!FUNC_2(&VAR_9->packet_reply,0)) {




  if (VAR_11 % 40 == 0)
   FUNC_0(VAR_9->parent, VAR_8,
       VAR_5, VAR_6, 1);

  FUNC_6(VAR_9, 0, "ADB sync", VAR_0/10);
  VAR_11++;
 }

 VAR_10 = VAR_9->packet_reply - 1;

 if (VAR_7 != ((void*)0) && VAR_10 > 0)
  FUNC_5(VAR_7,VAR_9->syncreg,VAR_10);


 VAR_9->packet_reply = 0;





 FUNC_3(&VAR_9->sync_packet, 0xffff);

 return (VAR_10);
}
