
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct icl_pdu {TYPE_1__* ip_bhs; } ;
struct TYPE_2__ {int bhs_total_ahs_len; } ;



__attribute__((used)) static int
FUNC_0(const struct icl_pdu *VAR_0)
{

 return (VAR_0->ip_bhs->bhs_total_ahs_len * 4);
}
