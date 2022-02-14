
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int type; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;
struct regional {int dummy; } ;
struct delegpt {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct delegpt*,struct regional*,struct ub_packed_rrset_key*,int ) ;
 int FUNC_1 (struct delegpt*,struct regional*,struct ub_packed_rrset_key*,int ) ;
 int FUNC_2 (struct delegpt*,struct regional*,struct ub_packed_rrset_key*,int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ) ;

int
FUNC_5(struct delegpt* VAR_3, struct regional* VAR_4,
        struct ub_packed_rrset_key* VAR_5, uint8_t VAR_6)
{
 if(!VAR_5)
  return 1;
 if(FUNC_4(VAR_5->rk.type) == VAR_2)
  return FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);
 else if(FUNC_4(VAR_5->rk.type) == VAR_0)
  return FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);
 else if(FUNC_4(VAR_5->rk.type) == VAR_1)
  return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_3("Unknown rrset type added to delegpt");
 return 1;
}
