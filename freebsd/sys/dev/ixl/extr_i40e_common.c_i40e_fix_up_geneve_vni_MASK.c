
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct i40e_aqc_add_remove_cloud_filters_element_data {int tenant_id; int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(
 struct i40e_aqc_add_remove_cloud_filters_element_data *VAR_3,
 u8 VAR_4)
{
 struct i40e_aqc_add_remove_cloud_filters_element_data *VAR_5 = VAR_3;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  u16 VAR_7;
  u32 VAR_8;

  VAR_7 = (FUNC_1(VAR_5[VAR_6].flags) &
      VAR_1) >>
      VAR_2;
  if (VAR_7 == VAR_0) {
   VAR_8 = FUNC_2(VAR_5[VAR_6].tenant_id);
   VAR_5[VAR_6].tenant_id = FUNC_0(VAR_8 << 8);
  }
 }
}
