
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef scalar_t__ ldns_status ;
typedef scalar_t__ ldns_rr_type ;
typedef int ldns_rr ;
typedef int ldns_rdf ;
struct TYPE_7__ {scalar_t__ type; struct TYPE_7__* next; } ;
typedef TYPE_1__ ldns_dnssec_rrsets ;
struct TYPE_8__ {scalar_t__ hashed_name; TYPE_1__* rrsets; } ;
typedef TYPE_2__ ldns_dnssec_name ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ,int const*) ;
 int FUNC_1 (scalar_t__*,size_t,int ) ;
 int FUNC_2 (TYPE_2__ const*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (int *,int ,int ,int ,int ,int const*) ;
 int FUNC_5 (int ,int ,int ,int ,int const*) ;
 int * FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int *,int) ;

ldns_rr *
FUNC_13(const ldns_dnssec_name *VAR_6,
     const ldns_dnssec_name *VAR_7,
     const ldns_rdf *VAR_8,
     uint8_t VAR_9,
     uint8_t VAR_10,
     uint16_t VAR_11,
     uint8_t VAR_12,
     const uint8_t *VAR_13)
{
 ldns_rr *VAR_14;
 ldns_rr_type VAR_15[65536];
 size_t VAR_16 = 0;
 ldns_dnssec_rrsets *VAR_17;
 ldns_status VAR_18;
 int VAR_19;

 if (!VAR_6) {
  return ((void*)0);
 }

 VAR_14 = FUNC_8(VAR_2);
 FUNC_11(VAR_14,
                   FUNC_5(FUNC_2(VAR_6),
                   VAR_9,
                   VAR_11,
                   VAR_12,
                   VAR_13));
 VAR_18 = FUNC_0(FUNC_9(VAR_14), VAR_8);
        if(VAR_18 != VAR_5) {
                FUNC_7(VAR_14);
                return ((void*)0);
        }
 FUNC_4(VAR_14,
                           VAR_9,
                           VAR_10,
                           VAR_11,
                           VAR_12,
                           VAR_13);

 VAR_19 = FUNC_3(
   VAR_6->rrsets, VAR_1)
  && !FUNC_3(
   VAR_6->rrsets, VAR_4);
 VAR_17 = VAR_6->rrsets;
 while (VAR_17) {






  if ((VAR_19 && (
    VAR_17->type == VAR_1
        || VAR_17->type == VAR_0))
   || (!VAR_19 &&
    VAR_17->type != VAR_3)) {

   VAR_15[VAR_16] = VAR_17->type;
   VAR_16++;
  }
  VAR_17 = VAR_17->next;
 }



 if (VAR_16 > 0 &&
     !(VAR_16 == 1 && VAR_15[0] == VAR_1)) {
  VAR_15[VAR_16] = VAR_3;
  VAR_16++;
 }


 if (VAR_7 && VAR_7->hashed_name) {
  (void) FUNC_12(VAR_14,
                         FUNC_6(VAR_7->hashed_name),
                         4);
 } else {
  (void) FUNC_12(VAR_14, ((void*)0), 4);
 }

 FUNC_10(VAR_14,
                  FUNC_1(VAR_15,
                  VAR_16,
                  VAR_2));

 return VAR_14;
}
