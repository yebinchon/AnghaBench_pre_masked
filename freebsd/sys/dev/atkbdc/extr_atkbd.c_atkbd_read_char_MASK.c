
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
typedef scalar_t__ u_int ;
struct TYPE_5__ {scalar_t__ kb_type; int kb_count; scalar_t__ kb_data; } ;
typedef TYPE_1__ keyboard_t ;
struct TYPE_6__ {int ks_flags; scalar_t__ ks_composed_char; scalar_t__ ks_mode; int ks_prefix; int ks_accents; int ks_state; int * ks_evdev; int ks_evdev_state; int kbdc; } ;
typedef TYPE_2__ atkbd_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int *,int ,int ,int) ;
 int VAR_14 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int,int,int *,int *) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static u_int
FUNC_7(keyboard_t *VAR_15, int VAR_16)
{
 atkbd_state_t *VAR_17;
 u_int VAR_18;
 int VAR_19;
 int VAR_20;

 VAR_17 = (atkbd_state_t *)VAR_15->kb_data;
next_code:

 if (!(VAR_17->ks_flags & VAR_1) && (VAR_17->ks_composed_char > 0)) {
  VAR_18 = VAR_17->ks_composed_char;
  VAR_17->ks_composed_char = 0;
  if (VAR_18 > VAR_13)
   return VAR_3;
  return VAR_18;
 }


 if (VAR_16) {
  do {
   VAR_19 = FUNC_5(VAR_17->kbdc);
  } while (VAR_19 == -1);
 } else {
  VAR_19 = FUNC_6(VAR_17->kbdc);
  if (VAR_19 == -1)
   return VAR_11;
 }
 ++VAR_15->kb_count;
 if (VAR_17->ks_mode == VAR_10)
  return VAR_19;


 VAR_20 = VAR_19 & 0x7F;
 switch (VAR_17->ks_prefix) {
 case 0x00:
  switch(VAR_19) {
  case 0xB8:
   if (VAR_17->ks_flags & VAR_1) {
    VAR_17->ks_flags &= ~VAR_1;
    if (VAR_17->ks_composed_char > VAR_13)
     VAR_17->ks_composed_char = 0;
   }
   break;
  case 0x38:
   if (!(VAR_17->ks_flags & VAR_1)) {
    VAR_17->ks_flags |= VAR_1;
    VAR_17->ks_composed_char = 0;
   }
   break;
  case 0xE0:
  case 0xE1:
   VAR_17->ks_prefix = VAR_19;
   goto next_code;
  }
  break;
 case 0xE0:
  VAR_17->ks_prefix = 0;
  switch (VAR_20) {
  case 0x1C:
   VAR_20 = 0x59;
   break;
  case 0x1D:
   VAR_20 = 0x5A;
   break;
  case 0x35:
   VAR_20 = 0x5B;
   break;
  case 0x37:
   VAR_20 = 0x5C;
   break;
  case 0x38:
   VAR_20 = 0x5D;
   break;
  case 0x46:
   VAR_20 = 0x68;
   break;
  case 0x47:
   VAR_20 = 0x5E;
   break;
  case 0x48:
   VAR_20 = 0x5F;
   break;
  case 0x49:
   VAR_20 = 0x60;
   break;
  case 0x4B:
   VAR_20 = 0x61;
   break;
  case 0x4D:
   VAR_20 = 0x62;
   break;
  case 0x4F:
   VAR_20 = 0x63;
   break;
  case 0x50:
   VAR_20 = 0x64;
   break;
  case 0x51:
   VAR_20 = 0x65;
   break;
  case 0x52:
   VAR_20 = 0x66;
   break;
  case 0x53:
   VAR_20 = 0x67;
   break;

  case 0x5b:
   VAR_20 = 0x69;
   break;
  case 0x5c:
   VAR_20 = 0x6a;
   break;
  case 0x5d:
   VAR_20 = 0x6b;
   break;
  case 0x5e:
   VAR_20 = 0x6d;
   break;
  case 0x5f:
   VAR_20 = 0x6e;
   break;
  case 0x63:
   VAR_20 = 0x6f;
   break;
  default:
   goto next_code;
  }
  break;
    case 0xE1:






  VAR_17->ks_prefix = 0;
  if (VAR_20 == 0x1D)
   VAR_17->ks_prefix = 0x1D;
  goto next_code;

    case 0x1D:
  VAR_17->ks_prefix = 0;
  if (VAR_20 != 0x45)
   goto next_code;
  VAR_20 = 0x68;
  break;
 }

 if (VAR_15->kb_type == VAR_7) {
  switch (VAR_20) {
  case 0x37:
   if (VAR_17->ks_flags & VAR_12)
    VAR_20 = 0x5c;
   break;
  case 0x45:
   if (VAR_17->ks_flags & VAR_2)
    VAR_20 = 0x68;
   break;
  case 0x46:
   if (VAR_17->ks_flags & VAR_2)
    VAR_20 = 0x6c;
   break;
  }
 } else if (VAR_15->kb_type == VAR_6) {
  switch (VAR_20) {
  case 0x5c:
   if (VAR_17->ks_flags & VAR_0)
    VAR_20 = 0x54;
   break;
  case 0x68:
   if (VAR_17->ks_flags & VAR_2)
    VAR_20 = 0x6c;
   break;
  }
 }


 if (VAR_17->ks_mode == VAR_9)
  return (VAR_20 | (VAR_19 & 0x80));


 if (VAR_17->ks_flags & VAR_1) {
  switch (VAR_20 | (VAR_19 & 0x80)) {

  case 0x47: case 0x48: case 0x49:
   VAR_17->ks_composed_char *= 10;
   VAR_17->ks_composed_char += VAR_20 - 0x40;
   if (VAR_17->ks_composed_char > VAR_13)
    return VAR_3;
   goto next_code;
  case 0x4B: case 0x4C: case 0x4D:
   VAR_17->ks_composed_char *= 10;
   VAR_17->ks_composed_char += VAR_20 - 0x47;
   if (VAR_17->ks_composed_char > VAR_13)
    return VAR_3;
   goto next_code;
  case 0x4F: case 0x50: case 0x51:
   VAR_17->ks_composed_char *= 10;
   VAR_17->ks_composed_char += VAR_20 - 0x4E;
   if (VAR_17->ks_composed_char > VAR_13)
    return VAR_3;
   goto next_code;
  case 0x52:
   VAR_17->ks_composed_char *= 10;
   if (VAR_17->ks_composed_char > VAR_13)
    return VAR_3;
   goto next_code;


  case 0xC7: case 0xC8: case 0xC9:
  case 0xCB: case 0xCC: case 0xCD:
  case 0xCF: case 0xD0: case 0xD1:
  case 0xD2:
   goto next_code;

  case 0x38:
   break;

  default:
   if (VAR_17->ks_composed_char > 0) {
    VAR_17->ks_flags &= ~VAR_1;
    VAR_17->ks_composed_char = 0;
    return VAR_3;
   }
   break;
  }
 }


 VAR_18 = FUNC_3(VAR_15, VAR_20, VAR_19 & 0x80,
      &VAR_17->ks_state, &VAR_17->ks_accents);
 if (VAR_18 == VAR_11)
  goto next_code;
 else
  return VAR_18;
}
