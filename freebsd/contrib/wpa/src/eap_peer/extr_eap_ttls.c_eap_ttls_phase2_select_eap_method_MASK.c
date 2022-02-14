
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {scalar_t__ vendor; scalar_t__ method; } ;
struct eap_ttls_data {size_t num_phase2_eap_types; TYPE_2__ phase2_eap_type; TYPE_1__* phase2_eap_types; } ;
struct TYPE_3__ {scalar_t__ vendor; scalar_t__ method; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct eap_ttls_data *VAR_2,
           u8 VAR_3)
{
 size_t VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_2->num_phase2_eap_types; VAR_4++) {
  if (VAR_2->phase2_eap_types[VAR_4].vendor != VAR_0 ||
      VAR_2->phase2_eap_types[VAR_4].method != VAR_3)
   continue;

  VAR_2->phase2_eap_type.vendor =
   VAR_2->phase2_eap_types[VAR_4].vendor;
  VAR_2->phase2_eap_type.method =
   VAR_2->phase2_eap_types[VAR_4].method;
  FUNC_0(VAR_1, "EAP-TTLS: Selected "
      "Phase 2 EAP vendor %d method %d",
      VAR_2->phase2_eap_type.vendor,
      VAR_2->phase2_eap_type.method);
  break;
 }
}
