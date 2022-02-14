
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int u_char ;
struct adb_softc {int sync_packet; int enum_hook; TYPE_1__* devinfo; int * children; scalar_t__ autopoll_mask; scalar_t__ packet_reply; int parent; int sc_dev; } ;
typedef scalar_t__ next_free ;
typedef int int8_t ;
typedef scalar_t__ i ;
typedef int device_t ;
struct TYPE_2__ {int address; int default_address; int register3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int ,int,int,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int ) ;
 struct adb_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_8(void *VAR_3)
{
 device_t VAR_4 = (device_t)VAR_3;

 struct adb_softc *VAR_5 = FUNC_6(VAR_4);
 uint8_t VAR_6, VAR_7;
 uint16_t VAR_8;

 VAR_5->sc_dev = VAR_4;
 VAR_5->parent = FUNC_5(VAR_4);

 VAR_5->packet_reply = 0;
 VAR_5->autopoll_mask = 0;
 VAR_5->sync_packet = 0xffff;


 for (VAR_6 = 0; VAR_6 < 16; VAR_6++) {
  VAR_5->devinfo[VAR_6].address = VAR_6;
  VAR_5->devinfo[VAR_6].default_address = 0;
 }


 FUNC_1(VAR_4,0,VAR_0,0,0,((void*)0),((void*)0));
 FUNC_0(1500);


 VAR_7 = 8;

 for (VAR_6 = 1; VAR_6 <= 7; VAR_6++) {
     int8_t VAR_9 = -1;
     int VAR_10 = 0;

     do {
  VAR_10 = FUNC_1(VAR_4,VAR_6,
       VAR_2,3,0,((void*)0),((void*)0));

  if (VAR_10) {

   VAR_8 = VAR_5->devinfo[VAR_6].register3;
   VAR_8 &= 0xf000;
   VAR_8 |= ((uint16_t)(VAR_7) & 0x000f) << 8;
   VAR_8 |= 0x00fe;

   FUNC_1(VAR_4,VAR_6, VAR_1,3,
       sizeof(uint16_t),(u_char *)(&VAR_8),((void*)0));

   FUNC_1(VAR_4,VAR_7,
       VAR_2,3,0,((void*)0),((void*)0));

   VAR_5->devinfo[VAR_7].default_address = VAR_6;
   if (VAR_9 < 0)
    VAR_9 = VAR_7;

   VAR_7++;
  } else if (VAR_9 > 0) {


   VAR_8 = VAR_5->devinfo[VAR_6].register3;
   VAR_8 &= 0xf000;
   VAR_8 |= ((uint16_t)(VAR_6) & 0x000f) << 8;

   FUNC_1(VAR_4,VAR_9,
       VAR_1,3,
       sizeof(uint16_t),(u_char *)(&VAR_8),((void*)0));
   FUNC_1(VAR_4,VAR_6,
       VAR_2,3,0,((void*)0),((void*)0));

   VAR_5->devinfo[VAR_6].default_address = VAR_6;
   VAR_5->devinfo[(int)(VAR_9)].default_address = 0;
   break;
  }
     } while (VAR_10);
 }

 for (VAR_6 = 0; VAR_6 < 16; VAR_6++) {
  if (VAR_5->devinfo[VAR_6].default_address) {
   VAR_5->children[VAR_6] = FUNC_4(VAR_4, ((void*)0), -1);
   FUNC_7(VAR_5->children[VAR_6], &VAR_5->devinfo[VAR_6]);
  }
 }

 FUNC_2(VAR_4);

 FUNC_3(&VAR_5->enum_hook);
}
