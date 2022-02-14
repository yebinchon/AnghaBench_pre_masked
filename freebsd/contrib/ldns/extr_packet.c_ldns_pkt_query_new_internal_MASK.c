
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
typedef int ldns_rr_type ;
typedef int ldns_rr_class ;
typedef int ldns_rr ;
typedef int ldns_rdf ;
struct TYPE_7__ {int * _tsig_rr; } ;
typedef TYPE_1__ ldns_pkt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int ,int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static ldns_pkt *
FUNC_9(ldns_rdf *VAR_4, ldns_rr_type VAR_5,
 ldns_rr_class VAR_6, uint16_t VAR_7, ldns_rr* VAR_8)
{
 ldns_pkt *VAR_9;
 ldns_rr *VAR_10;

 VAR_9 = FUNC_1();
 if (!VAR_9) {
  return ((void*)0);
 }

 if (!FUNC_3(VAR_9, VAR_7)) {
  return ((void*)0);
 }

 VAR_10 = FUNC_4();
 if (!VAR_10) {
  FUNC_0(VAR_9);
  return ((void*)0);
 }

 if (VAR_5 == 0) {
  VAR_5 = VAR_1;
 }
 if (VAR_6 == 0) {
  VAR_6 = VAR_0;
 }

 FUNC_6(VAR_10, VAR_4);
 FUNC_8(VAR_10, VAR_5);
 FUNC_5(VAR_10, VAR_6);
        FUNC_7(VAR_10, 1);
 FUNC_2(VAR_9, VAR_3, VAR_10);

 if (VAR_8) {
  FUNC_2(VAR_9, VAR_2, VAR_8);
 }

 VAR_9->_tsig_rr = ((void*)0);
 return VAR_9;
}
