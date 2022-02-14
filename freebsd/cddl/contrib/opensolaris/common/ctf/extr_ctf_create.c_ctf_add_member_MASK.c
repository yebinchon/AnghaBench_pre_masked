
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_20__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef scalar_t__ ushort_t ;
typedef scalar_t__ uint_t ;
typedef int ssize_t ;
typedef int ctf_id_t ;
struct TYPE_28__ {int ctf_flags; int ctf_dtstrlen; } ;
typedef TYPE_2__ ctf_file_t ;
struct TYPE_29__ {scalar_t__ cte_bits; } ;
typedef TYPE_3__ ctf_encoding_t ;
struct TYPE_31__ {char* dmd_name; int dmd_value; size_t dmd_offset; int dmd_type; } ;
struct TYPE_26__ {TYPE_5__ dtu_members; } ;
struct TYPE_27__ {int ctt_info; scalar_t__ ctt_size; int ctt_lsizelo; int ctt_lsizehi; } ;
struct TYPE_30__ {TYPE_1__ dtd_u; TYPE_20__ dtd_data; } ;
typedef TYPE_4__ ctf_dtdef_t ;
typedef TYPE_5__ ctf_dmdef_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (int,int) ;
 int VAR_14 ;
 TYPE_5__* FUNC_7 (int) ;
 TYPE_4__* FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_5__*,int) ;
 int FUNC_10 (TYPE_2__*,TYPE_20__*,int *,int *) ;
 int FUNC_11 (TYPE_5__*,TYPE_5__*) ;
 TYPE_5__* FUNC_12 (TYPE_5__*) ;
 TYPE_5__* FUNC_13 (TYPE_5__*) ;
 int FUNC_14 (TYPE_2__*,int ) ;
 int FUNC_15 (TYPE_2__*,int ) ;
 char* FUNC_16 (char const*) ;
 int FUNC_17 (TYPE_2__*,int ) ;
 int FUNC_18 (TYPE_2__*,int ,TYPE_3__*) ;
 int FUNC_19 (TYPE_2__*,int ) ;
 int FUNC_20 (TYPE_2__*,int ) ;
 int FUNC_21 (size_t,int) ;
 scalar_t__ FUNC_22 (char*,char const*) ;
 scalar_t__ FUNC_23 (char*) ;

int
FUNC_24(ctf_file_t *VAR_15, ctf_id_t VAR_16, const char *VAR_17, ctf_id_t VAR_18)
{
 ctf_dtdef_t *VAR_19 = FUNC_8(VAR_15, VAR_16);
 ctf_dmdef_t *VAR_20;

 ssize_t VAR_21, VAR_22, VAR_23;
 uint_t VAR_24, VAR_25, VAR_26;
 char *VAR_27 = ((void*)0);

 if (!(VAR_15->ctf_flags & VAR_13))
  return (FUNC_15(VAR_15, VAR_11));

 if (VAR_19 == ((void*)0))
  return (FUNC_15(VAR_15, VAR_7));

 VAR_24 = FUNC_1(VAR_19->dtd_data.ctt_info);
 VAR_26 = FUNC_0(VAR_19->dtd_data.ctt_info);
 VAR_25 = FUNC_2(VAR_19->dtd_data.ctt_info);

 if (VAR_24 != VAR_1 && VAR_24 != VAR_2)
  return (FUNC_15(VAR_15, VAR_10));

 if (VAR_25 == VAR_5)
  return (FUNC_15(VAR_15, VAR_8));

 if (VAR_17 != ((void*)0)) {
  for (VAR_20 = FUNC_12(&VAR_19->dtd_u.dtu_members);
      VAR_20 != ((void*)0); VAR_20 = FUNC_12(VAR_20)) {
   if (VAR_20->dmd_name != ((void*)0) &&
       FUNC_22(VAR_20->dmd_name, VAR_17) == 0)
    return (FUNC_15(VAR_15, VAR_9));
  }
 }

 if ((VAR_21 = FUNC_20(VAR_15, VAR_18)) == VAR_0 ||
     (VAR_22 = FUNC_17(VAR_15, VAR_18)) == VAR_0)
  return (VAR_0);

 if ((VAR_20 = FUNC_7(sizeof (ctf_dmdef_t))) == ((void*)0))
  return (FUNC_15(VAR_15, VAR_6));

 if (VAR_17 != ((void*)0) && (VAR_27 = FUNC_16(VAR_17)) == ((void*)0)) {
  FUNC_9(VAR_20, sizeof (ctf_dmdef_t));
  return (FUNC_15(VAR_15, VAR_6));
 }

 VAR_20->dmd_name = VAR_27;
 VAR_20->dmd_type = VAR_18;
 VAR_20->dmd_value = -1;

 if (VAR_24 == VAR_1 && VAR_25 != 0) {
  ctf_dmdef_t *VAR_28 = FUNC_13(&VAR_19->dtd_u.dtu_members);
  ctf_id_t VAR_29 = FUNC_19(VAR_15, VAR_28->dmd_type);
  size_t VAR_30 = VAR_28->dmd_offset;

  ctf_encoding_t VAR_31;
  ssize_t VAR_32;

  if (FUNC_18(VAR_15, VAR_29, &VAR_31) != VAR_0)
   VAR_30 += VAR_31.cte_bits;
  else if ((VAR_32 = FUNC_20(VAR_15, VAR_29)) != VAR_0)
   VAR_30 += VAR_32 * VAR_14;
  VAR_30 = FUNC_21(VAR_30, VAR_14) / VAR_14;
  VAR_30 = FUNC_21(VAR_30, FUNC_6(VAR_22, 1));
  VAR_20->dmd_offset = VAR_30 * VAR_14;
  VAR_23 = VAR_30 + VAR_21;
 } else {
  VAR_20->dmd_offset = 0;
  VAR_23 = FUNC_10(VAR_15, &VAR_19->dtd_data, ((void*)0), ((void*)0));
  VAR_23 = FUNC_6(VAR_23, VAR_21);
 }

 if (VAR_23 > VAR_4) {
  VAR_19->dtd_data.ctt_size = VAR_3;
  VAR_19->dtd_data.ctt_lsizehi = FUNC_3(VAR_23);
  VAR_19->dtd_data.ctt_lsizelo = FUNC_4(VAR_23);
 } else
  VAR_19->dtd_data.ctt_size = (ushort_t)VAR_23;

 VAR_19->dtd_data.ctt_info = FUNC_5(VAR_24, VAR_26, VAR_25 + 1);
 FUNC_11(&VAR_19->dtd_u.dtu_members, VAR_20);

 if (VAR_27 != ((void*)0))
  VAR_15->ctf_dtstrlen += FUNC_23(VAR_27) + 1;

 FUNC_14(VAR_15, VAR_18);
 VAR_15->ctf_flags |= VAR_12;
 return (0);
}
