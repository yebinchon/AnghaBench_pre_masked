
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_char ;
struct dccp_hdr_ext {int dccph_seq; } ;
struct dccp_hdr {int dccph_seq; } ;


 scalar_t__ FUNC_0 (struct dccp_hdr const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static uint64_t FUNC_3(const u_char *VAR_0)
{
 const struct dccp_hdr *VAR_1 = (const struct dccp_hdr *)VAR_0;
 uint64_t VAR_2;

 if (FUNC_0(VAR_1) != 0) {
  const struct dccp_hdr_ext *VAR_3 = (const struct dccp_hdr_ext *)VAR_0;
  VAR_2 = FUNC_2(VAR_3->dccph_seq);
 } else {
  VAR_2 = FUNC_1(VAR_1->dccph_seq);
 }

 return VAR_2;
}
