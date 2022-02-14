
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
typedef int uint8_t ;
typedef int uint16_t ;
struct scfg {int enc_status; int Nfans; int flag1; int Ntherm; int Ntstats; int Npwr; int Nslots; int slotoff; int slot_status; int adm_status; scalar_t__ Nspkrs; scalar_t__ DoorLock; } ;
struct enc_fsm_state {int dummy; } ;
struct TYPE_8__ {int enc_status; TYPE_1__* elm_map; } ;
struct TYPE_7__ {TYPE_3__ enc_cache; struct scfg* enc_private; } ;
typedef TYPE_2__ enc_softc_t ;
typedef TYPE_3__ enc_cache_t ;
struct TYPE_6__ {int* encstat; int svalid; scalar_t__ elm_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,int,...) ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;

__attribute__((used)) static int
FUNC_2(enc_softc_t *VAR_14, struct enc_fsm_state *VAR_15,
    union ccb *VAR_16, uint8_t **VAR_17, int VAR_18, int VAR_19)
{
 struct scfg *VAR_20;
 uint8_t *VAR_21 = *VAR_17;
 int VAR_22, VAR_23, VAR_24, VAR_25;
 uint16_t VAR_26;
 enc_cache_t *VAR_27 = &VAR_14->enc_cache;

 VAR_20 = VAR_14->enc_private;
 if (VAR_20 == ((void*)0))
  return (VAR_1);
 if (VAR_18 != 0)
  return (VAR_18);

 VAR_22 = VAR_23 = 0;
 VAR_20->enc_status = 0;

 for (VAR_25 = VAR_24 = 0; VAR_24 < VAR_20->Nfans; VAR_24++) {
  FUNC_1(VAR_23, VAR_19);






  VAR_27->elm_map[VAR_22].encstat[1] = 0;
  VAR_27->elm_map[VAR_22].encstat[2] = 0;
  if (VAR_20->flag1 & VAR_2)
   VAR_27->elm_map[VAR_22].encstat[3] |= 0x40;
  else
   VAR_27->elm_map[VAR_22].encstat[3] &= ~0x40;
  switch ((int)VAR_21[VAR_23]) {
  case 0:
   VAR_25++;
   VAR_27->elm_map[VAR_22].encstat[0] = VAR_11;
   if ((VAR_27->elm_map[VAR_22].encstat[3] & 0x37) == 0)
    VAR_27->elm_map[VAR_22].encstat[3] |= 0x27;
   break;

  case 1:
   VAR_27->elm_map[VAR_22].encstat[0] =
       VAR_7;



   VAR_27->elm_map[VAR_22].encstat[3] |= 0x10;
   VAR_27->elm_map[VAR_22].encstat[3] &= ~0x07;





   if (VAR_20->Nfans == 1 || (VAR_20->Ntherm + VAR_20->Ntstats) == 0)
    VAR_20->enc_status |= VAR_4;
   else
    VAR_20->enc_status |= VAR_6;
   break;
  case 2:
   VAR_27->elm_map[VAR_22].encstat[0] =
       VAR_10;
   VAR_27->elm_map[VAR_22].encstat[3] |= 0x10;
   VAR_27->elm_map[VAR_22].encstat[3] &= ~0x07;





   if (VAR_20->Nfans == 1)
    VAR_20->enc_status |= VAR_4;
   else
    VAR_20->enc_status |= VAR_6;
   break;
  case 0x80:
   VAR_27->elm_map[VAR_22].encstat[0] = VAR_12;
   VAR_27->elm_map[VAR_22].encstat[3] = 0;
   VAR_20->enc_status |= VAR_5;
   break;
  default:
   VAR_27->elm_map[VAR_22].encstat[0] = VAR_13;
   FUNC_0(VAR_14, "Unknown fan%d status 0x%x\n", VAR_24,
       VAR_21[VAR_23] & 0xff);
   break;
  }
  VAR_27->elm_map[VAR_22++].svalid = 1;
  VAR_23++;
 }





 if (VAR_20->Nfans && VAR_25 == 0)
  VAR_20->enc_status |= VAR_4;

 for (VAR_24 = 0; VAR_24 < VAR_20->Npwr; VAR_24++) {
  FUNC_1(VAR_23, VAR_19);
  VAR_27->elm_map[VAR_22].encstat[0] = VAR_12;
  VAR_27->elm_map[VAR_22].encstat[1] = 0;
  VAR_27->elm_map[VAR_22].encstat[2] = 0;
  VAR_27->elm_map[VAR_22].encstat[3] = 0x20;
  switch (VAR_21[VAR_23]) {
  case 0x00:
   VAR_27->elm_map[VAR_22].encstat[0] = VAR_11;
   break;
  case 0x01:
   VAR_27->elm_map[VAR_22].encstat[0] = VAR_11;
   VAR_27->elm_map[VAR_22].encstat[3] = 0x10;
   VAR_20->enc_status |= VAR_5;
   break;
  case 0x10:
   VAR_27->elm_map[VAR_22].encstat[0] = VAR_7;
   VAR_27->elm_map[VAR_22].encstat[3] = 0x61;
   VAR_20->enc_status |= VAR_6;
   break;

  case 0x11:
   VAR_27->elm_map[VAR_22].encstat[0] = VAR_8;
   VAR_27->elm_map[VAR_22].encstat[3] = 0x51;
   VAR_20->enc_status |= VAR_6;
   break;
  case 0x20:
   VAR_27->elm_map[VAR_22].encstat[0] =
       VAR_10;
   VAR_27->elm_map[VAR_22].encstat[3] = 0;
   VAR_20->enc_status |= VAR_5;
   break;
  case 0x21:






  case 0x80:
   VAR_27->elm_map[VAR_22].encstat[0] = VAR_12;
   VAR_27->elm_map[VAR_22].encstat[3] = 0;
   VAR_20->enc_status |= VAR_5;
   break;
  default:
   FUNC_0(VAR_14, "unknown power supply %d status (0x%x)\n",
       VAR_24, VAR_21[VAR_23] & 0xff);
   break;
  }
  VAR_14->enc_cache.elm_map[VAR_22++].svalid = 1;
  VAR_23++;
 }




