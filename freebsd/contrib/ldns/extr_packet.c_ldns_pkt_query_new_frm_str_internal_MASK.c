
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint16_t ;
typedef scalar_t__ ldns_status ;
typedef int ldns_rr_type ;
typedef int ldns_rr_class ;
typedef int ldns_rr ;
typedef int ldns_rdf ;
struct TYPE_8__ {int * _tsig_rr; } ;
typedef TYPE_1__ ldns_pkt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int ,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int ) ;
 scalar_t__ FUNC_11 (int **,char const*) ;

__attribute__((used)) static ldns_status
FUNC_12(ldns_pkt **VAR_8, const char *VAR_9,
 ldns_rr_type VAR_10, ldns_rr_class VAR_11, uint16_t VAR_12,
 ldns_rr* VAR_13)
{
 ldns_pkt *VAR_14;
 ldns_rr *VAR_15;
 ldns_rdf *VAR_16;

 VAR_14 = FUNC_1();
 if (!VAR_14) {
  return VAR_5;
 }

 if (!FUNC_4(VAR_14, VAR_12)) {
  return VAR_4;
 }

 VAR_15 = FUNC_6();
 if (!VAR_15) {
  return VAR_5;
 }

 if (VAR_10 == 0) {
  VAR_10 = VAR_1;
 }
 if (VAR_11 == 0) {
  VAR_11 = VAR_0;
 }

 if (FUNC_11(&VAR_16, VAR_9) == VAR_7) {
  FUNC_8(VAR_15, VAR_16);
  FUNC_10(VAR_15, VAR_10);
  FUNC_7(VAR_15, VAR_11);
                FUNC_9(VAR_15, 1);

  FUNC_2(VAR_14, VAR_3, VAR_15);
 } else {
  FUNC_5(VAR_15);
  FUNC_0(VAR_14);
  return VAR_4;
 }

 if (VAR_13) {
  FUNC_2(VAR_14, VAR_2, VAR_13);
 }

 VAR_14->_tsig_rr = ((void*)0);
 FUNC_3(VAR_14, ((void*)0));
 if (VAR_8) {
  *VAR_8 = VAR_14;
  return VAR_7;
 } else {
  FUNC_0(VAR_14);
  return VAR_6;
 }
}
