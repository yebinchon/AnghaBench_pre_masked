
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u_int ;
struct hsrp {scalar_t__ hsrp_version; scalar_t__ hsrp_op_code; scalar_t__ hsrp_state; scalar_t__ hsrp_group; scalar_t__ hsrp_reserved; scalar_t__ hsrp_virtaddr; int hsrp_authdata; int hsrp_priority; int hsrp_holdtime; int hsrp_hellotime; } ;
struct TYPE_7__ {int ndo_snapend; scalar_t__ ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,int,int ) ;
 int FUNC_3 (TYPE_1__*,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ,char*,scalar_t__) ;
 int FUNC_5 (int ,char*,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,int ) ;

void
FUNC_7(netdissect_options *VAR_2, register const uint8_t *VAR_3, register u_int VAR_4)
{
 const struct hsrp *VAR_5 = (const struct hsrp *) VAR_3;

 FUNC_1(VAR_5->hsrp_version);
 FUNC_0((VAR_2, "HSRPv%d", VAR_5->hsrp_version));
 if (VAR_5->hsrp_version != 0)
  return;
 FUNC_1(VAR_5->hsrp_op_code);
 FUNC_0((VAR_2, "-"));
 FUNC_0((VAR_2, "%s ", FUNC_5(VAR_0, "unknown (%d)", VAR_5->hsrp_op_code)));
 FUNC_0((VAR_2, "%d: ", VAR_4));
 FUNC_1(VAR_5->hsrp_state);
 FUNC_0((VAR_2, "state=%s ", FUNC_4(VAR_1, "Unknown (%d)", VAR_5->hsrp_state)));
 FUNC_1(VAR_5->hsrp_group);
 FUNC_0((VAR_2, "group=%d ", VAR_5->hsrp_group));
 FUNC_1(VAR_5->hsrp_reserved);
 if (VAR_5->hsrp_reserved != 0) {
  FUNC_0((VAR_2, "[reserved=%d!] ", VAR_5->hsrp_reserved));
 }
 FUNC_1(VAR_5->hsrp_virtaddr);
 FUNC_0((VAR_2, "addr=%s", FUNC_3(VAR_2, &VAR_5->hsrp_virtaddr)));
 if (VAR_2->ndo_vflag) {
  FUNC_0((VAR_2, " hellotime="));
  FUNC_6(VAR_2, VAR_5->hsrp_hellotime);
  FUNC_0((VAR_2, " holdtime="));
  FUNC_6(VAR_2, VAR_5->hsrp_holdtime);
  FUNC_0((VAR_2, " priority=%d", VAR_5->hsrp_priority));
  FUNC_0((VAR_2, " auth=\""));
  if (FUNC_2(VAR_2, VAR_5->hsrp_authdata, sizeof(VAR_5->hsrp_authdata),
      VAR_2->ndo_snapend)) {
   FUNC_0((VAR_2, "\""));
   goto trunc;
  }
  FUNC_0((VAR_2, "\""));
 }
 return;
trunc:
 FUNC_0((VAR_2, "[|hsrp]"));
}
