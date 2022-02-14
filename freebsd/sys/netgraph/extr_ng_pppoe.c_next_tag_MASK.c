
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pppoe_tag {int dummy; } ;
struct pppoe_hdr {int length; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static __inline const struct pppoe_tag*
FUNC_1(const struct pppoe_hdr* VAR_0)
{
 return (const struct pppoe_tag*)(((const char*)(VAR_0 + 1))
     + FUNC_0(VAR_0->length));
}
