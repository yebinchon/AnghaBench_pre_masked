
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ushort_t ;
typedef int uint_t ;
typedef scalar_t__ ctf_id_t ;
struct TYPE_9__ {int ctc_flags; int ctc_argc; scalar_t__ const ctc_return; } ;
typedef TYPE_3__ ctf_funcinfo_t ;
typedef int ctf_file_t ;
struct TYPE_8__ {scalar_t__* dtu_argv; } ;
struct TYPE_7__ {scalar_t__ ctt_type; int ctt_info; } ;
struct TYPE_10__ {TYPE_2__ dtd_u; TYPE_1__ dtd_data; } ;
typedef TYPE_4__ ctf_dtdef_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (scalar_t__ const*,scalar_t__*,int) ;
 scalar_t__ FUNC_2 (int *,int,int *,TYPE_4__**) ;
 scalar_t__* FUNC_3 (int) ;
 int * FUNC_4 (int *,scalar_t__ const) ;
 int FUNC_5 (scalar_t__*,int) ;
 int * FUNC_6 (int **,scalar_t__ const) ;
 int FUNC_7 (int *,scalar_t__ const) ;
 scalar_t__ FUNC_8 (int *,int ) ;

ctf_id_t
FUNC_9(ctf_file_t *VAR_8, uint_t VAR_9,
    const ctf_funcinfo_t *VAR_10, const ctf_id_t *VAR_11)
{
 ctf_dtdef_t *VAR_12;
 ctf_id_t VAR_13;
 uint_t VAR_14;
 int VAR_15;
 ctf_id_t *VAR_16 = ((void*)0);
 ctf_file_t *VAR_17;

 if (VAR_10 == ((void*)0) || (VAR_10->ctc_flags & ~VAR_1) != 0 ||
     (VAR_10->ctc_argc != 0 && VAR_11 == ((void*)0)))
  return (FUNC_8(VAR_8, VAR_6));

 VAR_14 = VAR_10->ctc_argc;
 if (VAR_10->ctc_flags & VAR_1)
  VAR_14++;

 if (VAR_14 > VAR_3)
  return (FUNC_8(VAR_8, VAR_7));

 VAR_17 = VAR_8;
 if (FUNC_6(&VAR_17, VAR_10->ctc_return) == ((void*)0) &&
     FUNC_4(VAR_8, VAR_10->ctc_return) == ((void*)0))
  return (FUNC_8(VAR_8, VAR_5));

 for (VAR_15 = 0; VAR_15 < VAR_10->ctc_argc; VAR_15++) {
  VAR_17 = VAR_8;
  if (FUNC_6(&VAR_17, VAR_11[VAR_15]) == ((void*)0) &&
      FUNC_4(VAR_8, VAR_11[VAR_15]) == ((void*)0))
   return (FUNC_8(VAR_8, VAR_5));
 }

 if (VAR_14 != 0 && (VAR_16 = FUNC_3(sizeof (ctf_id_t) * VAR_14)) == ((void*)0))
  return (FUNC_8(VAR_8, VAR_4));

 if ((VAR_13 = FUNC_2(VAR_8, VAR_9, ((void*)0), &VAR_12)) == VAR_0) {
  FUNC_5(VAR_16, sizeof (ctf_id_t) * VAR_14);
  return (VAR_0);
 }

 VAR_12->dtd_data.ctt_info = FUNC_0(VAR_2, VAR_9, VAR_14);
 VAR_12->dtd_data.ctt_type = (ushort_t)VAR_10->ctc_return;

 FUNC_7(VAR_8, VAR_10->ctc_return);
 for (VAR_15 = 0; VAR_15 < VAR_10->ctc_argc; VAR_15++)
  FUNC_7(VAR_8, VAR_11[VAR_15]);

 FUNC_1(VAR_11, VAR_16, sizeof (ctf_id_t) * VAR_10->ctc_argc);
 if (VAR_10->ctc_flags & VAR_1)
  VAR_16[VAR_14 - 1] = 0;
 VAR_12->dtd_u.dtu_argv = VAR_16;

 return (VAR_13);
}
