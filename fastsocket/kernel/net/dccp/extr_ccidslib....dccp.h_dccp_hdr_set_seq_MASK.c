
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct dccp_hdr_ext {int dccph_seq_low; } ;
struct dccp_hdr {int dccph_seq; scalar_t__ dccph_seq2; } ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int const) ;

__attribute__((used)) static inline void FUNC_2(struct dccp_hdr *VAR_0, const u64 VAR_1)
{
 struct dccp_hdr_ext *VAR_2 = (struct dccp_hdr_ext *)((void *)VAR_0 +
          sizeof(*VAR_0));
 VAR_0->dccph_seq2 = 0;
 VAR_0->dccph_seq = FUNC_1((VAR_1 >> 32) & 0xfffff);
 VAR_2->dccph_seq_low = FUNC_0(VAR_1 & 0xffffffff);
}
