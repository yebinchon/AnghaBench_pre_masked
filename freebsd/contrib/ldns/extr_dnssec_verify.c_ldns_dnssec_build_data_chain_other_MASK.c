
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
typedef int ldns_rr_list ;
typedef int ldns_rr_class ;
typedef int ldns_resolver ;
typedef int ldns_rdf ;
typedef int ldns_pkt ;
struct TYPE_4__ {int parent_type; int * signatures; TYPE_3__* parent; } ;
typedef TYPE_1__ ldns_dnssec_data_chain ;
struct TYPE_5__ {int packet_qtype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_0 (int *,int ,int *,int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *,int ,int ) ;
 int * FUNC_3 (int *,int *,int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(ldns_resolver *VAR_5,
         uint16_t VAR_6,
      ldns_dnssec_data_chain *VAR_7,
      ldns_rdf *VAR_8,
      ldns_rr_class VAR_9,
      ldns_rr_list *VAR_10)
{
 ldns_pkt *VAR_11;
 ldns_rr_list *VAR_12;

 VAR_7->parent_type = 1;

 VAR_11 = FUNC_3(VAR_5,
       VAR_8,
       VAR_1,
       VAR_9,
       VAR_6);
 if (VAR_11) {
 VAR_10 = FUNC_2(VAR_11,
         VAR_8,
         VAR_1,
         VAR_4
         );
 if (VAR_10) {
  VAR_7->parent = FUNC_0(VAR_5,
            VAR_6,
            VAR_10,
            VAR_11,
            ((void*)0));
  VAR_7->parent->packet_qtype = VAR_1;
  FUNC_4(VAR_10);
 }
 FUNC_1(VAR_11);
 }

 VAR_11 = FUNC_3(VAR_5,
       VAR_8,
       VAR_0,
       VAR_9,
       VAR_6);
 if (VAR_11) {
 VAR_12 = FUNC_2(VAR_11,
             VAR_8,
             VAR_2,
             VAR_3);
 if (VAR_12) {
  if (VAR_7->signatures) {
   FUNC_5("There were already sigs!\n");
   FUNC_4(VAR_7->signatures);
   FUNC_5("replacing the old sigs\n");
  }
  VAR_7->signatures = VAR_12;
 }
 FUNC_1(VAR_11);
 }
}
