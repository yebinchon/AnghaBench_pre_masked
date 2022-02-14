
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ldns_status ;
typedef int ldns_rr_list ;
struct TYPE_3__ {size_t parent_count; scalar_t__* parent_status; scalar_t__ rr; struct TYPE_3__** parents; } ;
typedef TYPE_1__ ldns_dnssec_trust_tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,size_t) ;
 size_t FUNC_3 (int *) ;

ldns_status
FUNC_4(ldns_dnssec_trust_tree *VAR_5,
         ldns_rr_list *VAR_6)
{
 size_t VAR_7;
 ldns_status VAR_8 = VAR_1;
 bool VAR_9;
 ldns_status VAR_10;

 if (VAR_5 && VAR_6 && FUNC_3(VAR_6) > 0)
  { if (VAR_5->rr) {
    for (VAR_7 = 0; VAR_7 < FUNC_3(VAR_6); VAR_7++) {
     VAR_9 = FUNC_0(
         VAR_5->rr,
         FUNC_2(VAR_6, VAR_7));
     if (VAR_9) {
      VAR_8 = VAR_4;
      return VAR_8;
     }
    }
   }
   for (VAR_7 = 0; VAR_7 < VAR_5->parent_count; VAR_7++) {
    VAR_10 =
     FUNC_4(VAR_5->parents[VAR_7],
              VAR_6);
    if (VAR_10 != VAR_1) {
     if (VAR_5->parent_status[VAR_7] != VAR_4) {
      VAR_8 = VAR_5->parent_status[VAR_7];
     } else {
      if (VAR_5->rr &&
          FUNC_1(VAR_5->rr)
          == VAR_0 &&
          VAR_10 == VAR_4
          ) {
       VAR_8 =
        VAR_2;
      } else {
       VAR_8 = VAR_10;
      }
     }
    }
   }
  } else {
  VAR_8 = VAR_3;
 }

 return VAR_8;
}
