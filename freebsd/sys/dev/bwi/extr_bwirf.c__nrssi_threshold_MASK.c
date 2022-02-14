
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwi_rf {int* rf_nrssi; } ;
typedef int int32_t ;



__attribute__((used)) static __inline int32_t
FUNC_0(const struct bwi_rf *VAR_0, int32_t VAR_1)
{
 VAR_1 *= (VAR_0->rf_nrssi[1] - VAR_0->rf_nrssi[0]);
 VAR_1 += (VAR_0->rf_nrssi[0] << 6);
 if (VAR_1 < 32)
  VAR_1 += 31;
 else
  VAR_1 += 32;
 VAR_1 >>= 6;
 if (VAR_1 < -31)
  VAR_1 = -31;
 else if (VAR_1 > 31)
  VAR_1 = 31;
 return VAR_1;
}
