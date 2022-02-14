
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlxfw_mfa2_tlv {int dummy; } ;
struct mlxfw_mfa2_file {int dummy; } ;


 int FUNC_0 (struct mlxfw_mfa2_file const*,int const*) ;

__attribute__((used)) static inline const struct mlxfw_mfa2_tlv *
FUNC_1(const struct mlxfw_mfa2_file *VAR_0, const u8 *VAR_1)
{
 if (!FUNC_0(VAR_0, VAR_1) ||
     !FUNC_0(VAR_0, VAR_1 + sizeof(struct mlxfw_mfa2_tlv)))
  return ((void*)0);
 return (const struct mlxfw_mfa2_tlv *) VAR_1;
}
