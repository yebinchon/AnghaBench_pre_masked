
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mlxfw_mfa2_tlv {scalar_t__ type; void const* data; int len; } ;
struct mlxfw_mfa2_file {int dummy; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct mlxfw_mfa2_file const*,scalar_t__ const*) ;

__attribute__((used)) static inline const void *
FUNC_2(const struct mlxfw_mfa2_file *VAR_0,
      const struct mlxfw_mfa2_tlv *VAR_1, u8 VAR_2,
      size_t VAR_3, bool VAR_4)
{
 const u8 *VAR_5;

 VAR_5 = (const u8 *) VAR_1 + FUNC_0(VAR_1->len) - 1;
 if (!FUNC_1(VAR_0, (const u8 *) VAR_1) ||
     !FUNC_1(VAR_0, VAR_5))
  return ((void*)0);
 if (VAR_1->type != VAR_2)
  return ((void*)0);
 if (VAR_4 && (FUNC_0(VAR_1->len) < VAR_3))
  return ((void*)0);
 if (!VAR_4 && (FUNC_0(VAR_1->len) != VAR_3))
  return ((void*)0);

 return VAR_1->data;
}
