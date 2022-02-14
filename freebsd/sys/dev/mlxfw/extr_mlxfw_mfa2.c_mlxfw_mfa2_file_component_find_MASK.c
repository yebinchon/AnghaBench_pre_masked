
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlxfw_mfa2_tlv_multi {int dummy; } ;
struct mlxfw_mfa2_tlv_component_ptr {int component_index; } ;
struct mlxfw_mfa2_tlv_component_descriptor {int dummy; } ;
struct mlxfw_mfa2_tlv {int dummy; } ;
struct mlxfw_mfa2_file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct mlxfw_mfa2_tlv_component_descriptor const* FUNC_1 (struct mlxfw_mfa2_file const*,int ) ;
 struct mlxfw_mfa2_tlv_component_ptr* FUNC_2 (struct mlxfw_mfa2_file const*,struct mlxfw_mfa2_tlv const*) ;
 struct mlxfw_mfa2_tlv_multi* FUNC_3 (struct mlxfw_mfa2_file const*,char const*,int) ;
 struct mlxfw_mfa2_tlv* FUNC_4 (struct mlxfw_mfa2_file const*,struct mlxfw_mfa2_tlv_multi const*,int ,int) ;

__attribute__((used)) static const struct mlxfw_mfa2_tlv_component_descriptor *
FUNC_5(const struct mlxfw_mfa2_file *VAR_1,
          const char *VAR_2, int VAR_3,
          int VAR_4)
{
 const struct mlxfw_mfa2_tlv_component_ptr *VAR_5;
 const struct mlxfw_mfa2_tlv_multi *VAR_6;
 const struct mlxfw_mfa2_tlv *VAR_7;
 u16 VAR_8;

 VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_3);
 if (!VAR_6)
  return ((void*)0);

 VAR_7 = FUNC_4(VAR_1, VAR_6,
         VAR_0,
         VAR_4);
 if (!VAR_7)
  return ((void*)0);

 VAR_5 = FUNC_2(VAR_1, VAR_7);
 if (!VAR_5)
  return ((void*)0);

 VAR_8 = FUNC_0(VAR_5->component_index);
 return FUNC_1(VAR_1, VAR_8);
}
