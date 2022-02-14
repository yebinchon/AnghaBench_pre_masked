
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flags; } ;
typedef TYPE_1__ ldns_output_format ;
struct TYPE_8__ {struct TYPE_8__* next; TYPE_6__* signatures; TYPE_6__* rrs; } ;
typedef TYPE_2__ ldns_dnssec_rrsets ;
struct TYPE_9__ {int rr; } ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,TYPE_1__ const*,TYPE_6__*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(FILE *VAR_2, const ldns_output_format *VAR_3,
  const ldns_dnssec_rrsets *VAR_4,
  bool VAR_5,
  bool VAR_6)
{
 if (!VAR_4) {
  if ((VAR_3->flags & VAR_0))
   FUNC_0(VAR_2, "; <void>\n");
 } else {
  if (VAR_4->rrs &&
      (VAR_6 ||
   FUNC_2(VAR_4->rrs->rr) != VAR_1
      )
     ) {
   FUNC_1(VAR_2, VAR_3, VAR_4->rrs);
   if (VAR_4->signatures) {
    FUNC_1(VAR_2, VAR_3,
      VAR_4->signatures);
   }
  }
  if (VAR_5 && VAR_4->next) {
   FUNC_3(VAR_2, VAR_3,
     VAR_4->next, VAR_5, VAR_6);
  }
 }
}
