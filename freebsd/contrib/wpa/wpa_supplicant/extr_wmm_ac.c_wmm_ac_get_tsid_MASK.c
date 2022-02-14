
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmm_tspec_element {int* ts_info; } ;



__attribute__((used)) static inline u8 FUNC_0(const struct wmm_tspec_element *VAR_0)
{
 return (VAR_0->ts_info[0] >> 1) & 0x0f;
}
