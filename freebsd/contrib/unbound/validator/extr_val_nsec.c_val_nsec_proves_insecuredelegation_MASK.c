
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dname; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;
struct query_info {scalar_t__ qtype; int qname; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct ub_packed_rrset_key*,scalar_t__) ;

int FUNC_3(struct ub_packed_rrset_key* VAR_3,
 struct query_info* VAR_4)
{
 if(FUNC_2(VAR_3, VAR_1) &&
  !FUNC_2(VAR_3, VAR_0) &&
  !FUNC_2(VAR_3, VAR_2)) {

  if(VAR_4->qtype == VAR_0) {


   if(FUNC_0(VAR_4->qname,
    VAR_3->rk.dname))
    return 1;
  } else {
   if(FUNC_1(VAR_4->qname, VAR_3->rk.dname))
    return 1;
  }
 }
 return 0;
}
