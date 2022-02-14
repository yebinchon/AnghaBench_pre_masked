
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mlxfw_mfa2_tlv_multi {int dummy; } ;
struct mlxfw_mfa2_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlxfw_mfa2_tlv_multi* FUNC_0 (struct mlxfw_mfa2_file const*,char const*,int ) ;
 int FUNC_1 (struct mlxfw_mfa2_file const*,struct mlxfw_mfa2_tlv_multi const*,int ,int *) ;

int FUNC_2(const struct mlxfw_mfa2_file *VAR_2,
        const char *VAR_3, u32 VAR_4,
        u32 *VAR_5)
{
 const struct mlxfw_mfa2_tlv_multi *VAR_6;
 u16 VAR_7;
 int VAR_8;

 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (!VAR_6)
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_2, VAR_6,
            VAR_1,
            &VAR_7);
 if (VAR_8)
  return VAR_8;

 *VAR_5 = VAR_7;
 return 0;
}
