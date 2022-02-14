
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_pdu {scalar_t__ type; int error_index; int error_status; int request_id; int time_stamp; int specific_trap; int generic_trap; int agent_addr; int enterprise; } ;
struct asn_buf {int dummy; } ;
typedef enum asn_err { ____Placeholder_asn_err } asn_err ;
typedef int asn_len_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct asn_buf*,int *) ;
 scalar_t__ FUNC_1 (struct asn_buf*,int ) ;
 scalar_t__ FUNC_2 (struct asn_buf*,int *) ;
 scalar_t__ FUNC_3 (struct asn_buf*,int *) ;
 scalar_t__ FUNC_4 (struct asn_buf*,int *) ;
 int FUNC_5 (char*) ;

enum asn_err
FUNC_6(struct asn_buf *VAR_3, struct snmp_pdu *VAR_4, asn_len_t *VAR_5)
{
 if (VAR_4->type == VAR_2) {
  if (FUNC_2(VAR_3, &VAR_4->enterprise) != VAR_1) {
   FUNC_5("cannot parse trap enterprise");
   return (VAR_0);
  }
  if (FUNC_1(VAR_3, VAR_4->agent_addr) != VAR_1) {
   FUNC_5("cannot parse trap agent address");
   return (VAR_0);
  }
  if (FUNC_0(VAR_3, &VAR_4->generic_trap) != VAR_1) {
   FUNC_5("cannot parse 'generic-trap'");
   return (VAR_0);
  }
  if (FUNC_0(VAR_3, &VAR_4->specific_trap) != VAR_1) {
   FUNC_5("cannot parse 'specific-trap'");
   return (VAR_0);
  }
  if (FUNC_4(VAR_3, &VAR_4->time_stamp) != VAR_1) {
   FUNC_5("cannot parse trap 'time-stamp'");
   return (VAR_0);
  }
 } else {
  if (FUNC_0(VAR_3, &VAR_4->request_id) != VAR_1) {
   FUNC_5("cannot parse 'request-id'");
   return (VAR_0);
  }
  if (FUNC_0(VAR_3, &VAR_4->error_status) != VAR_1) {
   FUNC_5("cannot parse 'error_status'");
   return (VAR_0);
  }
  if (FUNC_0(VAR_3, &VAR_4->error_index) != VAR_1) {
   FUNC_5("cannot parse 'error_index'");
   return (VAR_0);
  }
 }

 if (FUNC_3(VAR_3, VAR_5) != VAR_1) {
  FUNC_5("cannot get varlist header");
  return (VAR_0);
 }

 return (VAR_1);
}
