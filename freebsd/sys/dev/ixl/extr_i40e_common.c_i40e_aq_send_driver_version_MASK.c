
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct i40e_hw {int dummy; } ;
struct i40e_driver_version {int* driver_string; int subbuild_version; int build_version; int minor_version; int major_version; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aqc_driver_version {int driver_subbuild_ver; int driver_build_ver; int driver_minor_ver; int driver_major_ver; } ;
struct TYPE_2__ {int raw; } ;
struct i40e_aq_desc {int flags; TYPE_1__ params; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct i40e_hw*,struct i40e_aq_desc*,int*,int,struct i40e_asq_cmd_details*) ;
 int FUNC_2 (struct i40e_aq_desc*,int ) ;

enum i40e_status_code FUNC_3(struct i40e_hw *VAR_4,
    struct i40e_driver_version *VAR_5,
    struct i40e_asq_cmd_details *VAR_6)
{
 struct i40e_aq_desc VAR_7;
 struct i40e_aqc_driver_version *VAR_8 =
  (struct i40e_aqc_driver_version *)&VAR_7.params.raw;
 enum i40e_status_code VAR_9;
 u16 VAR_10;

 if (VAR_5 == ((void*)0))
  return VAR_2;

 FUNC_2(&VAR_7, VAR_3);

 VAR_7.flags |= FUNC_0(VAR_0 | VAR_1);
 VAR_8->driver_major_ver = VAR_5->major_version;
 VAR_8->driver_minor_ver = VAR_5->minor_version;
 VAR_8->driver_build_ver = VAR_5->build_version;
 VAR_8->driver_subbuild_ver = VAR_5->subbuild_version;

 VAR_10 = 0;
 while (VAR_10 < sizeof(VAR_5->driver_string) &&
        (VAR_5->driver_string[VAR_10] < 0x80) &&
        VAR_5->driver_string[VAR_10])
  VAR_10++;
 VAR_9 = FUNC_1(VAR_4, &VAR_7, VAR_5->driver_string,
           VAR_10, VAR_6);

 return VAR_9;
}
