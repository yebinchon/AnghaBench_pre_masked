
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int flags; } ;
typedef TYPE_1__ ldns_output_format ;
struct TYPE_9__ {scalar_t__ nsec_signatures; scalar_t__ nsec; int name; scalar_t__ rrsets; } ;
typedef TYPE_2__ ldns_dnssec_name ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,TYPE_1__ const*,scalar_t__) ;
 int FUNC_2 (int *,TYPE_1__ const*,scalar_t__,int,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,TYPE_1__ const*,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(FILE *VAR_1, const ldns_output_format *VAR_2,
  const ldns_dnssec_name *VAR_3,
  bool VAR_4)
{
 if (VAR_3) {
  if(VAR_3->rrsets) {
   FUNC_2(VAR_1, VAR_2,
     VAR_3->rrsets, 1, VAR_4);
  } else if ((VAR_2->flags & VAR_0)) {
   FUNC_0(VAR_1, ";; Empty nonterminal: ");
   FUNC_3(VAR_1, VAR_3->name);
   FUNC_0(VAR_1, "\n");
  }
  if(VAR_3->nsec) {
   FUNC_4(VAR_1, VAR_2, VAR_3->nsec);
  }
  if (VAR_3->nsec_signatures) {
   FUNC_1(VAR_1, VAR_2,
     VAR_3->nsec_signatures);
  }
 } else if ((VAR_2->flags & VAR_0)) {
  FUNC_0(VAR_1, "; <void>\n");
 }
}
