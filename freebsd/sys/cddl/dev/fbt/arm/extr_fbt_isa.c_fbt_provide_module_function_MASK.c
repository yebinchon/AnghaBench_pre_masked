
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
 size_t FUNC_0 (int*) ;
 void* VAR_3 ;
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
 void* FUNC_1 (int ,char*,char const*,int ,int,TYPE_3__*) ;
 scalar_t__ FUNC_2 (char const*) ;
 int VAR_14 ;
 void** VAR_15 ;
 TYPE_3__* FUNC_3 (int,int ,int) ;

int
FUNC_4(linker_file_t VAR_16, int VAR_17,
    linker_symval_t *VAR_18, void *VAR_19)
{
 char *VAR_20 = VAR_19;
 const char *VAR_21 = VAR_18->name;
 fbt_probe_t *VAR_22, *VAR_23;
 uint32_t *VAR_24, *VAR_25;
 int VAR_26;

 if (FUNC_2(VAR_21))
  return (0);

 VAR_24 = (uint32_t *)VAR_18->value;
 VAR_25 = (uint32_t *)(VAR_18->value + VAR_18->size);





 if ((*VAR_24 & 0xfffff000) == VAR_9)
  VAR_24++;




 if ((*VAR_24 & 0xffff0000) != VAR_7 ||
     (*VAR_24 & (1 << VAR_10)) == 0)
  return (0);

 VAR_22 = FUNC_3(sizeof (fbt_probe_t), VAR_11, VAR_12 | VAR_13);
 VAR_22->fbtp_name = VAR_21;
 VAR_22->fbtp_id = FUNC_1(VAR_14, VAR_20,
     VAR_21, VAR_4, 2, VAR_22);
 VAR_22->fbtp_patchpoint = VAR_24;
 VAR_22->fbtp_ctl = VAR_16;
 VAR_22->fbtp_loadcnt = VAR_16->loadcnt;
 VAR_22->fbtp_savedval = *VAR_24;
 VAR_22->fbtp_patchval = VAR_3;
 VAR_22->fbtp_rval = VAR_2;
 VAR_22->fbtp_symindx = VAR_17;

 VAR_22->fbtp_hashnext = VAR_15[FUNC_0(VAR_24)];
 VAR_15[FUNC_0(VAR_24)] = VAR_22;

 VAR_16->fbt_nentries++;

 VAR_26 = VAR_6 | ((*VAR_24) & 0x3FFF) | 0x8000;

 VAR_23 = ((void*)0);
again:
 for (; VAR_24 < VAR_25; VAR_24++) {
  if (*VAR_24 == VAR_26)
   break;
  else if ((*VAR_24 & 0xff000000) == VAR_5) {
   uint32_t *VAR_27, *VAR_28;
   int VAR_29;

   VAR_29 = (*VAR_24 & 0xffffff);
   VAR_29 <<= 8;
   VAR_29 /= 64;
   VAR_27 = VAR_24 + (2 + VAR_29);
   VAR_28 = (uint32_t *)VAR_18->value;
   if (VAR_27 >= VAR_25 || VAR_27 < VAR_28)
    break;
  }
 }

 if (VAR_24 >= VAR_25)
  return (0);




 VAR_22 = FUNC_3(sizeof (fbt_probe_t), VAR_11, VAR_12 | VAR_13);
 VAR_22->fbtp_name = VAR_21;
 if (VAR_23 == ((void*)0)) {
  VAR_22->fbtp_id = FUNC_1(VAR_14, VAR_20,
      VAR_21, VAR_8, 2, VAR_22);
 } else {
  VAR_23->fbtp_probenext = VAR_22;
  VAR_22->fbtp_id = VAR_23->fbtp_id;
 }
 VAR_23 = VAR_22;

 VAR_22->fbtp_patchpoint = VAR_24;
 VAR_22->fbtp_ctl = VAR_16;
 VAR_22->fbtp_loadcnt = VAR_16->loadcnt;
 VAR_22->fbtp_symindx = VAR_17;
 if ((*VAR_24 & 0xff000000) == VAR_5)
  VAR_22->fbtp_rval = VAR_0;
 else
  VAR_22->fbtp_rval = VAR_1;
 VAR_22->fbtp_savedval = *VAR_24;
 VAR_22->fbtp_patchval = VAR_3;
 VAR_22->fbtp_hashnext = VAR_15[FUNC_0(VAR_24)];
 VAR_15[FUNC_0(VAR_24)] = VAR_22;

 VAR_16->fbt_nentries++;

 VAR_24++;
 goto again;
}
