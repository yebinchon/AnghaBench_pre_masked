
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; } ;
typedef TYPE_1__ ldns_output_format ;
struct TYPE_7__ {struct TYPE_7__* next; scalar_t__ rr; } ;
typedef TYPE_2__ ldns_dnssec_rrs ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,TYPE_1__ const*,scalar_t__) ;

void
FUNC_2(FILE *VAR_1, const ldns_output_format *VAR_2,
        const ldns_dnssec_rrs *VAR_3)
{
 if (!VAR_3) {
  if ((VAR_2->flags & VAR_0))
   FUNC_0(VAR_1, "; <void>");
 } else {
  if (VAR_3->rr) {
   FUNC_1(VAR_1, VAR_2, VAR_3->rr);
  }
  if (VAR_3->next) {
   FUNC_2(VAR_1, VAR_2, VAR_3->next);
  }
 }
}
