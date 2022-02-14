
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* _name; } ;
typedef TYPE_1__ ldns_rr_descriptor ;
typedef int ldns_output_format ;
struct TYPE_8__ {char* name; } ;
typedef TYPE_2__ ldns_lookup_table ;
struct TYPE_9__ {scalar_t__ packet_qtype; int signatures; int rrset; scalar_t__ packet_nodata; scalar_t__ packet_rcode; struct TYPE_9__* parent; } ;
typedef TYPE_3__ ldns_dnssec_data_chain ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 TYPE_2__* FUNC_1 (int ,int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int const*,int ) ;
 scalar_t__ FUNC_4 (int ) ;

void
FUNC_5(FILE *VAR_1, const ldns_output_format *VAR_2,
  const ldns_dnssec_data_chain *VAR_3)
{
 ldns_lookup_table *VAR_4;
 const ldns_rr_descriptor *VAR_5;
 if (VAR_3) {
  FUNC_5(VAR_1, VAR_2, VAR_3->parent);
  if (FUNC_4(VAR_3->rrset) > 0) {
   VAR_4 = FUNC_1(VAR_0,
         (int) VAR_3->packet_rcode);
   if (VAR_4) {
    FUNC_0(VAR_1, ";; rcode: %s\n", VAR_4->name);
   }

   VAR_5 = FUNC_2(VAR_3->packet_qtype);
   if (VAR_5 && VAR_5->_name) {
    FUNC_0(VAR_1, ";; qtype: %s\n", VAR_5->_name);
   } else if (VAR_3->packet_qtype != 0) {
    FUNC_0(VAR_1, "TYPE%u",
        VAR_3->packet_qtype);
   }
   if (VAR_3->packet_nodata) {
    FUNC_0(VAR_1, ";; NODATA response\n");
   }
   FUNC_0(VAR_1, "rrset:\n");
   FUNC_3(VAR_1, VAR_2, VAR_3->rrset);
   FUNC_0(VAR_1, "sigs:\n");
   FUNC_3(VAR_1, VAR_2, VAR_3->signatures);
   FUNC_0(VAR_1, "---\n");
  } else {
   FUNC_0(VAR_1, "<no data>\n");
  }
 }
}
