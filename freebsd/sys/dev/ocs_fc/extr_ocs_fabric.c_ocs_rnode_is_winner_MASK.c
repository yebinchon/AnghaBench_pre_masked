
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef long long uint64_t ;
typedef int uint32_t ;
typedef int prop_buf ;
struct TYPE_7__ {long long wwpn; int ocs; TYPE_1__* domain; } ;
typedef TYPE_2__ ocs_sport_t ;
typedef int int32_t ;
struct TYPE_8__ {int port_name_lo; int port_name_hi; } ;
typedef TYPE_3__ fc_plogi_payload_t ;
struct TYPE_6__ {scalar_t__ flogi_service_params; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 long long FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int FUNC_4 (int ,char*,int ,int ) ;
 long long FUNC_5 (char*,int ,int ) ;

__attribute__((used)) static int32_t
FUNC_6(ocs_sport_t *VAR_0)
{
 fc_plogi_payload_t *VAR_1 = (fc_plogi_payload_t*) VAR_0->domain->flogi_service_params;
 uint64_t VAR_2 = FUNC_2(VAR_1);
 uint64_t VAR_3 = VAR_0->wwpn;
 char VAR_4[32];
 uint64_t VAR_5 = 0;

 if (FUNC_1("wwn_bump", VAR_4, sizeof(VAR_4)) == 0) {
  VAR_5 = FUNC_5(VAR_4, 0, 0);
 }
 VAR_3 ^= VAR_5;

 VAR_2 = FUNC_2(VAR_1);

 FUNC_3(VAR_0->ocs, "r: %08x %08x\n", FUNC_0(VAR_1->port_name_hi), FUNC_0(VAR_1->port_name_lo));
 FUNC_3(VAR_0->ocs, "l: %08x %08x\n", (uint32_t) (VAR_3 >> 32ll), (uint32_t) VAR_3);

 if (VAR_2 == VAR_3) {
  FUNC_4(VAR_0->ocs, "WWPN of remote node [%08x %08x] matches local WWPN\n",
   (uint32_t) (VAR_3 >> 32ll), (uint32_t) VAR_3);
  return (-1);
 }

 return (VAR_2 > VAR_3);
}
