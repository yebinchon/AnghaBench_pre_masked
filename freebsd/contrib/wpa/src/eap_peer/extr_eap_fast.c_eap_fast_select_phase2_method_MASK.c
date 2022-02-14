
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {scalar_t__ vendor; scalar_t__ method; } ;
struct eap_fast_data {size_t num_phase2_types; TYPE_2__ phase2_type; TYPE_1__* phase2_types; scalar_t__ anon_provisioning; } ;
struct TYPE_3__ {scalar_t__ vendor; scalar_t__ method; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,scalar_t__,...) ;

__attribute__((used)) static int FUNC_1(struct eap_fast_data *VAR_6, u8 VAR_7)
{
 size_t VAR_8;




 if (VAR_6->anon_provisioning && VAR_7 != VAR_0) {
  FUNC_0(VAR_5, "EAP-FAST: Only EAP-MSCHAPv2 is allowed "
      "during unauthenticated provisioning; reject phase2"
      " type %d", VAR_7);
  return -1;
 }
 for (VAR_8 = 0; VAR_8 < VAR_6->num_phase2_types; VAR_8++) {
  if (VAR_6->phase2_types[VAR_8].vendor != VAR_3 ||
      VAR_6->phase2_types[VAR_8].method != VAR_7)
   continue;

  VAR_6->phase2_type.vendor = VAR_6->phase2_types[VAR_8].vendor;
  VAR_6->phase2_type.method = VAR_6->phase2_types[VAR_8].method;
  FUNC_0(VAR_4, "EAP-FAST: Selected Phase 2 EAP "
      "vendor %d method %d",
      VAR_6->phase2_type.vendor,
      VAR_6->phase2_type.method);
  break;
 }

 if (VAR_7 != VAR_6->phase2_type.method || VAR_7 == VAR_1)
  return -1;

 return 0;
}
