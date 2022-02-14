
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* names; } ;
typedef TYPE_1__ ldns_dnssec_zone ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ,int *) ;

void
FUNC_2(ldns_dnssec_zone *VAR_1)
{
 if (VAR_1) {
  if (VAR_1->names) {

   FUNC_1(VAR_1->names,
          VAR_0,
          ((void*)0));
   FUNC_0(VAR_1->names);
  }
  FUNC_0(VAR_1);
 }
}