 for (VAR_24 = 0; VAR_24 < VAR_20->Nslots; VAR_24++) {
  FUNC_1(VAR_23, VAR_19);
  if (VAR_27->elm_map[VAR_20->slotoff + VAR_24].elm_type == VAR_0)
   VAR_27->elm_map[VAR_20->slotoff + VAR_24].encstat[1] = VAR_21[VAR_23];
  VAR_23++;
 }





 FUNC_1(VAR_23, VAR_19);
 if (VAR_20->DoorLock) {





  VAR_27->elm_map[VAR_22].encstat[1] = 0;
  VAR_27->elm_map[VAR_22].encstat[2] = 0;
  switch (VAR_21[VAR_23]) {
  case 0:
   VAR_27->elm_map[VAR_22].encstat[0] = VAR_11;
   VAR_27->elm_map[VAR_22].encstat[3] = 0;
   break;
  case 1:
   VAR_27->elm_map[VAR_22].encstat[0] = VAR_11;
   VAR_27->elm_map[VAR_22].encstat[3] = 1;
   break;
  case 0x80:
   VAR_27->elm_map[VAR_22].encstat[0] = VAR_12;
   VAR_27->elm_map[VAR_22].encstat[3] = 0;
   VAR_20->enc_status |= VAR_5;
   break;
  default:
   VAR_27->elm_map[VAR_22].encstat[0] =
       VAR_13;
   FUNC_0(VAR_14, "unknown lock status 0x%x\n",
       VAR_21[VAR_23] & 0xff);
   break;
  }
  VAR_27->elm_map[VAR_22++].svalid = 1;
 }
 VAR_23++;





 FUNC_1(VAR_23, VAR_19);
 if (VAR_20->Nspkrs) {
  VAR_27->elm_map[VAR_22].encstat[0] = VAR_11;
  VAR_27->elm_map[VAR_22].encstat[1] = 0;
  VAR_27->elm_map[VAR_22].encstat[2] = 0;
  if (VAR_21[VAR_23] == 0) {
   VAR_27->elm_map[VAR_22].encstat[0] |= VAR_3;
   VAR_27->elm_map[VAR_22].encstat[3] |= 0x40;
  }
  VAR_27->elm_map[VAR_22++].svalid = 1;
 }
 VAR_23++;
 FUNC_1(VAR_23 + VAR_20->Ntherm, VAR_19);
 VAR_26 = VAR_21[VAR_23 + VAR_20->Ntherm];
 FUNC_1(VAR_23 + VAR_20->Ntherm + 1, VAR_19);
 VAR_26 |= (VAR_26 << 8) | VAR_21[VAR_23 + VAR_20->Ntherm + 1];

 for (VAR_24 = 0; VAR_24 < VAR_20->Ntherm; VAR_24++) {
  FUNC_1(VAR_23, VAR_19);
  if (VAR_26 & (1 << VAR_24)) {
   VAR_27->elm_map[VAR_22].encstat[0] = VAR_7;
   VAR_20->enc_status |= VAR_4;
  } else
   VAR_27->elm_map[VAR_22].encstat[0] = VAR_11;
  VAR_27->elm_map[VAR_22].encstat[1] = 0;
  VAR_27->elm_map[VAR_22].encstat[2] = VAR_21[VAR_23];
  VAR_27->elm_map[VAR_22].encstat[3] = 0;
  VAR_27->elm_map[VAR_22++].svalid = 1;
  VAR_23++;
 }

 for (VAR_24 = 0; VAR_24 <= VAR_20->Ntstats; VAR_24++) {
  VAR_27->elm_map[VAR_22].encstat[1] = 0;
  if (VAR_26 & (1 <<
      ((VAR_24 == VAR_20->Ntstats) ? 15 : (VAR_20->Ntherm + VAR_24)))) {
   VAR_27->elm_map[VAR_22].encstat[0] = VAR_7;
   VAR_27->elm_map[4].encstat[2] = 0xff;



   VAR_27->elm_map[VAR_22].encstat[3] = 8;
   VAR_20->enc_status |= VAR_4;
  } else {






   if ((VAR_20->Ntherm + VAR_20->Ntstats) == 0)
    VAR_27->elm_map[VAR_22].encstat[0] =
        VAR_9;
   else
    VAR_27->elm_map[VAR_22].encstat[0] =
        VAR_11;
   VAR_27->elm_map[VAR_22].encstat[2] = 0;
   VAR_27->elm_map[VAR_22].encstat[3] = 0;
  }
  VAR_27->elm_map[VAR_22++].svalid = 1;
 }
 VAR_23 += 2;

 VAR_27->enc_status =
     VAR_20->enc_status | VAR_20->slot_status | VAR_20->adm_status;
 return (0);
}
