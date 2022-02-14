
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct dccp_hdr {int dccph_doff; } ;


 int FUNC_0 (struct dccp_hdr const*) ;

__attribute__((used)) static inline u_int FUNC_1(const struct dccp_hdr* VAR_0, u_int VAR_1)
{
 u_int VAR_2;

 if (FUNC_0(VAR_0) == 0)
  return VAR_1;
 VAR_2 = (VAR_0->dccph_doff + FUNC_0(VAR_0) - 1) * sizeof(uint32_t);
 return (VAR_2 > VAR_1)? VAR_1 : VAR_2;
}
