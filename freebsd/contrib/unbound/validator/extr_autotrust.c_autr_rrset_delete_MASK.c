
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct ub_packed_rrset_key* data; } ;
struct TYPE_3__ {struct ub_packed_rrset_key* dname; } ;
struct ub_packed_rrset_key {TYPE_2__ entry; TYPE_1__ rk; } ;


 int FUNC_0 (struct ub_packed_rrset_key*) ;

__attribute__((used)) static void
FUNC_1(struct ub_packed_rrset_key* VAR_0)
{
 if(VAR_0) {
  FUNC_0(VAR_0->rk.dname);
  FUNC_0(VAR_0->entry.data);
  FUNC_0(VAR_0);
 }
}
