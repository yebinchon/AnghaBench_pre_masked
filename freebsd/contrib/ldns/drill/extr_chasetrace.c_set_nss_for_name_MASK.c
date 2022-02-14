
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ldns_rr_list ;
typedef int ldns_rr_class ;
typedef int ldns_resolver ;
typedef int ldns_rdf ;
typedef int ldns_dnssec_zone ;
struct TYPE_4__ {TYPE_2__* rrs; } ;
typedef TYPE_1__ ldns_dnssec_rrsets ;
struct TYPE_5__ {int rr; struct TYPE_5__* next; } ;
typedef TYPE_2__ ldns_dnssec_rrs ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *,int *,int ) ;
 int * FUNC_4 (int *,int *,int ,int ) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 () ;
 scalar_t__ FUNC_15 (int *) ;
 int * FUNC_16 (int ,int ) ;

__attribute__((used)) static bool FUNC_17(
    ldns_resolver *VAR_4, ldns_dnssec_zone *VAR_5, ldns_rdf *VAR_6,
    ldns_resolver *VAR_7, ldns_rr_class VAR_8)
{
 ldns_dnssec_rrsets *VAR_9 = ((void*)0);
 ldns_dnssec_rrs *VAR_10;
 ldns_dnssec_rrsets *VAR_11 = ((void*)0);
 ldns_dnssec_rrs *VAR_12;
 ldns_rdf *VAR_13 = FUNC_5(VAR_6);
 ldns_rdf *VAR_14;
 ldns_rdf *VAR_15;
 ldns_rr_list *VAR_16;


 for (;;) {
  VAR_9 = FUNC_3(
      VAR_5, VAR_13, VAR_2);
  if (VAR_9 != ((void*)0)) {
   FUNC_6(VAR_13);
   break;
  }
  VAR_14 = FUNC_2(VAR_13);
  FUNC_6(VAR_13);
  VAR_13 = VAR_14;
  if (!VAR_13) {
   FUNC_1("No referrals for name found");
   return 0;
  }
 }


 while ((VAR_15 = FUNC_8(VAR_4)))
  FUNC_6(VAR_15);


 for (VAR_10 = VAR_9->rrs; VAR_10; VAR_10 = VAR_10->next) {

  if ((VAR_11 = FUNC_3(
      VAR_5, FUNC_16(VAR_10->rr, 0), VAR_0)))
   for (VAR_12 = VAR_11->rrs; VAR_12; VAR_12 = VAR_12->next)
    (void) FUNC_9(
        VAR_4, FUNC_16(VAR_12->rr, 0));

  if ((VAR_11 = FUNC_3(
      VAR_5, FUNC_16(VAR_10->rr, 0), VAR_1)))
   for (VAR_12 = VAR_11->rrs; VAR_12; VAR_12 = VAR_12->next)
    (void) FUNC_9(
        VAR_4, FUNC_16(VAR_12->rr, 0));
 }

 if (FUNC_7(VAR_4) > 0)
  return 1;


 VAR_16 = FUNC_14();
 for (VAR_10 = VAR_9->rrs; VAR_10; VAR_10 = VAR_10->next) {
  ldns_rr_list *VAR_17 =
      FUNC_4(
   VAR_7, FUNC_16(VAR_10->rr, 0), VAR_8, 0);
  FUNC_11(VAR_16, VAR_17);
  FUNC_13(VAR_17);
 }

 if (FUNC_15(VAR_16) == 0)
  FUNC_1("Could not find the nameserver ip addr; abort");

 else if (FUNC_10(VAR_4, VAR_16) !=
     VAR_3)

  FUNC_1("Error adding new nameservers");
 else {
  FUNC_12(VAR_16);
  return 1;
 }
 FUNC_0(VAR_5, VAR_16);
 FUNC_12(VAR_16);
 return 0;
}
