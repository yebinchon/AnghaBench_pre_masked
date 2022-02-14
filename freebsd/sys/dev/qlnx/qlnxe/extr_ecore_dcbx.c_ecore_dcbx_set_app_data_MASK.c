
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ecore_hwfn {int dummy; } ;
struct ecore_dcbx_params {int num_app_entries; TYPE_2__* app_entry; scalar_t__ app_valid; scalar_t__ app_willing; } ;
struct dcbx_app_priority_feature {int flags; TYPE_1__* app_pri_tbl; } ;
struct TYPE_4__ {int sf_ieee; int prio; scalar_t__ proto_id; scalar_t__ ethtype; } ;
struct TYPE_3__ {int entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct ecore_hwfn*,int ,char*,int) ;




 int VAR_18 ;

__attribute__((used)) static void
FUNC_1(struct ecore_hwfn *VAR_19,
   struct dcbx_app_priority_feature *VAR_20,
   struct ecore_dcbx_params *VAR_21, bool VAR_22)
{
 u32 *VAR_23;
 int VAR_24;

 if (VAR_21->app_willing)
  VAR_20->flags |= VAR_17;
 else
  VAR_20->flags &= ~VAR_17;

 if (VAR_21->app_valid)
  VAR_20->flags |= VAR_0;
 else
  VAR_20->flags &= ~VAR_0;

 VAR_20->flags &= ~VAR_1;
 VAR_20->flags |= (u32)VAR_21->num_app_entries <<
   VAR_2;

 for (VAR_24 = 0; VAR_24 < VAR_21->num_app_entries; VAR_24++) {
  VAR_23 = &VAR_20->app_pri_tbl[VAR_24].entry;
  *VAR_23 = 0;
  if (VAR_22) {
   *VAR_23 &= ~(VAR_9 | VAR_14);
   switch (VAR_21->app_entry[VAR_24].sf_ieee) {
   case 131:
    *VAR_23 |= ((u32)VAR_8 <<
         VAR_10);
    *VAR_23 |= ((u32)VAR_7 <<
         VAR_15);
    break;
   case 130:
    *VAR_23 |= ((u32)VAR_11 <<
         VAR_10);
    *VAR_23 |= ((u32)VAR_16 <<
         VAR_15);
    break;
   case 128:
    *VAR_23 |= ((u32)VAR_13 <<
         VAR_10);
    *VAR_23 |= ((u32)VAR_16 <<
         VAR_15);
    break;
   case 129:
    *VAR_23 |= (u32)VAR_12 <<
         VAR_10;
    *VAR_23 |= ((u32)VAR_16 <<
         VAR_15);
    break;
   }
  } else {
   *VAR_23 &= ~VAR_14;
   if (VAR_21->app_entry[VAR_24].ethtype)
    *VAR_23 |= ((u32)VAR_7 <<
         VAR_15);
   else
    *VAR_23 |= ((u32)VAR_16 <<
         VAR_15);
  }
  *VAR_23 &= ~VAR_5;
  *VAR_23 |= ((u32)VAR_21->app_entry[VAR_24].proto_id <<
      VAR_6);
  *VAR_23 &= ~VAR_3;
  *VAR_23 |= ((u32)(1 << VAR_21->app_entry[VAR_24].prio) <<
      VAR_4);
 }

 FUNC_0(VAR_19, VAR_18, "flags = 0x%x\n", VAR_20->flags);
}
