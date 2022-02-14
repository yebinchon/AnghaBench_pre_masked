
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int ldns_rr_list ;
typedef scalar_t__ ldns_rr_class ;
typedef int ldns_rdf ;
struct TYPE_11__ {int _additional; int _answer; int _authority; } ;
typedef TYPE_1__ ldns_pkt ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int *,int ,scalar_t__,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (TYPE_1__*,int ) ;

ldns_pkt *
FUNC_11(ldns_rdf *VAR_4, ldns_rr_class VAR_5,
    const ldns_rr_list *VAR_6, const ldns_rr_list *VAR_7, const ldns_rr_list *VAR_8)
{
 ldns_pkt *VAR_9;

 if (!VAR_4 || !VAR_7) {
  return ((void*)0);
 }

 if (VAR_5 == 0) {
  VAR_5 = VAR_2;
 }


 VAR_9 = FUNC_0(VAR_4, VAR_3, VAR_5, VAR_1);
 if (!VAR_9) {
  return ((void*)0);
 }
 VAR_4 = ((void*)0);

 FUNC_4(VAR_9, VAR_0);

 FUNC_6(VAR_9->_authority);

 FUNC_3(VAR_9, FUNC_5(VAR_7));

 FUNC_10(VAR_9, FUNC_7(VAR_7));

 if (VAR_6) {
  FUNC_6(VAR_9->_answer);
  FUNC_2(VAR_9, FUNC_5(VAR_6));
  FUNC_9(VAR_9, FUNC_7(VAR_6));
 }

 if (VAR_8) {
  FUNC_6(VAR_9->_additional);
  FUNC_1(VAR_9, FUNC_5(VAR_8));
  FUNC_8(VAR_9, FUNC_7(VAR_8));
 }
 return VAR_9;
}
