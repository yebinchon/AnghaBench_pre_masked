
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int max_msg_size; } ;
struct snmp_pdu {scalar_t__ version; int identifier; int type; int security_model; int context_engine_len; int generic_trap; int specific_trap; int request_id; int error_status; int error_index; int * vars_ptr; int time_stamp; int agent_addr; int enterprise; int * pdu_ptr; scalar_t__ community; scalar_t__ context_name; scalar_t__ context_engine; int * scoped_ptr; int flags; TYPE_1__ engine; int * outer_ptr; } ;
struct asn_buf {int dummy; } ;
typedef enum snmp_code { ____Placeholder_snmp_code } snmp_code ;
typedef enum asn_err { ____Placeholder_asn_err } asn_err ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_0 (struct asn_buf*,int *,int *) ;
 scalar_t__ FUNC_1 (struct asn_buf*,int) ;
 scalar_t__ FUNC_2 (struct asn_buf*,int ) ;
 scalar_t__ FUNC_3 (struct asn_buf*,int *) ;
 scalar_t__ FUNC_4 (struct asn_buf*,int *,int) ;
 scalar_t__ FUNC_5 (struct asn_buf*,int,int **) ;
 scalar_t__ FUNC_6 (struct asn_buf*,int ) ;
 scalar_t__ FUNC_7 (struct asn_buf*,struct snmp_pdu*) ;
 int FUNC_8 (scalar_t__) ;

enum snmp_code
FUNC_9(struct asn_buf *VAR_18, struct snmp_pdu *VAR_19)
{
 enum asn_err VAR_20;
 u_char *VAR_21;

 if (FUNC_5(VAR_18, (VAR_3|VAR_2),
     &VAR_19->outer_ptr) != VAR_1)
  return (VAR_5);

 if (VAR_19->version == VAR_15)
  VAR_20 = FUNC_1(VAR_18, 0);
 else if (VAR_19->version == VAR_16)
  VAR_20 = FUNC_1(VAR_18, 1);
 else if (VAR_19->version == VAR_17)
  VAR_20 = FUNC_1(VAR_18, 3);
 else
  return (VAR_4);
 if (VAR_20 != VAR_1)
  return (VAR_5);

 if (VAR_19->version == VAR_17) {
  if (FUNC_5(VAR_18, (VAR_3 |
      VAR_2), &VAR_21) != VAR_1)
   return (VAR_5);

  if (FUNC_1(VAR_18, VAR_19->identifier) != VAR_1)
   return (VAR_5);

  if (FUNC_1(VAR_18, VAR_19->engine.max_msg_size) != VAR_1)
   return (VAR_5);

  if (VAR_19->type != VAR_11 &&
      VAR_19->type != VAR_12 &&
      VAR_19->type != VAR_13 &&
      VAR_19->type != VAR_10)
   VAR_19->flags |= VAR_7;

  if (FUNC_4(VAR_18, (u_char *)&VAR_19->flags, 1)
      != VAR_1)
   return (VAR_5);

  if (FUNC_1(VAR_18, VAR_19->security_model) != VAR_1)
   return (VAR_5);

  if (FUNC_0(VAR_18, VAR_21, ((void*)0)) != VAR_1)
   return (VAR_5);

  if (VAR_19->security_model != VAR_14)
   return (VAR_5);

  if (FUNC_7(VAR_18, VAR_19) != VAR_6)
   return (VAR_5);


  if (FUNC_5(VAR_18, (VAR_3 |
      VAR_2), &VAR_19->scoped_ptr) != VAR_1)
   return (VAR_5);

  if (FUNC_4(VAR_18, (u_char *)VAR_19->context_engine,
      VAR_19->context_engine_len) != VAR_1)
   return (VAR_5);

  if (FUNC_4(VAR_18, (u_char *)VAR_19->context_name,
      FUNC_8(VAR_19->context_name)) != VAR_1)
   return (VAR_5);
 } else {
  if (FUNC_4(VAR_18, (u_char *)VAR_19->community,
      FUNC_8(VAR_19->community)) != VAR_1)
   return (VAR_5);
 }

 if (FUNC_5(VAR_18, (VAR_2 | VAR_0 |
     VAR_19->type), &VAR_19->pdu_ptr) != VAR_1)
  return (VAR_5);

 if (VAR_19->type == VAR_12) {
  if (VAR_19->version != VAR_15 ||
      FUNC_3(VAR_18, &VAR_19->enterprise) != VAR_1 ||
      FUNC_2(VAR_18, VAR_19->agent_addr) != VAR_1 ||
      FUNC_1(VAR_18, VAR_19->generic_trap) != VAR_1 ||
      FUNC_1(VAR_18, VAR_19->specific_trap) != VAR_1 ||
      FUNC_6(VAR_18, VAR_19->time_stamp) != VAR_1)
   return (VAR_5);
 } else {
  if (VAR_19->version == VAR_15 && (VAR_19->type == VAR_8 ||
      VAR_19->type == VAR_9 ||
      VAR_19->type == VAR_13 ||
      VAR_19->type == VAR_10))
   return (VAR_5);

  if (FUNC_1(VAR_18, VAR_19->request_id) != VAR_1 ||
      FUNC_1(VAR_18, VAR_19->error_status) != VAR_1 ||
      FUNC_1(VAR_18, VAR_19->error_index) != VAR_1)
   return (VAR_5);
 }

 if (FUNC_5(VAR_18, (VAR_3|VAR_2),
     &VAR_19->vars_ptr) != VAR_1)
  return (VAR_5);

 return (VAR_6);
}
