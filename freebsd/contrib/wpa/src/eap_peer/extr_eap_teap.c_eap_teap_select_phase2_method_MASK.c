
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {scalar_t__ vendor; scalar_t__ method; } ;
struct eap_teap_data {size_t num_phase2_types; TYPE_2__ phase2_type; TYPE_1__* phase2_types; scalar_t__ anon_provisioning; } ;
struct TYPE_3__ {scalar_t__ vendor; scalar_t__ method; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*,scalar_t__,...) ;

__attribute__((used)) static int FUNC_2(struct eap_teap_data *VAR_5, u8 VAR_6)
{
 size_t VAR_7;




 if (VAR_5->anon_provisioning &&
     !FUNC_0(VAR_6)) {
  FUNC_1(VAR_4,
      "EAP-TEAP: EAP type %u not allowed during unauthenticated provisioning",
      VAR_6);
  return -1;
 }
 for (VAR_7 = 0; VAR_7 < VAR_5->num_phase2_types; VAR_7++) {
  if (VAR_5->phase2_types[VAR_7].vendor != VAR_2 ||
      VAR_5->phase2_types[VAR_7].method != VAR_6)
   continue;

  VAR_5->phase2_type.vendor = VAR_5->phase2_types[VAR_7].vendor;
  VAR_5->phase2_type.method = VAR_5->phase2_types[VAR_7].method;
  FUNC_1(VAR_3,
      "EAP-TEAP: Selected Phase 2 EAP vendor %d method %d",
      VAR_5->phase2_type.vendor,
      VAR_5->phase2_type.method);
  break;
 }

 if (VAR_6 != VAR_5->phase2_type.method || VAR_6 == VAR_0)
  return -1;

 return 0;
}
