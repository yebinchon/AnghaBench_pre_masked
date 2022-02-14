
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dccp_hdr_ext {int dummy; } ;
struct dccp_hdr {int dummy; } ;


 scalar_t__ FUNC_0 (struct dccp_hdr const*) ;

__attribute__((used)) static inline unsigned int FUNC_1(const struct dccp_hdr *VAR_0)
{
 return FUNC_0(VAR_0) ? sizeof(struct dccp_hdr_ext) : sizeof(struct dccp_hdr);
}
