
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct dccp_hdr {int dccph_type; } ;



__attribute__((used)) static inline bool
FUNC_0(const struct dccp_hdr *VAR_0, u_int16_t VAR_1)
{
 return VAR_1 & (1 << VAR_0->dccph_type);
}
