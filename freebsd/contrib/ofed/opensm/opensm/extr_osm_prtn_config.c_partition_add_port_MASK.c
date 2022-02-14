
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct part_conf {scalar_t__ membership; int indx0; TYPE_2__* p_subn; int p_log; int * p_prtn; } ;
typedef int osm_prtn_t ;
typedef scalar_t__ membership_t ;
typedef int ib_net64_t ;
struct TYPE_3__ {scalar_t__ allow_both_pkeys; } ;
struct TYPE_4__ {TYPE_1__ opt; int sm_port_guid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,int ,char*,unsigned int,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct part_conf*,int *,int,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int ,TYPE_2__*,int *,int ,int ,int ) ;
 int FUNC_5 (struct part_conf*,int *,int ,scalar_t__) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*,int ) ;
 int FUNC_8 (char*,char**,int ) ;

__attribute__((used)) static int FUNC_9(unsigned VAR_10, struct part_conf *VAR_11,
         char *VAR_12, char *VAR_13)
{
 osm_prtn_t *VAR_14 = VAR_11->p_prtn;
 ib_net64_t VAR_15;
 membership_t VAR_16 = VAR_11->membership;

 if (!VAR_12 || !*VAR_12 || !FUNC_7(VAR_12, "NONE", FUNC_6(VAR_12)))
  return 0;

 if (VAR_13) {

  VAR_16 = VAR_7;
  if (!FUNC_7(VAR_13, "full", FUNC_6(VAR_13)))
   VAR_16 = VAR_2;
  else if (!FUNC_7(VAR_13, "both", FUNC_6(VAR_13)))
   VAR_16 = VAR_0;
  else if (FUNC_7(VAR_13, "limited", FUNC_6(VAR_13))) {
   FUNC_0(VAR_11->p_log, VAR_8,
    "PARSE WARN: line %d: "
    "unrecognized port flag \'%s\'."
    " Assume \'limited\'\n", VAR_10, VAR_13);
  }
 }

 if (!FUNC_7(VAR_12, "ALL", FUNC_6(VAR_12)))
  return FUNC_5(VAR_11, VAR_14, 0, VAR_16);
 else if (!FUNC_7(VAR_12, "ALL_CAS", FUNC_6(VAR_12)))
  return FUNC_5(VAR_11, VAR_14, VAR_3, VAR_16);
 else if (!FUNC_7(VAR_12, "ALL_SWITCHES", FUNC_6(VAR_12)))
  return FUNC_5(VAR_11, VAR_14, VAR_5,
      VAR_16);
 else if (!FUNC_7(VAR_12, "ALL_ROUTERS", FUNC_6(VAR_12)))
  return FUNC_5(VAR_11, VAR_14, VAR_4,
      VAR_16);
 else if (!FUNC_7(VAR_12, "SELF", FUNC_6(VAR_12))) {
  VAR_15 = FUNC_2(VAR_11->p_subn->sm_port_guid);
 } else {
  char *VAR_17;
  VAR_15 = FUNC_8(VAR_12, &VAR_17, 0);
  if (!VAR_15 || *VAR_17)
   return -1;
 }

 FUNC_3(VAR_11, VAR_14, 0xFF, VAR_16, VAR_15);
 if (VAR_16 != VAR_7 &&
     FUNC_4(VAR_11->p_log, VAR_11->p_subn, VAR_14,
         FUNC_1(VAR_15), VAR_9, VAR_11->indx0) != VAR_6)
  return -1;
 if ((VAR_16 == VAR_7 ||
     (VAR_16 == VAR_0 && VAR_11->p_subn->opt.allow_both_pkeys)) &&
     FUNC_4(VAR_11->p_log, VAR_11->p_subn, VAR_14,
         FUNC_1(VAR_15), VAR_1, VAR_11->indx0) != VAR_6)
  return -1;
 return 0;
}
