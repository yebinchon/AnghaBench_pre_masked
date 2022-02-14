
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {char* name; scalar_t__ value; scalar_t__ size; } ;
typedef TYPE_1__ linker_symval_t ;
typedef TYPE_2__* linker_file_t ;
struct TYPE_10__ {char const* fbtp_name; int* fbtp_patchpoint; int fbtp_savedval; int fbtp_symindx; void* fbtp_hashnext; void* fbtp_patchval; int fbtp_rval; int fbtp_loadcnt; TYPE_2__* fbtp_ctl; void* fbtp_id; struct TYPE_10__* fbtp_probenext; } ;
typedef TYPE_3__ fbt_probe_t ;
struct TYPE_9__ {int fbt_nentries; int loadcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_0 (int*) ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* FUNC_1 (int ,char*,char const*,int ,int,TYPE_3__*) ;
 scalar_t__ FUNC_2 (char const*) ;
 int VAR_15 ;
 void** VAR_16 ;
 TYPE_3__* FUNC_3 (int,int ,int) ;

int
FUNC_4(linker_file_t VAR_17, int VAR_18,
    linker_symval_t *VAR_19, void *VAR_20)
{
 fbt_probe_t *VAR_21, *VAR_22;
 uint32_t *VAR_23, *VAR_24;
 uint32_t *VAR_25, *VAR_26;
 const char *VAR_27;
 char *VAR_28;
 int VAR_29;

 VAR_28 = VAR_20;
 VAR_27 = VAR_19->name;


 if (FUNC_2(VAR_27))
  return (0);

 VAR_25 = (uint32_t *)(VAR_19->value);
 VAR_26 = (uint32_t *)(VAR_19->value + VAR_19->size);


 for (; VAR_25 < VAR_26; VAR_25++) {
  if ((*VAR_25 & VAR_9) == VAR_14)
   break;
 }

 if (VAR_25 >= VAR_26)
  return (0);

 VAR_21 = FUNC_3(sizeof (fbt_probe_t), VAR_10, VAR_11 | VAR_12);
 VAR_21->fbtp_name = VAR_27;
 VAR_21->fbtp_id = FUNC_1(VAR_15, VAR_28,
     VAR_27, VAR_6, 3, VAR_21);
 VAR_21->fbtp_patchpoint = VAR_25;
 VAR_21->fbtp_ctl = VAR_17;
 VAR_21->fbtp_loadcnt = VAR_17->loadcnt;
 VAR_21->fbtp_savedval = *VAR_25;
 VAR_21->fbtp_patchval = VAR_7;
 VAR_21->fbtp_rval = VAR_4;
 VAR_21->fbtp_symindx = VAR_18;

 VAR_21->fbtp_hashnext = VAR_16[FUNC_0(VAR_25)];
 VAR_16[FUNC_0(VAR_25)] = VAR_21;

 VAR_17->fbt_nentries++;

 VAR_22 = ((void*)0);
again:
 for (; VAR_25 < VAR_26; VAR_25++) {
  if (*VAR_25 == VAR_13)
   break;
  else if ((*VAR_25 & VAR_2) == VAR_1) {
   VAR_29 = (*VAR_25 & VAR_0);
   VAR_29 *= 4;
   VAR_23 = (VAR_25 + VAR_29);
   VAR_24 = (uint32_t *)VAR_19->value;
   if (VAR_23 >= VAR_26 || VAR_23 < VAR_24)
    break;
  }
 }

 if (VAR_25 >= VAR_26)
  return (0);




 VAR_21 = FUNC_3(sizeof (fbt_probe_t), VAR_10, VAR_11 | VAR_12);
 VAR_21->fbtp_name = VAR_27;
 if (VAR_22 == ((void*)0)) {
  VAR_21->fbtp_id = FUNC_1(VAR_15, VAR_28,
      VAR_27, VAR_8, 3, VAR_21);
 } else {
  VAR_22->fbtp_probenext = VAR_21;
  VAR_21->fbtp_id = VAR_22->fbtp_id;
 }
 VAR_22 = VAR_21;

 VAR_21->fbtp_patchpoint = VAR_25;
 VAR_21->fbtp_ctl = VAR_17;
 VAR_21->fbtp_loadcnt = VAR_17->loadcnt;
 VAR_21->fbtp_symindx = VAR_18;
 if ((*VAR_25 & VAR_2) == VAR_1)
  VAR_21->fbtp_rval = VAR_3;
 else
  VAR_21->fbtp_rval = VAR_5;
 VAR_21->fbtp_savedval = *VAR_25;
 VAR_21->fbtp_patchval = VAR_7;
 VAR_21->fbtp_hashnext = VAR_16[FUNC_0(VAR_25)];
 VAR_16[FUNC_0(VAR_25)] = VAR_21;

 VAR_17->fbt_nentries++;

 VAR_25++;
 goto again;
}
