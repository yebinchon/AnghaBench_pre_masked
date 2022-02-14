
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* parent; int signatures; int rrset; } ;
typedef TYPE_1__ ldns_dnssec_data_chain ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

void
FUNC_2(ldns_dnssec_data_chain *VAR_0)
{
 FUNC_1(VAR_0->rrset);
 FUNC_1(VAR_0->signatures);
 if (VAR_0->parent) {
  FUNC_2(VAR_0->parent);
 }
 FUNC_0(VAR_0);
}
