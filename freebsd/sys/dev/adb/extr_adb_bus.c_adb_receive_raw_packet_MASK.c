
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct adb_softc {int sync_packet; int ** children; int packet_reply; int * syncreg; TYPE_1__* devinfo; } ;
typedef int device_t ;
struct TYPE_2__ {int handler_id; int register3; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int,int,int,int*) ;
 int FUNC_1 (int *,int) ;
 struct adb_softc* FUNC_2 (int ) ;
 int FUNC_3 (int *,int*,int) ;
 int FUNC_4 (struct adb_softc*) ;

u_int
FUNC_5(device_t VAR_1, u_char VAR_2, u_char VAR_3, int VAR_4,
    u_char *VAR_5)
{
 struct adb_softc *VAR_6 = FUNC_2(VAR_1);
 u_char VAR_7 = VAR_3 >> 4;

 if (VAR_4 > 0 && (VAR_3 & 0x0f) == ((VAR_0 << 2) | 3)) {
  FUNC_3(&VAR_6->devinfo[VAR_7].register3,VAR_5,2);
  VAR_6->devinfo[VAR_7].handler_id = VAR_5[1];
 }

 if (VAR_6->sync_packet == VAR_3) {
  FUNC_3(VAR_6->syncreg,VAR_5,(VAR_4 > 8) ? 8 : VAR_4);
  FUNC_1(&VAR_6->packet_reply,VAR_4 + 1);
  FUNC_4(VAR_6);
 }

 if (VAR_6->children[VAR_7] != ((void*)0)) {
  FUNC_0(VAR_6->children[VAR_7],VAR_2,
   (VAR_3 & 0x0f) >> 2,VAR_3 & 0x03,VAR_4,VAR_5);
 }

 return (0);
}
