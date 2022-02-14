
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mlxfw_mfa2_tlv_multi {int total_len; } ;
struct mlxfw_mfa2_tlv {scalar_t__ type; } ;
struct mlxfw_mfa2_file {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mlxfw_mfa2_tlv const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 struct mlxfw_mfa2_tlv const* FUNC_3 (struct mlxfw_mfa2_file const*,int const*) ;
 struct mlxfw_mfa2_tlv_multi* FUNC_4 (struct mlxfw_mfa2_file const*,struct mlxfw_mfa2_tlv const*) ;

const struct mlxfw_mfa2_tlv *
FUNC_5(const struct mlxfw_mfa2_file *VAR_1,
      const struct mlxfw_mfa2_tlv *VAR_2)
{
 const struct mlxfw_mfa2_tlv_multi *VAR_3;
 u16 VAR_4;
 const u8 *VAR_5;

 VAR_4 = FUNC_0(VAR_2);

 if (VAR_2->type == VAR_0) {
  VAR_3 = FUNC_4(VAR_1, VAR_2);
  VAR_4 = FUNC_1(VAR_4 + FUNC_2(VAR_3->total_len));
 }

 VAR_5 = (const u8 *) VAR_2 + VAR_4;
 return FUNC_3(VAR_1, VAR_5);
}
