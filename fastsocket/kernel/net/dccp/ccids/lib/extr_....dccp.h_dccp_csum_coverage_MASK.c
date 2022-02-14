
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {unsigned int len; } ;
struct dccp_hdr {int dccph_cscov; int dccph_doff; } ;


 struct dccp_hdr* FUNC_0 (struct sk_buff const*) ;

__attribute__((used)) static inline unsigned int FUNC_1(const struct sk_buff *VAR_0)
{
 const struct dccp_hdr* VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->dccph_cscov == 0)
  return VAR_0->len;
 return (VAR_1->dccph_doff + VAR_1->dccph_cscov - 1) * sizeof(u32);
}
