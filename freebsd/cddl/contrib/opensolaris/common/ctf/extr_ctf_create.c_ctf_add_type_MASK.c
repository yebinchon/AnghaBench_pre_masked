
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_65__ TYPE_9__ ;
typedef struct TYPE_64__ TYPE_8__ ;
typedef struct TYPE_63__ TYPE_7__ ;
typedef struct TYPE_62__ TYPE_6__ ;
typedef struct TYPE_61__ TYPE_5__ ;
typedef struct TYPE_60__ TYPE_4__ ;
typedef struct TYPE_59__ TYPE_3__ ;
typedef struct TYPE_58__ TYPE_2__ ;
typedef struct TYPE_57__ TYPE_1__ ;
typedef struct TYPE_56__ TYPE_10__ ;


typedef int ushort_t ;
typedef int uint_t ;
typedef int ssize_t ;
struct TYPE_59__ {scalar_t__ ctt_type; int ctt_info; int ctt_name; } ;
typedef TYPE_3__ ctf_type_t ;
typedef scalar_t__ ctf_id_t ;
struct TYPE_60__ {scalar_t__ h_type; } ;
typedef TYPE_4__ ctf_helem_t ;
typedef int ctf_hash_t ;
struct TYPE_61__ {scalar_t__ ctc_return; int ctc_flags; int ctc_argc; } ;
typedef TYPE_5__ ctf_funcinfo_t ;
struct TYPE_65__ {scalar_t__ dmd_type; } ;
struct TYPE_63__ {scalar_t__ ctr_contents; scalar_t__ ctr_index; int ctr_nelems; } ;
struct TYPE_58__ {TYPE_9__ dtu_members; TYPE_7__ dtu_enc; } ;
struct TYPE_57__ {int ctt_info; int ctt_size; int ctt_lsizelo; int ctt_lsizehi; } ;
struct TYPE_64__ {scalar_t__ dtd_type; TYPE_2__ dtd_u; TYPE_1__ dtd_data; int * dtd_name; } ;
struct TYPE_62__ {int ctf_flags; scalar_t__ ctf_dtoldid; TYPE_8__ ctf_dtdefs; int ctf_names; int ctf_enums; int ctf_unions; int ctf_structs; } ;
typedef TYPE_6__ ctf_file_t ;
typedef TYPE_7__ ctf_encoding_t ;
typedef TYPE_8__ ctf_dtdef_t ;
typedef TYPE_9__ ctf_dmdef_t ;
struct TYPE_56__ {scalar_t__ ctb_type; TYPE_8__* ctb_dtd; TYPE_6__* ctb_file; } ;
typedef TYPE_10__ ctf_bundle_t ;
typedef TYPE_7__ ctf_arinfo_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (TYPE_6__*,int ) ;
 int FUNC_6 (TYPE_6__*,int ) ;
 int FUNC_7 (TYPE_6__*,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_8 (TYPE_7__*,TYPE_7__*,int) ;
 scalar_t__ FUNC_9 (TYPE_6__*,int,TYPE_7__*) ;
 scalar_t__ FUNC_10 (TYPE_6__*,int,char const*) ;
 scalar_t__ FUNC_11 (TYPE_6__*,int,char const*,TYPE_7__*) ;
 scalar_t__ FUNC_12 (TYPE_6__*,int,char const*,int const) ;
 scalar_t__ FUNC_13 (TYPE_6__*,int,TYPE_5__*,int *) ;
 scalar_t__ FUNC_14 (TYPE_6__*,int,char const*,TYPE_8__**) ;
 scalar_t__ FUNC_15 (TYPE_6__*,int,char const*,TYPE_7__*) ;
 scalar_t__ FUNC_16 (TYPE_6__*,int,scalar_t__,int) ;
 scalar_t__ FUNC_17 (TYPE_6__*,int,char const*,scalar_t__) ;
 scalar_t__ FUNC_18 (TYPE_6__*,scalar_t__,TYPE_7__*) ;
 int FUNC_19 (TYPE_6__*,scalar_t__,int ,TYPE_10__*) ;
 int FUNC_20 (TYPE_6__*) ;
 TYPE_4__* FUNC_21 (int *,TYPE_6__*,char const*,int ) ;
 TYPE_9__* FUNC_22 (TYPE_9__*) ;
 TYPE_8__* FUNC_23 (TYPE_8__*) ;
 TYPE_3__* FUNC_24 (TYPE_6__**,scalar_t__) ;
 int FUNC_25 (TYPE_6__*,scalar_t__,int ,TYPE_10__*) ;
 int FUNC_26 (TYPE_6__*,scalar_t__) ;
 scalar_t__ FUNC_27 (TYPE_6__*,int ) ;
 char* FUNC_28 (TYPE_6__*,int ) ;
 scalar_t__ FUNC_29 (TYPE_6__*,scalar_t__,TYPE_7__*) ;
 int FUNC_30 (TYPE_6__*,scalar_t__) ;
 scalar_t__ FUNC_31 (TYPE_6__*,scalar_t__) ;
 int FUNC_32 (TYPE_6__*,scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_33 (int *,char const*) ;
 int FUNC_34 (char const*) ;

ctf_id_t
FUNC_35(ctf_file_t *VAR_13, ctf_file_t *VAR_14, ctf_id_t VAR_15)
{
 ctf_id_t VAR_16 = VAR_1;
 uint_t VAR_17 = VAR_2;

 const ctf_type_t *VAR_18;
 const char *VAR_19;
 uint_t VAR_20, VAR_21, VAR_22;

 ctf_bundle_t VAR_23, VAR_24;
 ctf_encoding_t VAR_25, VAR_26;
 ctf_arinfo_t VAR_27, VAR_28;

 ctf_dtdef_t *VAR_29;
 ctf_funcinfo_t VAR_30;
 ssize_t VAR_31;

 ctf_hash_t *VAR_32;
 ctf_helem_t *VAR_33;

 if (VAR_13 == VAR_14)
  return (VAR_15);

 if (!(VAR_13->ctf_flags & VAR_8))
  return (FUNC_27(VAR_13, VAR_7));

 if ((VAR_18 = FUNC_24(&VAR_14, VAR_15)) == ((void*)0))
  return (FUNC_27(VAR_13, FUNC_20(VAR_14)));

 VAR_19 = FUNC_28(VAR_14, VAR_18->ctt_name);
 VAR_20 = FUNC_5(VAR_14, VAR_18->ctt_info);
 VAR_21 = FUNC_6(VAR_14, VAR_18->ctt_info);
 VAR_22 = FUNC_7(VAR_14, VAR_18->ctt_info);

 switch (VAR_20) {
 case 131:
  VAR_32 = &VAR_13->ctf_structs;
  break;
 case 129:
  VAR_32 = &VAR_13->ctf_unions;
  break;
 case 138:
  VAR_32 = &VAR_13->ctf_enums;
  break;
 default:
  VAR_32 = &VAR_13->ctf_names;
  break;
 }






 if ((VAR_21 & VAR_0) && VAR_19[0] != '\0' &&
     (VAR_33 = FUNC_21(VAR_32, VAR_13, VAR_19, FUNC_34(VAR_19))) != ((void*)0)) {
  VAR_16 = (ctf_id_t)VAR_33->h_type;
  VAR_17 = FUNC_30(VAR_13, VAR_16);
 }






 if (VAR_16 != VAR_1 && VAR_17 != VAR_20) {
  if (VAR_17 != 136 || (VAR_20 != 138 &&
      VAR_20 != 131 && VAR_20 != 129))
   return (FUNC_27(VAR_13, VAR_5));
  else
   VAR_16 = VAR_1;
 }
 if (VAR_16 == VAR_1 && VAR_19[0] != '\0') {
  for (VAR_29 = FUNC_23(&VAR_13->ctf_dtdefs); VAR_29 != ((void*)0) &&
      FUNC_4(VAR_29->dtd_type) > VAR_13->ctf_dtoldid;
      VAR_29 = FUNC_23(VAR_29)) {
   if (FUNC_0(VAR_29->dtd_data.ctt_info) != VAR_20 ||
       VAR_29->dtd_name == ((void*)0) ||
       FUNC_33(VAR_29->dtd_name, VAR_19) != 0)
    continue;
   if (VAR_20 == 134 || VAR_20 == 137) {
    if (FUNC_29(VAR_14, VAR_15,
        &VAR_25) != 0)
     continue;
    if (FUNC_8(&VAR_25, &VAR_29->dtd_u.dtu_enc,
        sizeof (ctf_encoding_t)) != 0)
     continue;
   }
   return (VAR_29->dtd_type);
  }
 }

 VAR_23.ctb_file = VAR_14;
 VAR_23.ctb_type = VAR_15;
 VAR_23.ctb_dtd = ((void*)0);

 VAR_24.ctb_file = VAR_13;
 VAR_24.ctb_type = VAR_16;
 VAR_24.ctb_dtd = ((void*)0);







 switch (VAR_20) {
 case 134:
 case 137:
  if (FUNC_29(VAR_14, VAR_15, &VAR_25) != 0)
   return (FUNC_27(VAR_13, FUNC_20(VAR_14)));

  if (VAR_16 != VAR_1) {
   if (FUNC_29(VAR_13, VAR_16, &VAR_26) != 0)
    return (VAR_1);

   if (FUNC_8(&VAR_25, &VAR_26, sizeof (ctf_encoding_t)))
    return (FUNC_27(VAR_13, VAR_5));

  } else if (VAR_20 == 134) {
   VAR_16 = FUNC_15(VAR_13, VAR_21, VAR_19, &VAR_25);
  } else
   VAR_16 = FUNC_11(VAR_13, VAR_21, VAR_19, &VAR_25);
  break;

 case 133:
 case 128:
 case 139:
 case 132:
  VAR_15 = FUNC_31(VAR_14, VAR_15);
  VAR_15 = FUNC_35(VAR_13, VAR_14, VAR_15);

  if (VAR_15 == VAR_1)
   return (VAR_1);

  VAR_16 = FUNC_16(VAR_13, VAR_21, VAR_15, VAR_20);
  break;

 case 140:
  if (FUNC_18(VAR_14, VAR_15, &VAR_27) == VAR_1)
   return (FUNC_27(VAR_13, FUNC_20(VAR_14)));

  VAR_27.ctr_contents =
      FUNC_35(VAR_13, VAR_14, VAR_27.ctr_contents);
  VAR_27.ctr_index =
      FUNC_35(VAR_13, VAR_14, VAR_27.ctr_index);
  VAR_27.ctr_nelems = VAR_27.ctr_nelems;

  if (VAR_27.ctr_contents == VAR_1 ||
      VAR_27.ctr_index == VAR_1)
   return (VAR_1);

  if (VAR_16 != VAR_1) {
   if (FUNC_18(VAR_13, VAR_16, &VAR_28) != 0)
    return (VAR_1);

   if (FUNC_8(&VAR_27, &VAR_28, sizeof (ctf_arinfo_t)))
    return (FUNC_27(VAR_13, VAR_5));
  } else
   VAR_16 = FUNC_9(VAR_13, VAR_21, &VAR_27);
  break;

 case 135:
  VAR_30.ctc_return = FUNC_35(VAR_13, VAR_14, VAR_18->ctt_type);
  VAR_30.ctc_argc = 0;
  VAR_30.ctc_flags = 0;

  if (VAR_30.ctc_return == VAR_1)
   return (VAR_1);

  VAR_16 = FUNC_13(VAR_13, VAR_21, &VAR_30, ((void*)0));
  break;

 case 131:
 case 129: {
  ctf_dmdef_t *VAR_34;
  int VAR_35 = 0;
  if (VAR_16 != VAR_1 && VAR_17 != 136) {
   if (FUNC_32(VAR_14, VAR_15) !=
       FUNC_32(VAR_13, VAR_16))
    return (FUNC_27(VAR_13, VAR_5));

   if (FUNC_25(VAR_14, VAR_15, VAR_12, &VAR_24))
    return (FUNC_27(VAR_13, VAR_5));

   break;
  }






  VAR_16 = FUNC_14(VAR_13, VAR_21, VAR_19, &VAR_29);
  if (VAR_16 == VAR_1)
   return (VAR_1);

  VAR_24.ctb_type = VAR_16;
  VAR_24.ctb_dtd = VAR_29;

  if (FUNC_25(VAR_14, VAR_15, VAR_11, &VAR_24) != 0)
   VAR_35++;

  if ((VAR_31 = FUNC_32(VAR_14, VAR_15)) > VAR_4) {
   VAR_29->dtd_data.ctt_size = VAR_3;
   VAR_29->dtd_data.ctt_lsizehi = FUNC_1(VAR_31);
   VAR_29->dtd_data.ctt_lsizelo = FUNC_2(VAR_31);
  } else
   VAR_29->dtd_data.ctt_size = (ushort_t)VAR_31;

  VAR_29->dtd_data.ctt_info = FUNC_3(VAR_20, VAR_21, VAR_22);






  for (VAR_34 = FUNC_22(&VAR_29->dtd_u.dtu_members);
      VAR_34 != ((void*)0); VAR_34 = FUNC_22(VAR_34)) {
   if ((VAR_34->dmd_type = FUNC_35(VAR_13, VAR_14,
       VAR_34->dmd_type)) == VAR_1)
    VAR_35++;
  }

  if (VAR_35)
   return (VAR_1);





  for (VAR_34 = FUNC_22(&VAR_29->dtd_u.dtu_members);
      VAR_34 != ((void*)0); VAR_34 = FUNC_22(VAR_34))
   FUNC_26(VAR_13, VAR_34->dmd_type);
  break;
 }

 case 138:
  if (VAR_16 != VAR_1 && VAR_17 != 136) {
   if (FUNC_19(VAR_14, VAR_15, VAR_10, &VAR_24) ||
       FUNC_19(VAR_13, VAR_16, VAR_10, &VAR_23))
    return (FUNC_27(VAR_13, VAR_5));
  } else {
   VAR_16 = FUNC_10(VAR_13, VAR_21, VAR_19);
   if ((VAR_24.ctb_type = VAR_16) == VAR_1 ||
       FUNC_19(VAR_14, VAR_15, VAR_9, &VAR_24))
    return (VAR_1);
  }
  break;

 case 136:
  if (VAR_16 == VAR_1) {
   VAR_16 = FUNC_12(VAR_13,
       VAR_21, VAR_19, 131);
  }
  break;

 case 130:
  VAR_15 = FUNC_31(VAR_14, VAR_15);
  VAR_15 = FUNC_35(VAR_13, VAR_14, VAR_15);

  if (VAR_15 == VAR_1)
   return (VAR_1);
  if (VAR_16 == VAR_1) {
   VAR_16 = FUNC_17(VAR_13, VAR_21,
       VAR_19, VAR_15);
  }
  break;

 default:
  return (FUNC_27(VAR_13, VAR_6));
 }

 return (VAR_16);
}
