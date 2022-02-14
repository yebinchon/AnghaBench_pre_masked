
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint_t ;
typedef int uchar_t ;
typedef int ssize_t ;
struct TYPE_18__ {int ctt_info; } ;
typedef TYPE_2__ ctf_type_t ;
struct TYPE_19__ {int ctm_type; } ;
typedef TYPE_3__ ctf_member_t ;
struct TYPE_20__ {int ctlm_type; } ;
typedef TYPE_4__ ctf_lmember_t ;
typedef int ctf_id_t ;
struct TYPE_21__ {TYPE_1__* ctf_dmodel; int ctf_version; } ;
typedef TYPE_5__ ctf_file_t ;
struct TYPE_22__ {int ctr_contents; } ;
typedef TYPE_6__ ctf_arinfo_t ;
struct TYPE_17__ {int ctd_pointer; int ctd_int; } ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int const FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 size_t FUNC_2 (size_t,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_5__*,int ,TYPE_6__*) ;
 int FUNC_5 (TYPE_5__*,TYPE_2__ const*,int*,int*) ;
 TYPE_2__* FUNC_6 (TYPE_5__**,int ) ;
 int FUNC_7 (TYPE_5__*,int ) ;

ssize_t
FUNC_8(ctf_file_t *VAR_3, ctf_id_t VAR_4)
{
 const ctf_type_t *VAR_5;
 ctf_arinfo_t VAR_6;

 if ((VAR_4 = FUNC_7(VAR_3, VAR_4)) == VAR_0)
  return (-1);

 if ((VAR_5 = FUNC_6(&VAR_3, VAR_4)) == ((void*)0))
  return (-1);

 switch (FUNC_0(VAR_3, VAR_5->ctt_info)) {
 case 130:
 case 131:
  return (VAR_3->ctf_dmodel->ctd_pointer);

 case 133:
  if (FUNC_4(VAR_3, VAR_4, &VAR_6) == VAR_0)
   return (-1);
  return (FUNC_8(VAR_3, VAR_6.ctr_contents));

 case 129:
 case 128: {
  uint_t VAR_7 = FUNC_1(VAR_3, VAR_5->ctt_info);
  ssize_t VAR_8, VAR_9;
  size_t VAR_10 = 0;
  const void *VAR_11;

  (void) FUNC_5(VAR_3, VAR_5, &VAR_8, &VAR_9);
  VAR_11 = (uchar_t *)VAR_5 + VAR_9;

  if (FUNC_0(VAR_3, VAR_5->ctt_info) == 129)
   VAR_7 = FUNC_3(VAR_7, 1);

  if (VAR_3->ctf_version == VAR_2 ||
      VAR_8 < VAR_1) {
   const ctf_member_t *VAR_12 = VAR_11;
   for (; VAR_7 != 0; VAR_7--, VAR_12++) {
    ssize_t VAR_13 = FUNC_8(VAR_3, VAR_12->ctm_type);
    VAR_10 = FUNC_2(VAR_10, VAR_13);
   }
  } else {
   const ctf_lmember_t *VAR_14 = VAR_11;
   for (; VAR_7 != 0; VAR_7--, VAR_14++) {
    ssize_t VAR_15 = FUNC_8(VAR_3, VAR_14->ctlm_type);
    VAR_10 = FUNC_2(VAR_10, VAR_15);
   }
  }

  return (VAR_10);
 }

 case 132:
  return (VAR_3->ctf_dmodel->ctd_int);

 default:
  return (FUNC_5(VAR_3, VAR_5, ((void*)0), ((void*)0)));
 }
}
