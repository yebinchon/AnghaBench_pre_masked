
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u32 ;
struct ecore_hwfn {int dummy; } ;
struct ecore_dcbx_params {int num_app_entries; void* app_error; void* app_valid; void* app_willing; struct ecore_app_entry* app_entry; } ;
struct ecore_app_entry {int ethtype; int proto_type; void* proto_id; int prio; void* sf_ieee; } ;
struct dcbx_app_priority_feature {int flags; } ;
struct dcbx_app_priority_entry {int entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;





 int VAR_7 ;
 int FUNC_0 (struct ecore_hwfn*,int ,char*,void*,void*,void*) ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (struct ecore_hwfn*,int ,void*,int *,int) ;

__attribute__((used)) static void
FUNC_4(struct ecore_hwfn *VAR_13,
   struct dcbx_app_priority_feature *VAR_14,
   struct dcbx_app_priority_entry *VAR_15,
   struct ecore_dcbx_params *VAR_16, bool VAR_17)
{
 struct ecore_app_entry *VAR_18;
 u8 VAR_19;
 int VAR_20;

 VAR_16->app_willing = FUNC_1(VAR_14->flags, VAR_7);
 VAR_16->app_valid = FUNC_1(VAR_14->flags, VAR_0);
 VAR_16->app_error = FUNC_1(VAR_14->flags, VAR_1);
 VAR_16->num_app_entries = FUNC_1(VAR_14->flags,
        VAR_2);
 for (VAR_20 = 0; VAR_20 < VAR_16->num_app_entries; VAR_20++) {
  VAR_18 = &VAR_16->app_entry[VAR_20];
  if (VAR_17) {
   u8 VAR_21;
   u32 VAR_22;

   VAR_21 = FUNC_1(VAR_15[VAR_20].entry,
      VAR_6);
   switch (VAR_21) {
   case 131:

    VAR_22 = FUNC_1(VAR_15[VAR_20].entry,
          VAR_5);
    VAR_18->sf_ieee = VAR_22 ?
     VAR_10 :
     VAR_8;
    break;
   case 132:
    VAR_18->sf_ieee = VAR_8;
    break;
   case 130:
    VAR_18->sf_ieee = VAR_9;
    break;
   case 128:
    VAR_18->sf_ieee = VAR_11;
    break;
   case 129:
    VAR_18->sf_ieee = VAR_10;
    break;
   }
  } else {
   VAR_18->ethtype = !(FUNC_1(VAR_15[VAR_20].entry,
        VAR_5));
  }

  VAR_19 = FUNC_1(VAR_15[VAR_20].entry, VAR_3);
  FUNC_2(VAR_19, &VAR_18->prio);
  VAR_18->proto_id = FUNC_1(VAR_15[VAR_20].entry,
      VAR_4);
  FUNC_3(VAR_13, VAR_15[VAR_20].entry,
       VAR_18->proto_id,
       &VAR_18->proto_type, VAR_17);
 }

 FUNC_0(VAR_13, VAR_12,
     "APP params: willing %d, valid %d error = %d\n",
     VAR_16->app_willing, VAR_16->app_valid,
     VAR_16->app_error);
}
