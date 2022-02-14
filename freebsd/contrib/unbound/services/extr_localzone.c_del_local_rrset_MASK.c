
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct local_rrset {struct local_rrset* next; TYPE_2__* rrset; } ;
struct local_data {struct local_rrset* rrsets; } ;
struct TYPE_3__ {int type; } ;
struct TYPE_4__ {TYPE_1__ rk; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct local_data* VAR_0, uint16_t VAR_1)
{
 struct local_rrset* VAR_2=((void*)0), *VAR_3=VAR_0->rrsets;
 while(VAR_3 && FUNC_0(VAR_3->rrset->rk.type) != VAR_1) {
  VAR_2 = VAR_3;
  VAR_3 = VAR_3->next;
 }
 if(!VAR_3)
  return;

 if(VAR_2) VAR_2->next = VAR_3->next;
 else VAR_0->rrsets = VAR_3->next;

}
