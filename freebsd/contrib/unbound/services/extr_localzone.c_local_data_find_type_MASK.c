
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct local_rrset {TYPE_2__* rrset; struct local_rrset* next; } ;
struct local_data {struct local_rrset* rrsets; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct TYPE_4__ {TYPE_1__ rk; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static struct local_rrset*
FUNC_1(struct local_data* VAR_1, uint16_t VAR_2, int VAR_3)
{
 struct local_rrset* VAR_4;
 VAR_2 = FUNC_0(VAR_2);
 for(VAR_4 = VAR_1->rrsets; VAR_4; VAR_4 = VAR_4->next) {
  if(VAR_4->rrset->rk.type == VAR_2)
   return VAR_4;
  if(VAR_3 && VAR_4->rrset->rk.type == FUNC_0(VAR_0))
   return VAR_4;
 }
 return ((void*)0);
}
