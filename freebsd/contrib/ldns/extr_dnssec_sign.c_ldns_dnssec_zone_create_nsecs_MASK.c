
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ ldns_status ;
typedef int ldns_rr_list ;
typedef int ldns_rr ;
struct TYPE_10__ {scalar_t__ data; } ;
typedef TYPE_2__ ldns_rbnode_t ;
struct TYPE_11__ {int names; int soa; } ;
typedef TYPE_3__ ldns_dnssec_zone ;
struct TYPE_12__ {TYPE_1__* rrs; } ;
typedef TYPE_4__ ldns_dnssec_rrsets ;
typedef int ldns_dnssec_name ;
struct TYPE_9__ {scalar_t__ rr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_0 (int *,int *,int ) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 TYPE_4__* FUNC_2 (int ,int ) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int * FUNC_9 (scalar_t__,int) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (char*) ;

ldns_status
FUNC_12(ldns_dnssec_zone *VAR_5,
                              ldns_rr_list *VAR_6)
{

 ldns_rbnode_t *VAR_7, *VAR_8, *VAR_9;
 ldns_dnssec_name *VAR_10, *VAR_11;
 ldns_rr *VAR_12;
 uint32_t VAR_13;
 ldns_dnssec_rrsets *VAR_14;




 VAR_14 = FUNC_2(VAR_5->soa, VAR_2);




 if (VAR_14 && VAR_14->rrs && VAR_14->rrs->rr
   && (FUNC_9(VAR_14->rrs->rr, 6) != ((void*)0))) {
  VAR_13 = FUNC_6(FUNC_9(VAR_14->rrs->rr, 6));
 } else {
  VAR_13 = VAR_0;
 }

 VAR_7 = FUNC_3(
          FUNC_4(VAR_5->names));
 VAR_8 = VAR_7;
 if (VAR_8) {
  VAR_9 = FUNC_3(
              FUNC_5(VAR_8));
 } else {
  VAR_9 = ((void*)0);
 }

 while (VAR_8 && VAR_9) {
  VAR_10 = (ldns_dnssec_name *)VAR_8->data;
  VAR_11 = (ldns_dnssec_name *)VAR_9->data;
  VAR_12 = FUNC_0(VAR_10,
                                    VAR_11,
                                    VAR_1);
  FUNC_10(VAR_12, VAR_13);
  if(FUNC_1(VAR_10, VAR_12)!=VAR_4){
   FUNC_7(VAR_12);
   return VAR_3;
  }
  FUNC_8(VAR_6, VAR_12);
  VAR_8 = VAR_9;
  if (VAR_8) {
   VAR_9 = FUNC_3(
                               FUNC_5(VAR_8));
  }
 }

 if (VAR_8 && !VAR_9) {
  VAR_10 = (ldns_dnssec_name *)VAR_8->data;
  VAR_11 = (ldns_dnssec_name *)VAR_7->data;
  VAR_12 = FUNC_0(VAR_10,
                                    VAR_11,
                                    VAR_1);
  FUNC_10(VAR_12, VAR_13);
  if(FUNC_1(VAR_10, VAR_12)!=VAR_4){
   FUNC_7(VAR_12);
   return VAR_3;
  }
  FUNC_8(VAR_6, VAR_12);
 } else {
  FUNC_11("error\n");
 }

 return VAR_4;
}
