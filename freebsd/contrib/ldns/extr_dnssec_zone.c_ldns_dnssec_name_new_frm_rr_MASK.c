
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ldns_rr ;
struct TYPE_6__ {int name; } ;
typedef TYPE_1__ ldns_dnssec_name ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (int *) ;

ldns_dnssec_name *
FUNC_4(ldns_rr *VAR_1)
{
 ldns_dnssec_name *VAR_2 = FUNC_2();

 VAR_2->name = FUNC_3(VAR_1);
 if(FUNC_0(VAR_2, VAR_1) != VAR_0) {
  FUNC_1(VAR_2);
  return ((void*)0);
 }

 return VAR_2;
}
