
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_18__ ;


typedef int u_long ;
struct TYPE_28__ {TYPE_1__* key; int n_keys; } ;
typedef TYPE_2__ okeymap_t ;
struct TYPE_29__ {struct TYPE_29__* key; int flgs; int spcl; int * map; int n_keys; } ;
typedef TYPE_3__ keymap_t ;
struct TYPE_30__ {int kb_type; int kb_delay1; int kb_delay2; size_t kb_fkeytab_size; TYPE_18__* kb_fkeytab; TYPE_3__* kb_accentmap; TYPE_3__* kb_keymap; int kb_flags; int kb_config; int kb_unit; TYPE_3__* kb_name; int kb_index; } ;
typedef TYPE_4__ keyboard_t ;
struct TYPE_31__ {int kb_type; int kb_flags; int kb_config; int kb_unit; TYPE_3__* kb_name; int kb_index; } ;
typedef TYPE_5__ keyboard_info_t ;
struct TYPE_32__ {int keynum; TYPE_3__ key; } ;
typedef TYPE_6__ keyarg_t ;
struct TYPE_33__ {size_t keynum; int flen; TYPE_3__* keydef; } ;
typedef TYPE_7__ fkeyarg_t ;
typedef TYPE_3__* caddr_t ;
typedef int accentmap_t ;
struct TYPE_27__ {int flgs; int spcl; int * map; } ;
struct TYPE_26__ {int len; TYPE_3__* str; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;






