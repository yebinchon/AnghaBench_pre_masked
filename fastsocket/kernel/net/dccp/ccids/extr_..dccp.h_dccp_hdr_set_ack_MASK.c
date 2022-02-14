
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct dccp_hdr_ack_bits {int dccph_ack_nr_low; int dccph_ack_nr_high; scalar_t__ dccph_reserved1; } ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int const) ;

__attribute__((used)) static inline void FUNC_2(struct dccp_hdr_ack_bits *VAR_0,
        const u64 VAR_1)
{
 VAR_0->dccph_reserved1 = 0;
 VAR_0->dccph_ack_nr_high = FUNC_1(VAR_1 >> 32);
 VAR_0->dccph_ack_nr_low = FUNC_0(VAR_1 & 0xffffffff);
}
