
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ldns_rr ;
struct TYPE_3__ {char* name; } ;
typedef TYPE_1__ ldns_lookup_table ;
typedef int FILE ;





 int FUNC_0 (int *,char*,...) ;
 TYPE_1__* FUNC_1 (int ,int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(FILE *VAR_1, ldns_rr *VAR_2)
{
 ldns_lookup_table *VAR_3;
        VAR_3 = FUNC_1(VAR_0, FUNC_2(VAR_2));
        if (VAR_3) {
                FUNC_0(VAR_1, " %s", VAR_3->name);
        } else {
         FUNC_0(VAR_1, " CLASS%d", FUNC_2(VAR_2));
        }

 switch (FUNC_3(VAR_2)) {
  case 128:
   FUNC_0(VAR_1, " RRSIG ");
   break;
  case 130:
   FUNC_0(VAR_1, " DNSKEY ");
   break;
  case 129:
   FUNC_0(VAR_1, " DS ");
   break;
  default:
   break;
 }
}