 int FUNC_0 (TYPE_3__*,int *,int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (void*,TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*,void*,int) ;
 int VAR_8 ;
 int FUNC_5 (TYPE_18__*,TYPE_7__*,int ) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (TYPE_3__*,TYPE_3__*,int ) ;
 int FUNC_9 (TYPE_3__*,TYPE_3__*,int ) ;
 TYPE_3__* FUNC_10 (int,int ,int ) ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 () ;
 int FUNC_13 (int) ;
 int FUNC_14 (TYPE_3__*) ;

int
FUNC_15(keyboard_t *VAR_9, u_long VAR_10, caddr_t VAR_11)
{
 keymap_t *VAR_12;
 okeymap_t *VAR_13;
 keyarg_t *VAR_14;
 fkeyarg_t *VAR_15;
 int VAR_16;
 int VAR_17, VAR_18;
 int VAR_19;

 VAR_16 = FUNC_12();
 switch (VAR_10) {

 case 135:
  ((keyboard_info_t *)VAR_11)->kb_index = VAR_9->kb_index;
  VAR_17 = FUNC_7(FUNC_14(VAR_9->kb_name) + 1,
      sizeof(((keyboard_info_t *)VAR_11)->kb_name));
  FUNC_1(VAR_9->kb_name, ((keyboard_info_t *)VAR_11)->kb_name, VAR_17);
  ((keyboard_info_t *)VAR_11)->kb_unit = VAR_9->kb_unit;
  ((keyboard_info_t *)VAR_11)->kb_type = VAR_9->kb_type;
  ((keyboard_info_t *)VAR_11)->kb_config = VAR_9->kb_config;
  ((keyboard_info_t *)VAR_11)->kb_flags = VAR_9->kb_flags;
  break;

 case 134:
  *(int *)VAR_11 = VAR_9->kb_type;
  break;

 case 136:
  ((int *)VAR_11)[0] = VAR_9->kb_delay1;
  ((int *)VAR_11)[1] = VAR_9->kb_delay2;
  break;

 case 138:
  VAR_19 = FUNC_4(VAR_9->kb_keymap, *(void **)VAR_11,
      sizeof(keymap_t));
  FUNC_13(VAR_16);
  return (VAR_19);
 case 133:
  VAR_12 = VAR_9->kb_keymap;
  VAR_13 = (okeymap_t *)VAR_11;
  VAR_13->n_keys = VAR_12->n_keys;
  for (VAR_17 = 0; VAR_17 < VAR_6; VAR_17++) {
   for (VAR_18 = 0; VAR_18 < VAR_7; VAR_18++)
    VAR_13->key[VAR_17].map[VAR_18] =
        VAR_12->key[VAR_17].map[VAR_18];
   VAR_13->key[VAR_17].spcl = VAR_12->key[VAR_17].spcl;
   VAR_13->key[VAR_17].flgs = VAR_12->key[VAR_17].flgs;
  }
  break;
 case 130:
 case 132:

  VAR_12 = FUNC_10(sizeof *VAR_12, VAR_4, VAR_5);
  if (VAR_10 == 132) {
   VAR_13 = (okeymap_t *)VAR_11;
   VAR_12->n_keys = VAR_13->n_keys;
   for (VAR_17 = 0; VAR_17 < VAR_6; VAR_17++) {
    for (VAR_18 = 0; VAR_18 < VAR_7; VAR_18++)
     VAR_12->key[VAR_17].map[VAR_18] =
         VAR_13->key[VAR_17].map[VAR_18];
    VAR_12->key[VAR_17].spcl = VAR_13->key[VAR_17].spcl;
    VAR_12->key[VAR_17].flgs = VAR_13->key[VAR_17].flgs;
   }
  } else {
   VAR_19 = FUNC_3(*(void **)VAR_11, VAR_12, sizeof *VAR_12);
   if (VAR_19 != 0) {
    FUNC_13(VAR_16);
    FUNC_6(VAR_12, VAR_4);
    return (VAR_19);
   }
  }

  VAR_19 = FUNC_9(VAR_9->kb_keymap, VAR_12, VAR_8);
  if (VAR_19 != 0) {
   FUNC_13(VAR_16);
   FUNC_6(VAR_12, VAR_4);
   return (VAR_19);
  }
  FUNC_2(VAR_9->kb_accentmap, sizeof(*VAR_9->kb_accentmap));
  FUNC_1(VAR_12, VAR_9->kb_keymap, sizeof(*VAR_9->kb_keymap));
  FUNC_6(VAR_12, VAR_4);
  break;





 case 137:
  VAR_14 = (keyarg_t *)VAR_11;
  if (VAR_14->keynum >= sizeof(VAR_9->kb_keymap->key) /
      sizeof(VAR_9->kb_keymap->key[0])) {
   FUNC_13(VAR_16);
   return (VAR_0);
  }
  FUNC_1(&VAR_9->kb_keymap->key[VAR_14->keynum], &VAR_14->key,
      sizeof(VAR_14->key));
  break;
 case 129:

  VAR_14 = (keyarg_t *)VAR_11;
  if (VAR_14->keynum >= sizeof(VAR_9->kb_keymap->key) /
      sizeof(VAR_9->kb_keymap->key[0])) {
   FUNC_13(VAR_16);
   return (VAR_0);
  }
  VAR_19 = FUNC_8(&VAR_9->kb_keymap->key[VAR_14->keynum],
      &VAR_14->key, VAR_8);
  if (VAR_19 != 0) {
   FUNC_13(VAR_16);
   return (VAR_19);
  }
  FUNC_1(&VAR_14->key, &VAR_9->kb_keymap->key[VAR_14->keynum],
      sizeof(VAR_14->key));
  break;





 case 139:
  FUNC_1(VAR_9->kb_accentmap, VAR_11, sizeof(*VAR_9->kb_accentmap));
  break;
 case 131:

  VAR_19 = FUNC_0(VAR_9->kb_accentmap,
      (accentmap_t *)VAR_11, VAR_8);
  if (VAR_19 != 0) {
   FUNC_13(VAR_16);
   return (VAR_19);
  }
  FUNC_1(VAR_11, VAR_9->kb_accentmap, sizeof(*VAR_9->kb_accentmap));
  break;





 case 140:
  VAR_15 = (fkeyarg_t *)VAR_11;
  if (VAR_15->keynum >= VAR_9->kb_fkeytab_size) {
   FUNC_13(VAR_16);
   return (VAR_0);
  }
  FUNC_1(VAR_9->kb_fkeytab[VAR_15->keynum].str, VAR_15->keydef,
      VAR_9->kb_fkeytab[VAR_15->keynum].len);
  VAR_15->flen = VAR_9->kb_fkeytab[VAR_15->keynum].len;
  break;
 case 128:

  VAR_15 = (fkeyarg_t *)VAR_11;
  if (VAR_15->keynum >= VAR_9->kb_fkeytab_size) {
   FUNC_13(VAR_16);
   return (VAR_0);
  }
  VAR_19 = FUNC_5(&VAR_9->kb_fkeytab[VAR_15->keynum],
      VAR_15, VAR_8);
  if (VAR_19 != 0) {
   FUNC_13(VAR_16);
   return (VAR_19);
  }
  VAR_9->kb_fkeytab[VAR_15->keynum].len = FUNC_11(VAR_15->flen, VAR_3);
  FUNC_1(VAR_15->keydef, VAR_9->kb_fkeytab[VAR_15->keynum].str,
      VAR_9->kb_fkeytab[VAR_15->keynum].len);
  break;





 default:
  FUNC_13(VAR_16);
  return (VAR_2);
 }

 FUNC_13(VAR_16);
 return (0);
}
