
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
typedef int uint8_t ;
struct scfg {int slot_status; int slotoff; int Nslots; int enc_status; int adm_status; } ;
struct enc_fsm_state {int dummy; } ;
struct TYPE_7__ {int enc_status; TYPE_1__* elm_map; } ;
struct TYPE_6__ {struct scfg* enc_private; TYPE_3__ enc_cache; } ;
typedef TYPE_2__ enc_softc_t ;
typedef TYPE_3__ enc_cache_t ;
struct TYPE_5__ {scalar_t__ elm_type; int* encstat; int svalid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int
FUNC_1(enc_softc_t *VAR_14, struct enc_fsm_state *VAR_15,
    union ccb *VAR_16, uint8_t **VAR_17, int VAR_18, int VAR_19)
{
 struct scfg *VAR_20;
 uint8_t *VAR_21 = *VAR_17;
 enc_cache_t *VAR_22 = &VAR_14->enc_cache;
 int VAR_23, VAR_24, VAR_25;

 VAR_20 = VAR_14->enc_private;
 if (VAR_20 == ((void*)0))
  return (VAR_1);
 if (VAR_18 != 0)
  return (VAR_18);
 VAR_20->slot_status = 0;
 VAR_23 = VAR_20->slotoff;
 for (VAR_24 = VAR_25 = 0; VAR_25 < VAR_20->Nslots; VAR_25++, VAR_24 += 4) {
  FUNC_0(VAR_24+3, VAR_19);
  if (VAR_22->elm_map[VAR_23].elm_type == VAR_0)
   VAR_22->elm_map[VAR_23].encstat[1] = 0;
  VAR_22->elm_map[VAR_23].encstat[2] &= VAR_5;
  VAR_22->elm_map[VAR_23].encstat[3] = 0;
  if ((VAR_21[VAR_24+3] & 0x01) == 0) {
   VAR_22->elm_map[VAR_23].encstat[0] = VAR_12;
  } else if (VAR_21[VAR_24+0] & 0x02) {
   VAR_22->elm_map[VAR_23].encstat[0] = VAR_10;
   VAR_20->slot_status |= VAR_8;
  } else if (VAR_21[VAR_24+0] & 0x40) {
   VAR_22->elm_map[VAR_23].encstat[0] = VAR_11;
   VAR_20->slot_status |= VAR_9;
  } else {
   VAR_22->elm_map[VAR_23].encstat[0] = VAR_13;
  }
  if (VAR_21[VAR_24+3] & 0x2) {
   if (VAR_21[VAR_24+3] & 0x01)
    VAR_22->elm_map[VAR_23].encstat[2] |= VAR_7;
   else
    VAR_22->elm_map[VAR_23].encstat[2] |= VAR_6;
  }
  if ((VAR_21[VAR_24+3] & 0x04) == 0)
   VAR_22->elm_map[VAR_23].encstat[3] |= VAR_2;
  if (VAR_21[VAR_24+0] & 0x02)
   VAR_22->elm_map[VAR_23].encstat[3] |= VAR_4;
  if (VAR_21[VAR_24+0] & 0x40)
   VAR_22->elm_map[VAR_23].encstat[0] |= VAR_3;
  if (VAR_22->elm_map[VAR_23].elm_type == VAR_0) {
   if (VAR_21[VAR_24+0] & 0x01)
    VAR_22->elm_map[VAR_23].encstat[1] |= 0x80;
   if (VAR_21[VAR_24+0] & 0x04)
    VAR_22->elm_map[VAR_23].encstat[1] |= 0x02;
   if (VAR_21[VAR_24+0] & 0x08)
    VAR_22->elm_map[VAR_23].encstat[1] |= 0x04;
   if (VAR_21[VAR_24+0] & 0x10)
    VAR_22->elm_map[VAR_23].encstat[1] |= 0x08;
   if (VAR_21[VAR_24+0] & 0x20)
    VAR_22->elm_map[VAR_23].encstat[1] |= 0x10;
   if (VAR_21[VAR_24+1] & 0x01)
    VAR_22->elm_map[VAR_23].encstat[1] |= 0x20;
   if (VAR_21[VAR_24+1] & 0x02)
    VAR_22->elm_map[VAR_23].encstat[1] |= 0x01;
  }
  VAR_22->elm_map[VAR_23++].svalid = 1;
 }

 VAR_22->enc_status =
     VAR_20->enc_status | VAR_20->slot_status | VAR_20->adm_status;
 return (0);
}
