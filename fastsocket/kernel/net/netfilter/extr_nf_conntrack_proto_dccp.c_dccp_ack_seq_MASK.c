
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct dccp_hdr_ack_bits {int dccph_ack_nr_low; int dccph_ack_nr_high; } ;
struct dccp_hdr {int dummy; } ;


 int FUNC_0 (struct dccp_hdr const*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static u64 FUNC_3(const struct dccp_hdr *VAR_0)
{
 const struct dccp_hdr_ack_bits *VAR_1;

 VAR_1 = (void *)VAR_0 + FUNC_0(VAR_0);
 return ((u64)FUNC_2(VAR_1->dccph_ack_nr_high) << 32) +
       FUNC_1(VAR_1->dccph_ack_nr_low);
}
