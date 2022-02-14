
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int type; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;
struct TYPE_6__ {scalar_t__ _compress; } ;
typedef TYPE_2__ sldns_rr_descriptor ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_2__ const* FUNC_1 (int ) ;

__attribute__((used)) static const sldns_rr_descriptor*
FUNC_2(struct ub_packed_rrset_key* VAR_1)
{
 uint16_t VAR_2 = FUNC_0(VAR_1->rk.type);
 if(FUNC_1(VAR_2) &&
  FUNC_1(VAR_2)->_compress == VAR_0)
  return FUNC_1(VAR_2);
 return 0;
}
