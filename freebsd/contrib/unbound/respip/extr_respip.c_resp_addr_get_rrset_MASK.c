
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_packed_rrset_key {int dummy; } ;
struct resp_addr {struct ub_packed_rrset_key* data; } ;



struct ub_packed_rrset_key*
FUNC_0(struct resp_addr* VAR_0)
{
 return VAR_0 ? VAR_0->data : ((void*)0);
}
