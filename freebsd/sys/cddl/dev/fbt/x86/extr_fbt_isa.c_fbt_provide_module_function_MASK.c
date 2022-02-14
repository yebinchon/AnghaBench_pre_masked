
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_9__ {char* name; int size; scalar_t__ value; } ;
typedef TYPE_1__ linker_symval_t ;
typedef TYPE_2__* linker_file_t ;
struct TYPE_11__ {char const* fbtp_name; scalar_t__* fbtp_patchpoint; int fbtp_symindx; uintptr_t fbtp_roffset; struct TYPE_11__* fbtp_hashnext; void* fbtp_patchval; scalar_t__ fbtp_savedval; int fbtp_rval; int fbtp_loadcnt; TYPE_2__* fbtp_ctl; void* fbtp_id; struct TYPE_11__* fbtp_probenext; struct TYPE_11__* fbtp_tracenext; } ;
typedef TYPE_3__ fbt_probe_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_10__ {int fbt_nentries; int loadcnt; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_1 (scalar_t__*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 void* VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (scalar_t__*) ;
 void* FUNC_3 (int ,char*,char const*,int ,int,TYPE_3__*) ;
 scalar_t__ FUNC_4 (char const*) ;
 int VAR_19 ;
 TYPE_3__** VAR_20 ;
 TYPE_3__* FUNC_5 (int,int ,int) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

int
FUNC_7(linker_file_t VAR_21, int VAR_22,
    linker_symval_t *VAR_23, void *VAR_24)
{
 char *VAR_25 = VAR_24;
 const char *VAR_26 = VAR_23->name;
 fbt_probe_t *VAR_27, *VAR_28, *VAR_29;
 int VAR_30;
 int VAR_31;
 uint8_t *VAR_32, *VAR_33;

 if (FUNC_4(VAR_26))
  return (0);





 if (FUNC_6(VAR_26, "trap_check") == 0)
  return (0);

 VAR_31 = VAR_23->size;

 VAR_32 = (uint8_t *) VAR_23->value;
 VAR_33 = (uint8_t *) VAR_23->value + VAR_23->size;


 while (VAR_32 < VAR_33) {
  if (*VAR_32 == VAR_12)
   break;

  if ((VAR_31 = FUNC_2(VAR_32)) <= 0)
   break;

  VAR_32 += VAR_31;
 }

 if (VAR_32 >= VAR_33 || *VAR_32 != VAR_12) {





  return (0);
 }
 VAR_27 = FUNC_5(sizeof (fbt_probe_t), VAR_16, VAR_17 | VAR_18);
 VAR_27->fbtp_name = VAR_26;
 VAR_27->fbtp_id = FUNC_3(VAR_19, VAR_25,
     VAR_26, VAR_4, 3, VAR_27);
 VAR_27->fbtp_patchpoint = VAR_32;
 VAR_27->fbtp_ctl = VAR_21;
 VAR_27->fbtp_loadcnt = VAR_21->loadcnt;
 VAR_27->fbtp_rval = VAR_2;
 VAR_27->fbtp_savedval = *VAR_32;
 VAR_27->fbtp_patchval = VAR_10;
 VAR_27->fbtp_symindx = VAR_22;

 for (VAR_28 = VAR_20[FUNC_1(VAR_32)]; VAR_28 != ((void*)0);
     VAR_28 = VAR_28->fbtp_hashnext) {
  if (VAR_28->fbtp_patchpoint == VAR_27->fbtp_patchpoint) {
   VAR_27->fbtp_tracenext = VAR_28->fbtp_tracenext;
   VAR_28->fbtp_tracenext = VAR_27;
   break;
  }
 }
 if (VAR_28 == ((void*)0)) {
  VAR_27->fbtp_hashnext = VAR_20[FUNC_1(VAR_32)];
  VAR_20[FUNC_1(VAR_32)] = VAR_27;
 }

 VAR_21->fbt_nentries++;

 VAR_29 = ((void*)0);
again:
 if (VAR_32 >= VAR_33)
  return (0);






 if ((VAR_31 = FUNC_2(VAR_32)) <= 0)
  return (0);







 if (*VAR_32 != VAR_13) {
  VAR_32 += VAR_31;
  goto again;
 }
 for (VAR_30 = 0; VAR_30 < sizeof (uintptr_t); VAR_30++) {
  caddr_t VAR_34 = (caddr_t) VAR_32 - VAR_30;
  uint8_t *VAR_35;

  if (VAR_34 < VAR_23->value)
   break;

  if (VAR_34 + sizeof (caddr_t) > (caddr_t)VAR_33)
   continue;

  VAR_35 = *(uint8_t **)VAR_34;

  if (VAR_35 >= (uint8_t *) VAR_23->value && VAR_35 < VAR_33) {
   VAR_32 += VAR_31;
   goto again;
  }
 }




 VAR_27 = FUNC_5(sizeof (fbt_probe_t), VAR_16, VAR_17 | VAR_18);
 VAR_27->fbtp_name = VAR_26;

 if (VAR_29 == ((void*)0)) {
  VAR_27->fbtp_id = FUNC_3(VAR_19, VAR_25,
      VAR_26, VAR_14, 3, VAR_27);
 } else {
  VAR_29->fbtp_probenext = VAR_27;
  VAR_27->fbtp_id = VAR_29->fbtp_id;
 }

 VAR_29 = VAR_27;
 VAR_27->fbtp_patchpoint = VAR_32;
 VAR_27->fbtp_ctl = VAR_21;
 VAR_27->fbtp_loadcnt = VAR_21->loadcnt;
 VAR_27->fbtp_symindx = VAR_22;
 FUNC_0(*VAR_32 == VAR_13);
 VAR_27->fbtp_rval = VAR_3;
 VAR_27->fbtp_roffset =
     (uintptr_t)(VAR_32 - (uint8_t *) VAR_23->value);


 VAR_27->fbtp_savedval = *VAR_32;
 VAR_27->fbtp_patchval = VAR_10;
 VAR_27->fbtp_hashnext = VAR_20[FUNC_1(VAR_32)];
 VAR_20[FUNC_1(VAR_32)] = VAR_27;

 VAR_21->fbt_nentries++;

 VAR_32 += VAR_31;
 goto again;
}
