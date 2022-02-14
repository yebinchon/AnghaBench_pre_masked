
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
typedef int uint8_t ;
struct scfg {int Nfans; int Npwr; int Nslots; int DoorLock; int Ntherm; int Nspkrs; int Ntstats; int pwroff; int slotoff; } ;
struct enc_fsm_state {int dummy; } ;
struct TYPE_8__ {int nelms; TYPE_4__* elm_map; } ;
struct TYPE_9__ {TYPE_1__ enc_cache; struct scfg* enc_private; } ;
typedef TYPE_2__ enc_softc_t ;
typedef int enc_element_t ;
struct TYPE_10__ {void* elm_type; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_2__*,char*,int,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 TYPE_4__* FUNC_3 (int,int ,int) ;

__attribute__((used)) static int
FUNC_4(enc_softc_t *VAR_16, struct enc_fsm_state *VAR_17,
    union ccb *VAR_18, uint8_t **VAR_19, int VAR_20, int VAR_21)
{
 struct scfg *VAR_22;
 uint8_t *VAR_23 = *VAR_19;
 int VAR_24, VAR_25;

 VAR_22 = VAR_16->enc_private;
 if (VAR_22 == ((void*)0))
  return (VAR_8);
 if (VAR_20 != 0)
  return (VAR_20);
 if (VAR_21 < 6) {
  FUNC_1(VAR_16, "too little data (%d) for configuration\n",
      VAR_21);
  return (VAR_0);
 }
 VAR_22->Nfans = VAR_23[0];
 VAR_22->Npwr = VAR_23[1];
 VAR_22->Nslots = VAR_23[2];
 VAR_22->DoorLock = VAR_23[3];
 VAR_22->Ntherm = VAR_23[4];
 VAR_22->Nspkrs = VAR_23[5];
 if (VAR_21 >= 7)
  VAR_22->Ntstats = VAR_23[6] & 0x0f;
 else
  VAR_22->Ntstats = 0;
 FUNC_1(VAR_16, "Nfans %d Npwr %d Nslots %d Lck %d Ntherm %d Nspkrs %d "
     "Ntstats %d\n",
     VAR_22->Nfans, VAR_22->Npwr, VAR_22->Nslots, VAR_22->DoorLock, VAR_22->Ntherm,
     VAR_22->Nspkrs, VAR_22->Ntstats);

 VAR_16->enc_cache.nelms = VAR_22->Nfans + VAR_22->Npwr + VAR_22->Nslots +
     VAR_22->DoorLock + VAR_22->Ntherm + VAR_22->Nspkrs + VAR_22->Ntstats + 1;
 FUNC_0(VAR_16->enc_cache.elm_map);
 VAR_16->enc_cache.elm_map =
     FUNC_3(VAR_16->enc_cache.nelms * sizeof(enc_element_t),
     VAR_9, VAR_10|VAR_11);

 VAR_25 = 0;




 for (VAR_24 = 0; VAR_24 < VAR_22->Nfans; VAR_24++)
  VAR_16->enc_cache.elm_map[VAR_25++].elm_type = VAR_5;
 VAR_22->pwroff = (uint8_t) VAR_25;
 for (VAR_24 = 0; VAR_24 < VAR_22->Npwr; VAR_24++)
  VAR_16->enc_cache.elm_map[VAR_25++].elm_type = VAR_6;
 for (VAR_24 = 0; VAR_24 < VAR_22->DoorLock; VAR_24++)
  VAR_16->enc_cache.elm_map[VAR_25++].elm_type = VAR_4;
 if (VAR_22->Nspkrs > 0)
  VAR_16->enc_cache.elm_map[VAR_25++].elm_type = VAR_1;
 for (VAR_24 = 0; VAR_24 < VAR_22->Ntherm; VAR_24++)
  VAR_16->enc_cache.elm_map[VAR_25++].elm_type = VAR_7;
 for (VAR_24 = 0; VAR_24 <= VAR_22->Ntstats; VAR_24++)
  VAR_16->enc_cache.elm_map[VAR_25++].elm_type = VAR_7;
 VAR_22->slotoff = (uint8_t) VAR_25;
 for (VAR_24 = 0; VAR_24 < VAR_22->Nslots; VAR_24++)
  VAR_16->enc_cache.elm_map[VAR_25++].elm_type =
      VAR_15 ? VAR_2 :
       VAR_3;

 FUNC_2(VAR_16, VAR_13);
 FUNC_2(VAR_16, VAR_12);
 FUNC_2(VAR_16, VAR_14);

 return (0);
}
