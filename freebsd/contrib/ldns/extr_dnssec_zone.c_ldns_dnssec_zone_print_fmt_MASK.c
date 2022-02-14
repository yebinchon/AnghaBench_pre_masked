
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flags; } ;
typedef TYPE_1__ ldns_output_format ;
struct TYPE_8__ {scalar_t__ names; scalar_t__ soa; } ;
typedef TYPE_2__ ldns_dnssec_zone ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,TYPE_1__ const*,int ,int) ;
 int FUNC_4 (int *,TYPE_1__ const*,scalar_t__,int) ;
 int FUNC_5 (int *,int ) ;

void
FUNC_6(FILE *VAR_2, const ldns_output_format *VAR_3,
        const ldns_dnssec_zone *VAR_4)
{
 if (VAR_4) {
  if (VAR_4->soa) {
   if ((VAR_3->flags & VAR_0)) {
    FUNC_0(VAR_2, ";; Zone: ");
    FUNC_5(VAR_2, FUNC_2(
       VAR_4->soa));
    FUNC_0(VAR_2, "\n;\n");
   }
   FUNC_3(VAR_2, VAR_3,
     FUNC_1(
      VAR_4->soa,
      VAR_1),
     0);
   if ((VAR_3->flags & VAR_0))
    FUNC_0(VAR_2, ";\n");
  }

  if (VAR_4->names) {
   FUNC_4(VAR_2, VAR_3,
     VAR_4->names, 0);
  }
 }
}
