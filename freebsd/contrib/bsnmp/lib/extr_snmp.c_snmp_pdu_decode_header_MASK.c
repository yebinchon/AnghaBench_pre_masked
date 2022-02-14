
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
typedef int u_char ;
struct TYPE_2__ {int max_msg_size; } ;
struct snmp_pdu {scalar_t__ outer_len; scalar_t__ version; int identifier; int security_model; char* community; int flags; TYPE_1__ engine; int outer_ptr; } ;
struct asn_buf {scalar_t__ asn_len; int asn_ptr; } ;
typedef int int32_t ;
typedef enum snmp_code { ____Placeholder_snmp_code } snmp_code ;
typedef scalar_t__ asn_len_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (struct asn_buf*,int*) ;
 scalar_t__ FUNC_1 (struct asn_buf*,int *,size_t*) ;
 scalar_t__ FUNC_2 (struct asn_buf*,scalar_t__*) ;
 scalar_t__ FUNC_3 (struct asn_buf*,struct snmp_pdu*) ;
 int FUNC_4 (char*) ;

enum snmp_code
FUNC_5(struct asn_buf *VAR_10, struct snmp_pdu *VAR_11)
{
 int32_t VAR_12;
 u_int VAR_13;
 asn_len_t VAR_14;

 VAR_11->outer_ptr = VAR_10->asn_ptr;
 VAR_11->outer_len = VAR_10->asn_len;

 if (FUNC_2(VAR_10, &VAR_14) != VAR_0) {
  FUNC_4("cannot decode pdu header");
  return (VAR_2);
 }
 if (VAR_10->asn_len < VAR_14) {
  FUNC_4("outer sequence value too short");
  return (VAR_2);
 }
 if (VAR_10->asn_len != VAR_14) {
  FUNC_4("ignoring trailing junk in message");
  VAR_10->asn_len = VAR_14;
 }

 if (FUNC_0(VAR_10, &VAR_12) != VAR_0) {
  FUNC_4("cannot decode version");
  return (VAR_2);
 }

 if (VAR_12 == 0)
  VAR_11->version = VAR_6;
 else if (VAR_12 == 1)
  VAR_11->version = VAR_7;
 else if (VAR_12 == 3)
  VAR_11->version = VAR_8;
 else {
  VAR_11->version = VAR_9;
  FUNC_4("unsupported SNMP version");
  return (VAR_1);
 }

 if (VAR_11->version == VAR_8) {
  if (FUNC_2(VAR_10, &VAR_14) != VAR_0) {
   FUNC_4("cannot decode pdu global data header");
   return (VAR_2);
  }

  if (FUNC_0(VAR_10, &VAR_11->identifier) != VAR_0) {
   FUNC_4("cannot decode msg indetifier");
   return (VAR_2);
  }

  if (FUNC_0(VAR_10, &VAR_11->engine.max_msg_size)
      != VAR_0) {
   FUNC_4("cannot decode msg size");
   return (VAR_2);
  }

  VAR_13 = 1;
  if (FUNC_1(VAR_10, (u_char *)&VAR_11->flags,
      &VAR_13) != VAR_0) {
   FUNC_4("cannot decode msg flags");
   return (VAR_2);
  }

  if (FUNC_0(VAR_10, &VAR_11->security_model) != VAR_0) {
   FUNC_4("cannot decode msg size");
   return (VAR_2);
  }

  if (VAR_11->security_model != VAR_5)
   return (VAR_2);

  if (FUNC_3(VAR_10, VAR_11) != VAR_0)
   return (VAR_2);
 } else {
  VAR_13 = VAR_4;
  if (FUNC_1(VAR_10, (u_char *)VAR_11->community,
      &VAR_13) != VAR_0) {
   FUNC_4("cannot decode community");
   return (VAR_2);
  }
  VAR_11->community[VAR_13] = '\0';
 }

 return (VAR_3);
}
