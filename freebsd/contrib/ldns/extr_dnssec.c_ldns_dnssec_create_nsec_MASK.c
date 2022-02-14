
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ldns_rr_type ;
typedef int ldns_rr ;
struct TYPE_7__ {scalar_t__ type; struct TYPE_7__* next; } ;
typedef TYPE_1__ ldns_dnssec_rrsets ;
struct TYPE_8__ {TYPE_1__* rrsets; } ;
typedef TYPE_2__ ldns_dnssec_name ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__*,size_t,scalar_t__) ;
 int FUNC_1 (TYPE_2__ const*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,scalar_t__) ;

ldns_rr *
FUNC_8(const ldns_dnssec_name *VAR_5,
                        const ldns_dnssec_name *VAR_6,
                        ldns_rr_type VAR_7)
{
 ldns_rr *VAR_8;
 ldns_rr_type VAR_9[65536];
 size_t VAR_10 = 0;
 ldns_dnssec_rrsets *VAR_11;
 int VAR_12;

 if (!VAR_5 || !VAR_6 || (VAR_7 != VAR_2)) {
  return ((void*)0);
 }

 VAR_8 = FUNC_4();
 FUNC_7(VAR_8, VAR_7);
 FUNC_6(VAR_8, FUNC_3(FUNC_1(VAR_5)));
 FUNC_5(VAR_8, FUNC_3(FUNC_1(VAR_6)));

 VAR_12 = FUNC_2(
   VAR_5->rrsets, VAR_1)
  && !FUNC_2(
   VAR_5->rrsets, VAR_4);

 VAR_11 = VAR_5->rrsets;
 while (VAR_11) {


  if ((VAR_12 && (
    VAR_11->type == VAR_1
        || VAR_11->type == VAR_0))
   || (!VAR_12 &&
    VAR_11->type != VAR_3
        && VAR_11->type != VAR_2)) {

   VAR_9[VAR_10] = VAR_11->type;
   VAR_10++;
  }
  VAR_11 = VAR_11->next;

 }
 VAR_9[VAR_10] = VAR_3;
 VAR_10++;
 VAR_9[VAR_10] = VAR_2;
 VAR_10++;

 FUNC_5(VAR_8, FUNC_0(VAR_9,
                                VAR_10,
                                VAR_7));

 return VAR_8;
}
