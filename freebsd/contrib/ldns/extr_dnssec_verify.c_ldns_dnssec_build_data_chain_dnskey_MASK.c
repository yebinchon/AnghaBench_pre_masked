
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
typedef int ldns_rr_list ;
typedef int ldns_rr_class ;
typedef int ldns_resolver ;
typedef int ldns_rdf ;
typedef int const ldns_pkt ;
struct TYPE_5__ {TYPE_1__* parent; scalar_t__ parent_type; int signatures; } ;
typedef TYPE_2__ ldns_dnssec_data_chain ;
struct TYPE_4__ {void* packet_qtype; } ;


 void* VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *,int ,int *,int const*,int *) ;
 int FUNC_1 (int const*) ;
 int * FUNC_2 (int const*,int *,void*,int ) ;
 int const* FUNC_3 (int *,int *,void*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(ldns_resolver *VAR_2,
         uint16_t VAR_3,
         const ldns_pkt *VAR_4,
         ldns_rr_list *VAR_5,
      ldns_dnssec_data_chain *VAR_6,
      ldns_rdf *VAR_7,
      ldns_rr_class VAR_8) {
 ldns_rr_list *VAR_9;
 ldns_pkt *VAR_10;
 if (VAR_5 && FUNC_6(VAR_5) > 0) {
  VAR_6->signatures = FUNC_4(VAR_5);
  VAR_6->parent_type = 0;

  VAR_9 = FUNC_2(
      VAR_4,
     VAR_7,
     VAR_0,
     VAR_1
     );
  if (!VAR_9) {
   VAR_10 = FUNC_3(VAR_2,
         VAR_7,
         VAR_0,
         VAR_8,
         VAR_3);
   if (VAR_10) {
   VAR_9 = FUNC_2(
       VAR_10,
      VAR_7,
      VAR_0,
      VAR_1
      );
   VAR_6->parent = FUNC_0(VAR_2,
             VAR_3,
             VAR_9,
             VAR_10,
             ((void*)0));
   VAR_6->parent->packet_qtype = VAR_0;
   FUNC_1(VAR_10);
   }
  } else {
   VAR_6->parent = FUNC_0(VAR_2,
             VAR_3,
             VAR_9,
             VAR_4,
             ((void*)0));
   VAR_6->parent->packet_qtype = VAR_0;
  }
  FUNC_5(VAR_9);
 }
}
