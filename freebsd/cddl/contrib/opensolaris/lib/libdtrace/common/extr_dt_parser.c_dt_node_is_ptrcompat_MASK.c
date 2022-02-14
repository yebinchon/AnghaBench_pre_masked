
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
struct TYPE_8__ {int dn_flags; scalar_t__ dn_kind; scalar_t__ dn_value; int dn_type; int * dn_ctfp; } ;
typedef TYPE_1__ dt_node_t ;
typedef int ctf_id_t ;
typedef int ctf_file_t ;
typedef int ctf_encoding_t ;
struct TYPE_9__ {int ctr_contents; } ;
typedef TYPE_2__ ctf_arinfo_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int ,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int *,int ,int *,int ) ;
 scalar_t__ FUNC_4 (int *,int ,int *) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (TYPE_1__ const*) ;
 int FUNC_9 (TYPE_1__ const*) ;

int
FUNC_10(const dt_node_t *VAR_6, const dt_node_t *VAR_7,
    ctf_file_t **VAR_8, ctf_id_t *VAR_9)
{
 ctf_file_t *VAR_10 = VAR_6->dn_ctfp;
 ctf_file_t *VAR_11 = VAR_7->dn_ctfp;

 ctf_id_t VAR_12 = VAR_0, VAR_13 = VAR_0;
 ctf_id_t VAR_14 = VAR_0, VAR_15 = VAR_0;

 int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 uint_t VAR_21, VAR_22;
 ctf_encoding_t VAR_23;
 ctf_arinfo_t VAR_24;

 FUNC_1(VAR_6->dn_flags & VAR_3);
 FUNC_1(VAR_7->dn_flags & VAR_3);

 if (FUNC_8(VAR_6) || FUNC_8(VAR_7))
  return (0);

 VAR_18 = FUNC_9(VAR_6);
 VAR_19 = FUNC_9(VAR_7);

 if (VAR_18 && VAR_19)
  return (0);

 if (VAR_18 && (VAR_6->dn_kind != VAR_5 || VAR_6->dn_value != 0))
  return (0);

 if (VAR_19 && (VAR_7->dn_kind != VAR_5 || VAR_7->dn_value != 0))
  return (0);

 if ((VAR_18 == 0 && VAR_19 == 0) && (
     (VAR_6->dn_flags & VAR_4) ^ (VAR_7->dn_flags & VAR_4)))
  return (0);






 if (!VAR_18) {
  VAR_12 = FUNC_7(VAR_10, VAR_6->dn_type);
  VAR_21 = FUNC_5(VAR_10, VAR_12);

  if (VAR_21 == VAR_2) {
   VAR_14 = FUNC_7(VAR_10,
       FUNC_6(VAR_10, VAR_12));
  } else if (VAR_21 == VAR_1 &&
      FUNC_2(VAR_10, VAR_12, &VAR_24) == 0) {
   VAR_14 = FUNC_7(VAR_10, VAR_24.ctr_contents);
  }
 }

 if (!VAR_19) {
  VAR_13 = FUNC_7(VAR_11, VAR_7->dn_type);
  VAR_22 = FUNC_5(VAR_11, VAR_13);

  if (VAR_22 == VAR_2) {
   VAR_15 = FUNC_7(VAR_11,
       FUNC_6(VAR_11, VAR_13));
  } else if (VAR_22 == VAR_1 &&
      FUNC_2(VAR_11, VAR_13, &VAR_24) == 0) {
   VAR_15 = FUNC_7(VAR_11, VAR_24.ctr_contents);
  }
 }






 if (VAR_18) {
  VAR_12 = VAR_13;
  VAR_21 = VAR_22;
  VAR_14 = VAR_15;
  VAR_10 = VAR_11;
 } else if (VAR_19) {
  VAR_13 = VAR_12;
  VAR_22 = VAR_21;
  VAR_15 = VAR_14;
  VAR_11 = VAR_10;
 }

 VAR_16 = FUNC_4(VAR_10, VAR_14, &VAR_23) == 0 && FUNC_0(VAR_23);
 VAR_17 = FUNC_4(VAR_11, VAR_15, &VAR_23) == 0 && FUNC_0(VAR_23);






 VAR_20 = (VAR_21 == VAR_2 || VAR_21 == VAR_1) &&
     (VAR_22 == VAR_2 || VAR_22 == VAR_1) &&
     (VAR_16 || VAR_17 || FUNC_3(VAR_10, VAR_14, VAR_11, VAR_15));

 if (VAR_20) {
  if (VAR_8 != ((void*)0))
   *VAR_8 = VAR_17 ? VAR_10 : VAR_11;
  if (VAR_9 != ((void*)0))
   *VAR_9 = VAR_17 ? VAR_12 : VAR_13;
 }

 return (VAR_20);
}
