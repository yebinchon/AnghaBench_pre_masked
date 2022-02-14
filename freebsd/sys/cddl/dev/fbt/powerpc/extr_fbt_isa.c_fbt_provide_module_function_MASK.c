
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_8__ {char* name; scalar_t__ value; scalar_t__ size; } ;
typedef TYPE_1__ linker_symval_t ;
typedef TYPE_2__* linker_file_t ;
struct TYPE_10__ {char const* fbtp_name; scalar_t__* fbtp_patchpoint; int fbtp_symindx; uintptr_t fbtp_roffset; void* fbtp_hashnext; void* fbtp_patchval; scalar_t__ fbtp_savedval; int fbtp_rval; int fbtp_loadcnt; TYPE_2__* fbtp_ctl; void* fbtp_id; struct TYPE_10__* fbtp_probenext; } ;
typedef TYPE_3__ fbt_probe_t ;
struct TYPE_9__ {int fbt_nentries; int loadcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (scalar_t__*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* FUNC_2 (int ,char*,char const*,int ,int ,TYPE_3__*) ;
 scalar_t__ FUNC_3 (char const*) ;
 int VAR_15 ;
 void** VAR_16 ;
 TYPE_3__* FUNC_4 (int,int ,int) ;

int
FUNC_5(linker_file_t VAR_17, int VAR_18,
    linker_symval_t *VAR_19, void *VAR_20)
{
 char *VAR_21 = VAR_20;
 const char *VAR_22 = VAR_19->name;
 fbt_probe_t *VAR_23, *VAR_24;
 int VAR_25;
 uint32_t *VAR_26, *VAR_27;
 if (FUNC_3(VAR_22))
  return (0);

 VAR_26 = (uint32_t *) VAR_19->value;
 VAR_27 = (uint32_t *) (VAR_19->value + VAR_19->size);

 for (; VAR_26 < VAR_27; VAR_26++)
  if (*VAR_26 == VAR_8)
   break;

 if (*VAR_26 != VAR_8)
  return (0);

 VAR_23 = FUNC_4(sizeof (fbt_probe_t), VAR_12, VAR_13 | VAR_14);
 VAR_23->fbtp_name = VAR_22;
 VAR_23->fbtp_id = FUNC_2(VAR_15, VAR_21,
     VAR_22, VAR_7, VAR_4, VAR_23);
 VAR_23->fbtp_patchpoint = VAR_26;
 VAR_23->fbtp_ctl = VAR_17;
 VAR_23->fbtp_loadcnt = VAR_17->loadcnt;
 VAR_23->fbtp_savedval = *VAR_26;
 VAR_23->fbtp_patchval = VAR_10;
 VAR_23->fbtp_rval = VAR_3;
 VAR_23->fbtp_symindx = VAR_18;

 VAR_23->fbtp_hashnext = VAR_16[FUNC_0(VAR_26)];
 VAR_16[FUNC_0(VAR_26)] = VAR_23;

 VAR_17->fbt_nentries++;

 VAR_24 = ((void*)0);
again:
 if (VAR_26 >= VAR_27)
  return (0);
 {
  uint32_t *VAR_28;

  VAR_28 = *(uint32_t **)VAR_26;

  if (VAR_28 >= (uint32_t *) VAR_19->value && VAR_28 < VAR_27) {
   VAR_26++;
   goto again;
  }
 }

 if (*VAR_26 != VAR_9) {
  VAR_26++;
  goto again;
 }

 VAR_26++;

 for (VAR_25 = 0; VAR_25 < 12 && VAR_26 < VAR_27; VAR_25++, VAR_26++) {
  if ((*VAR_26 == VAR_5) || (*VAR_26 == VAR_6) ||
      FUNC_1(*VAR_26))
   break;
 }

 if (!(*VAR_26 == VAR_5 || *VAR_26 == VAR_6 || FUNC_1(*VAR_26)))
  goto again;




 VAR_23 = FUNC_4(sizeof (fbt_probe_t), VAR_12, VAR_13 | VAR_14);
 VAR_23->fbtp_name = VAR_22;

 if (VAR_24 == ((void*)0)) {
  VAR_23->fbtp_id = FUNC_2(VAR_15, VAR_21,
      VAR_22, VAR_11, VAR_4, VAR_23);
 } else {
  VAR_24->fbtp_probenext = VAR_23;
  VAR_23->fbtp_id = VAR_24->fbtp_id;
 }

 VAR_24 = VAR_23;
 VAR_23->fbtp_patchpoint = VAR_26;
 VAR_23->fbtp_ctl = VAR_17;
 VAR_23->fbtp_loadcnt = VAR_17->loadcnt;
 VAR_23->fbtp_symindx = VAR_18;

 if (*VAR_26 == VAR_5)
  VAR_23->fbtp_rval = VAR_0;
 else if (*VAR_26 == VAR_6)
  VAR_23->fbtp_rval = VAR_1;
 else
  VAR_23->fbtp_rval = VAR_2;

 VAR_23->fbtp_roffset =
     (uintptr_t)((uint8_t *)VAR_26 - (uint8_t *)VAR_19->value);

 VAR_23->fbtp_savedval = *VAR_26;
 VAR_23->fbtp_patchval = VAR_10;
 VAR_23->fbtp_hashnext = VAR_16[FUNC_0(VAR_26)];
 VAR_16[FUNC_0(VAR_26)] = VAR_23;

 VAR_17->fbt_nentries++;

 VAR_26 += 4;
 goto again;
}
