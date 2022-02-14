
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {char** macs; } ;
struct TYPE_5__ {TYPE_1__* p_virt; } ;
struct ecore_vf_info {TYPE_3__ shadow_config; TYPE_2__ bulletin; } ;
struct ecore_hwfn {int dummy; } ;
struct ecore_filter_ucast {scalar_t__ opcode; char* mac; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_4__ {int valid_bitmap; } ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static enum _ecore_status_t FUNC_4(struct ecore_hwfn *VAR_10,
          struct ecore_vf_info *VAR_11,
          struct ecore_filter_ucast *VAR_12)
{
 char VAR_13[VAR_8];
 int VAR_14;

 FUNC_3(VAR_13, VAR_8);






 if (VAR_11->bulletin.p_virt->valid_bitmap & (1 << VAR_9))
  return VAR_7;


 if (VAR_12->opcode == VAR_3) {
  for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {
   if (!FUNC_1(VAR_11->shadow_config.macs[VAR_14],
      VAR_12->mac, VAR_8)) {
    FUNC_3(VAR_11->shadow_config.macs[VAR_14],
           VAR_8);
    break;
   }
  }

  if (VAR_14 == VAR_0) {
   FUNC_0(VAR_10, VAR_6,
       "MAC isn't configured\n");
   return VAR_5;
  }
 } else if (VAR_12->opcode == VAR_4 ||
     VAR_12->opcode == VAR_2) {
  for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++)
   FUNC_3(VAR_11->shadow_config.macs[VAR_14], VAR_8);
 }


 if (VAR_12->opcode != VAR_1 &&
     VAR_12->opcode != VAR_4)
  return VAR_7;

 for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {
  if (!FUNC_1(VAR_11->shadow_config.macs[VAR_14],
     VAR_13, VAR_8)) {
   FUNC_2(VAR_11->shadow_config.macs[VAR_14],
        VAR_12->mac, VAR_8);
   FUNC_0(VAR_10, VAR_6,
       "Added MAC at %d entry in shadow\n", VAR_14);
   break;
  }
 }

 if (VAR_14 == VAR_0) {
  FUNC_0(VAR_10, VAR_6,
      "No available place for MAC\n");
  return VAR_5;
 }

 return VAR_7;
}
