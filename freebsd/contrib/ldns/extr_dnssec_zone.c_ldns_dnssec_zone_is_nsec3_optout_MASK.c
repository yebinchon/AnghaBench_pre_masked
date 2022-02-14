
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ldns_rr ;
struct TYPE_9__ {scalar_t__ data; } ;
typedef TYPE_1__ ldns_rbnode_t ;
struct TYPE_10__ {int names; int soa; } ;
typedef TYPE_2__ ldns_dnssec_zone ;
struct TYPE_11__ {int * nsec; } ;
typedef TYPE_3__ ldns_dnssec_name ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *) ;

bool
FUNC_5(const ldns_dnssec_zone* VAR_3)
{
 ldns_rr* VAR_4;
 ldns_rbnode_t* VAR_5;

 if (FUNC_0(VAR_3->soa, VAR_2)) {
  VAR_5 = FUNC_2(VAR_3->names);
  while (VAR_5 != VAR_0) {
   VAR_4 = ((ldns_dnssec_name*)VAR_5->data)->nsec;
   if (VAR_4 &&FUNC_4(VAR_4)
     == VAR_1 &&
     FUNC_1(VAR_4)) {
    return 1;
   }
   VAR_5 = FUNC_3(VAR_5);
  }
 }
 return 0;
}
