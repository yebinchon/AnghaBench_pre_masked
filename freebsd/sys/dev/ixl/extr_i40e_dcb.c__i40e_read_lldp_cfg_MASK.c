
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct i40e_lldp_variables {int dummy; } ;
struct i40e_hw {int dummy; } ;
typedef int raw_mem ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;
typedef struct i40e_lldp_variables __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i40e_lldp_variables) ;
 int VAR_3 ;
 int FUNC_1 (struct i40e_hw*,int ) ;
 int FUNC_2 (struct i40e_hw*,int,int,int,struct i40e_lldp_variables*,int ,int *) ;
 int FUNC_3 (struct i40e_hw*) ;

__attribute__((used)) static enum i40e_status_code FUNC_4(struct i40e_hw *VAR_4,
       struct i40e_lldp_variables *VAR_5,
       u8 VAR_6, u32 VAR_7)
{
 u32 VAR_8, VAR_9 = (2 * VAR_7);
 enum i40e_status_code VAR_10;
 __le16 VAR_11;
 u16 VAR_12;

 VAR_10 = FUNC_1(VAR_4, VAR_1);
 if (VAR_10 != VAR_2)
  return VAR_10;

 VAR_10 = FUNC_2(VAR_4, 0x0, VAR_6 * 2, sizeof(VAR_11), &VAR_11,
          VAR_3, ((void*)0));
 FUNC_3(VAR_4);
 if (VAR_10 != VAR_2)
  return VAR_10;

 VAR_12 = FUNC_0(VAR_11);



 if (VAR_12 & VAR_0)
  VAR_8 = (0x7FFF & VAR_12) * 4096;
 else
  VAR_8 = (0x7FFF & VAR_12) * 2;

 VAR_10 = FUNC_1(VAR_4, VAR_1);
 if (VAR_10 != VAR_2)
  goto err_lldp_cfg;

 VAR_10 = FUNC_2(VAR_4, VAR_6, VAR_9, sizeof(VAR_11), &VAR_11,
          VAR_3, ((void*)0));
 FUNC_3(VAR_4);
 if (VAR_10 != VAR_2)
  return VAR_10;

 VAR_12 = FUNC_0(VAR_11);
 VAR_9 = VAR_12 + VAR_7;
 VAR_9 *= 2;

 VAR_10 = FUNC_1(VAR_4, VAR_1);
 if (VAR_10 != VAR_2)
  goto err_lldp_cfg;

 VAR_10 = FUNC_2(VAR_4, 0, VAR_8 + VAR_9,
          sizeof(struct i40e_lldp_variables), VAR_5,
          VAR_3, ((void*)0));
 FUNC_3(VAR_4);

err_lldp_cfg:
 return VAR_10;
}
