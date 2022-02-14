
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
typedef int ldns_rr_list ;
typedef int ldns_rr ;
typedef int ldns_resolver ;
typedef int ldns_rdf ;
typedef int ldns_pkt ;
struct TYPE_5__ {TYPE_4__* parent; } ;
typedef TYPE_1__ ldns_dnssec_data_chain ;
struct TYPE_6__ {int packet_qtype; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (int *,int ,int *,int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *,int ,int ,int ) ;
 int * FUNC_4 (int const*,int ) ;
 scalar_t__ FUNC_5 (int const*) ;
 int * FUNC_6 (int *) ;

__attribute__((used)) static ldns_dnssec_data_chain *
FUNC_7(ldns_resolver *VAR_2,
                                       uint16_t VAR_3,
                                       ldns_rr *VAR_4,
                                       const ldns_rr_list *VAR_5,
                                       ldns_dnssec_data_chain *VAR_6)
{
 ldns_rdf *VAR_7;
 ldns_pkt *VAR_8;




 if (VAR_4) {
  VAR_7 = FUNC_6(VAR_4);
 } else if (VAR_5 && FUNC_5(VAR_5) > 0) {
  VAR_7 = FUNC_6(FUNC_4(VAR_5, 0));
 } else {

  return VAR_6;
 }

 VAR_8 = FUNC_3(VAR_2,
               VAR_7,
               VAR_1,
               VAR_0,
               VAR_3);
 if (!VAR_8) {
  return VAR_6;
 }

 if (FUNC_1(VAR_8) > 0) {


  FUNC_2(VAR_8);
 } else {

  VAR_6->parent = FUNC_0(VAR_2,
                            VAR_3,
                            ((void*)0),
                            VAR_8,
                            ((void*)0));

  VAR_6->parent->packet_qtype = VAR_1;

 }
 return VAR_6;
}
