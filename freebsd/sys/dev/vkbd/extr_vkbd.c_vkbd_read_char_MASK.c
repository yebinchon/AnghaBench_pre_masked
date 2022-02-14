
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int ks_flags; scalar_t__ ks_composed_char; scalar_t__ ks_mode; int ks_prefix; int ks_accents; int ks_state; } ;
typedef TYPE_1__ vkbd_state_t ;
typedef int u_int ;
struct TYPE_9__ {scalar_t__ kb_type; int kb_count; scalar_t__ kb_data; } ;
typedef TYPE_2__ keyboard_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,int,int,int *,int *) ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static u_int
FUNC_4(keyboard_t *VAR_11, int VAR_12)
{
 vkbd_state_t *VAR_13 = (vkbd_state_t *) VAR_11->kb_data;
 u_int VAR_14;
 int VAR_15, VAR_16;

 FUNC_0(VAR_13);

next_code:


 if (!(VAR_13->ks_flags & VAR_1) && (VAR_13->ks_composed_char > 0)) {
  VAR_14 = VAR_13->ks_composed_char;
  VAR_13->ks_composed_char = 0;
  if (VAR_14 > VAR_10) {
   FUNC_1(VAR_13);
   return (VAR_3);
  }

  FUNC_1(VAR_13);
  return (VAR_14);
 }


 VAR_15 = FUNC_3(VAR_13, VAR_12);
 if (VAR_15 == -1) {
  FUNC_1(VAR_13);
  return (VAR_8);
 }


 VAR_11->kb_count ++;


 if (VAR_13->ks_mode == VAR_7) {
  FUNC_1(VAR_13);
  return (VAR_15);
 }


 VAR_16 = VAR_15 & 0x7F;
 switch (VAR_13->ks_prefix) {
 case 0x00:
  switch(VAR_15) {
  case 0xB8:
   if (VAR_13->ks_flags & VAR_1) {
    VAR_13->ks_flags &= ~VAR_1;
    if (VAR_13->ks_composed_char > VAR_10)
     VAR_13->ks_composed_char = 0;
   }
   break;
  case 0x38:
   if (!(VAR_13->ks_flags & VAR_1)) {
    VAR_13->ks_flags |= VAR_1;
    VAR_13->ks_composed_char = 0;
   }
   break;
  case 0xE0:
  case 0xE1:
   VAR_13->ks_prefix = VAR_15;
   goto next_code;
  }
  break;
 case 0xE0:
  VAR_13->ks_prefix = 0;
  switch (VAR_16) {
  case 0x1C:
   VAR_16 = 0x59;
   break;
  case 0x1D:
   VAR_16 = 0x5A;
   break;
  case 0x35:
   VAR_16 = 0x5B;
   break;
  case 0x37:
   VAR_16 = 0x5C;
   break;
  case 0x38:
   VAR_16 = 0x5D;
   break;
  case 0x46:
   VAR_16 = 0x68;
   break;
  case 0x47:
   VAR_16 = 0x5E;
   break;
  case 0x48:
   VAR_16 = 0x5F;
   break;
  case 0x49:
   VAR_16 = 0x60;
   break;
  case 0x4B:
   VAR_16 = 0x61;
   break;
  case 0x4D:
   VAR_16 = 0x62;
   break;
  case 0x4F:
   VAR_16 = 0x63;
   break;
  case 0x50:
   VAR_16 = 0x64;
   break;
  case 0x51:
   VAR_16 = 0x65;
   break;
  case 0x52:
   VAR_16 = 0x66;
   break;
  case 0x53:
   VAR_16 = 0x67;
   break;

  case 0x5b:
   VAR_16 = 0x69;
   break;
  case 0x5c:
   VAR_16 = 0x6a;
   break;
  case 0x5d:
   VAR_16 = 0x6b;
   break;
  case 0x5e:
   VAR_16 = 0x6d;
   break;
  case 0x5f:
   VAR_16 = 0x6e;
   break;
  case 0x63:
   VAR_16 = 0x6f;
   break;
  default:
   goto next_code;
  }
  break;
 case 0xE1:






  VAR_13->ks_prefix = 0;
  if (VAR_16 == 0x1D)
   VAR_13->ks_prefix = 0x1D;
  goto next_code;

 case 0x1D:
  VAR_13->ks_prefix = 0;
  if (VAR_16 != 0x45)
   goto next_code;
  VAR_16 = 0x68;
  break;
 }

 if (VAR_11->kb_type == VAR_5) {
  switch (VAR_16) {
  case 0x37:
   if (VAR_13->ks_flags & VAR_9)
    VAR_16 = 0x5c;
   break;
  case 0x45:
   if (VAR_13->ks_flags & VAR_2)
    VAR_16 = 0x68;
   break;
  case 0x46:
   if (VAR_13->ks_flags & VAR_2)
    VAR_16 = 0x6c;
   break;
  }
 } else if (VAR_11->kb_type == VAR_4) {
  switch (VAR_16) {
  case 0x5c:
   if (VAR_13->ks_flags & VAR_0)
    VAR_16 = 0x54;
   break;
  case 0x68:
   if (VAR_13->ks_flags & VAR_2)
    VAR_16 = 0x6c;
   break;
  }
 }


 if (VAR_13->ks_mode == VAR_6) {
  FUNC_1(VAR_13);
  return (VAR_16 | (VAR_15 & 0x80));
 }


 if (VAR_13->ks_flags & VAR_1) {
  switch (VAR_16 | (VAR_15 & 0x80)) {

  case 0x47: case 0x48: case 0x49:
   VAR_13->ks_composed_char *= 10;
   VAR_13->ks_composed_char += VAR_16 - 0x40;
   if (VAR_13->ks_composed_char > VAR_10) {
    FUNC_1(VAR_13);
    return (VAR_3);
   }
   goto next_code;
  case 0x4B: case 0x4C: case 0x4D:
   VAR_13->ks_composed_char *= 10;
   VAR_13->ks_composed_char += VAR_16 - 0x47;
   if (VAR_13->ks_composed_char > VAR_10) {
    FUNC_1(VAR_13);
    return (VAR_3);
   }
   goto next_code;
  case 0x4F: case 0x50: case 0x51:
   VAR_13->ks_composed_char *= 10;
   VAR_13->ks_composed_char += VAR_16 - 0x4E;
   if (VAR_13->ks_composed_char > VAR_10) {
    FUNC_1(VAR_13);
    return (VAR_3);
   }
   goto next_code;
  case 0x52:
   VAR_13->ks_composed_char *= 10;
   if (VAR_13->ks_composed_char > VAR_10) {
    FUNC_1(VAR_13);
    return (VAR_3);
   }
   goto next_code;


  case 0xC7: case 0xC8: case 0xC9:
  case 0xCB: case 0xCC: case 0xCD:
  case 0xCF: case 0xD0: case 0xD1:
  case 0xD2:
   goto next_code;

  case 0x38:
   break;

  default:
   if (VAR_13->ks_composed_char > 0) {
    VAR_13->ks_flags &= ~VAR_1;
    VAR_13->ks_composed_char = 0;
    FUNC_1(VAR_13);
    return (VAR_3);
   }
   break;
  }
 }


 VAR_14 = FUNC_2(VAR_11, VAR_16, VAR_15 & 0x80,
   &VAR_13->ks_state, &VAR_13->ks_accents);
 if (VAR_14 == VAR_8)
  goto next_code;

 FUNC_1(VAR_13);

 return (VAR_14);
}
