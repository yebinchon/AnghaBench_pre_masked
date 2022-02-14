
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dpp_curve_params {int hash_len; } ;


 int FUNC_0 (size_t,int const**,size_t const*,int *) ;
 int FUNC_1 (size_t,int const**,size_t const*,int *) ;
 int FUNC_2 (size_t,int const**,size_t const*,int *) ;

__attribute__((used)) static int FUNC_3(const struct dpp_curve_params *VAR_0,
      size_t VAR_1, const u8 *VAR_2[], const size_t *VAR_3,
      u8 *VAR_4)
{
 if (VAR_0->hash_len == 32)
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_0->hash_len == 48)
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_0->hash_len == 64)
  return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
 return -1;
}
