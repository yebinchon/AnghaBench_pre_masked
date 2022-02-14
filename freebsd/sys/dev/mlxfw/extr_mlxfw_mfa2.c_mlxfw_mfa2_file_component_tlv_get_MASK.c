
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct mlxfw_mfa2_tlv_multi {int dummy; } ;
struct mlxfw_mfa2_tlv_component_descriptor {int dummy; } ;
struct mlxfw_mfa2_tlv {int dummy; } ;
struct mlxfw_mfa2_file {scalar_t__ component_count; int first_component; } ;


 struct mlxfw_mfa2_tlv* FUNC_0 (struct mlxfw_mfa2_file const*,int ,scalar_t__) ;
 struct mlxfw_mfa2_tlv_component_descriptor const* FUNC_1 (struct mlxfw_mfa2_file const*,struct mlxfw_mfa2_tlv const*) ;
 struct mlxfw_mfa2_tlv* FUNC_2 (struct mlxfw_mfa2_file const*,struct mlxfw_mfa2_tlv_multi const*) ;
 struct mlxfw_mfa2_tlv_multi* FUNC_3 (struct mlxfw_mfa2_file const*,struct mlxfw_mfa2_tlv const*) ;

__attribute__((used)) static const struct mlxfw_mfa2_tlv_component_descriptor *
FUNC_4(const struct mlxfw_mfa2_file *VAR_0,
      u16 VAR_1)
{
 const struct mlxfw_mfa2_tlv_multi *VAR_2;
 const struct mlxfw_mfa2_tlv *VAR_3;
 const struct mlxfw_mfa2_tlv *VAR_4;

 if (VAR_1 > VAR_0->component_count)
  return ((void*)0);

 VAR_4 = FUNC_0(VAR_0, VAR_0->first_component,
       VAR_1);
 if (!VAR_4)
  return ((void*)0);

 VAR_2 = FUNC_3(VAR_0, VAR_4);
 if (!VAR_2)
  return ((void*)0);

 VAR_3 = FUNC_2(VAR_0, VAR_2);
 if (!VAR_3)
  return ((void*)0);

 return FUNC_1(VAR_0, VAR_3);
}
