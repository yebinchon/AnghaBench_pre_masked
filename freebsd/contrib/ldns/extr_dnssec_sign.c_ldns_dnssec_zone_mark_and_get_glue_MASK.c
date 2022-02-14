
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ ldns_status ;
typedef int ldns_rr_list ;
typedef int ldns_rdf ;
struct TYPE_10__ {scalar_t__ data; } ;
typedef TYPE_1__ ldns_rbnode_t ;
struct TYPE_11__ {int names; } ;
typedef TYPE_2__ ldns_dnssec_zone ;
struct TYPE_12__ {int is_glue; int rrsets; } ;
typedef TYPE_3__ ldns_dnssec_name ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int * FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 TYPE_1__* FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (TYPE_1__*) ;

ldns_status
FUNC_6(ldns_dnssec_zone *VAR_6,
 ldns_rr_list *VAR_7)
{
 ldns_rbnode_t *VAR_8;
 ldns_dnssec_name *VAR_9;
 ldns_rdf *VAR_10;
 ldns_rdf *VAR_11 = ((void*)0);



 int VAR_12 = -1;
 ldns_status VAR_13;

 if (!VAR_6 || !VAR_6->names) {
  return VAR_4;
 }
 for (VAR_8 = FUNC_4(VAR_6->names);
   VAR_8 != VAR_0;
   VAR_8 = FUNC_5(VAR_8)) {
  VAR_9 = (ldns_dnssec_name *) VAR_8->data;
  VAR_10 = FUNC_2(VAR_9);

  if (VAR_11) {
   if (FUNC_0(VAR_10, VAR_11) &&
     !FUNC_3(
     VAR_9->rrsets, VAR_3)) {

    if (VAR_12 && VAR_7) {
     VAR_13 = FUNC_1(
      VAR_9->rrsets, VAR_7);
     if (VAR_13 != VAR_5) {
      return VAR_13;
     }
    }
    VAR_9->is_glue = 1;
    continue;
   } else {
    VAR_11 = ((void*)0);
   }
  }





  if (FUNC_3(
    VAR_9->rrsets, VAR_2)
       && !FUNC_3(
    VAR_9->rrsets, VAR_3)) {
   VAR_11 = VAR_10;
   VAR_12 = 1;
   if (VAR_7) {
    VAR_13 = FUNC_1(
     VAR_9->rrsets, VAR_7);
    if (VAR_13 != VAR_5) {
     return VAR_13;
    }
   }
  } else if (FUNC_3(
    VAR_9->rrsets, VAR_1)) {
   VAR_11 = VAR_10;
   VAR_12 = 0;
  }
 }
 return VAR_5;
}
