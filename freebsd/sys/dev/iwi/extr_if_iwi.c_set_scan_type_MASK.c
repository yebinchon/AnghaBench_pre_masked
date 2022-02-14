
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct iwi_scan_ext {int* scan_type; } ;



__attribute__((used)) static __inline void
FUNC_0(struct iwi_scan_ext *VAR_0, int VAR_1, int VAR_2)
{
 uint8_t *VAR_3 = &VAR_0->scan_type[VAR_1 / 2];
 if (VAR_1 % 2)
  *VAR_3 = (*VAR_3 & 0xf0) | ((VAR_2 & 0xf) << 0);
 else
  *VAR_3 = (*VAR_3 & 0x0f) | ((VAR_2 & 0xf) << 4);
}
