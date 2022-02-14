
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
typedef int ctf_id_t ;
struct TYPE_18__ {int ctf_flags; int ctf_dtstrlen; } ;
typedef TYPE_3__ ctf_file_t ;
struct TYPE_20__ {char* dmd_name; int dmd_value; scalar_t__ dmd_offset; int dmd_type; } ;
struct TYPE_17__ {TYPE_5__ dtu_members; } ;
struct TYPE_16__ {int ctt_info; } ;
struct TYPE_19__ {TYPE_2__ dtd_u; TYPE_1__ dtd_data; } ;
typedef TYPE_4__ ctf_dtdef_t ;
typedef TYPE_5__ ctf_dmdef_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_5__* FUNC_4 (int) ;
 TYPE_4__* FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_5__*,int) ;
 int FUNC_7 (TYPE_5__*,TYPE_5__*) ;
 TYPE_5__* FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_3__*,int ) ;
 char* FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (char*,char const*) ;
 scalar_t__ FUNC_12 (char*) ;

int
FUNC_13(ctf_file_t *VAR_12, ctf_id_t VAR_13, const char *VAR_14, int VAR_15)
{
 ctf_dtdef_t *VAR_16 = FUNC_5(VAR_12, VAR_13);
 ctf_dmdef_t *VAR_17;

 uint_t VAR_18, VAR_19, VAR_20;
 char *VAR_21;

 if (VAR_14 == ((void*)0))
  return (FUNC_9(VAR_12, VAR_9));

 if (!(VAR_12->ctf_flags & VAR_11))
  return (FUNC_9(VAR_12, VAR_8));

 if (VAR_16 == ((void*)0))
  return (FUNC_9(VAR_12, VAR_4));

 VAR_18 = FUNC_1(VAR_16->dtd_data.ctt_info);
 VAR_20 = FUNC_0(VAR_16->dtd_data.ctt_info);
 VAR_19 = FUNC_2(VAR_16->dtd_data.ctt_info);

 if (VAR_18 != VAR_1)
  return (FUNC_9(VAR_12, VAR_7));

 if (VAR_19 == VAR_2)
  return (FUNC_9(VAR_12, VAR_5));

 for (VAR_17 = FUNC_8(&VAR_16->dtd_u.dtu_members);
     VAR_17 != ((void*)0); VAR_17 = FUNC_8(VAR_17)) {
  if (FUNC_11(VAR_17->dmd_name, VAR_14) == 0)
   return (FUNC_9(VAR_12, VAR_6));
 }

 if ((VAR_17 = FUNC_4(sizeof (ctf_dmdef_t))) == ((void*)0))
  return (FUNC_9(VAR_12, VAR_3));

 if ((VAR_21 = FUNC_10(VAR_14)) == ((void*)0)) {
  FUNC_6(VAR_17, sizeof (ctf_dmdef_t));
  return (FUNC_9(VAR_12, VAR_3));
 }

 VAR_17->dmd_name = VAR_21;
 VAR_17->dmd_type = VAR_0;
 VAR_17->dmd_offset = 0;
 VAR_17->dmd_value = VAR_15;

 VAR_16->dtd_data.ctt_info = FUNC_3(VAR_18, VAR_20, VAR_19 + 1);
 FUNC_7(&VAR_16->dtd_u.dtu_members, VAR_17);

 VAR_12->ctf_dtstrlen += FUNC_12(VAR_21) + 1;
 VAR_12->ctf_flags |= VAR_10;

 return (0);
}
