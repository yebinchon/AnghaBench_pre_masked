
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct snmp_pdu {scalar_t__ version; int type; int error_index; int error_status; } ;
struct asn_buf {size_t asn_len; int * asn_ptr; int const* asn_cptr; } ;
typedef int int32_t ;
typedef enum snmpd_input_err { ____Placeholder_snmpd_input_err } snmpd_input_err ;
typedef enum snmp_ret { ____Placeholder_snmp_ret } snmp_ret ;
struct TYPE_6__ {scalar_t__ dump_pdus; } ;
struct TYPE_5__ {size_t txbuf; } ;
struct TYPE_4__ {int silentDrops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;







 scalar_t__ VAR_9 ;
 int FUNC_0 () ;
 TYPE_3__ VAR_10 ;
 int FUNC_1 (struct snmp_pdu*,struct asn_buf*,struct snmp_pdu*,void*) ;
 int FUNC_2 (struct snmp_pdu*,struct asn_buf*,struct snmp_pdu*,void*) ;
 int FUNC_3 (struct snmp_pdu*,struct asn_buf*,struct snmp_pdu*,void*) ;
 scalar_t__ const FUNC_4 (struct snmp_pdu*,struct asn_buf*,struct asn_buf*) ;
 int FUNC_5 (struct snmp_pdu*) ;
 int FUNC_6 (struct snmp_pdu*) ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (struct snmp_pdu*,struct asn_buf*,struct snmp_pdu*,void*) ;
 TYPE_2__ VAR_11 ;
 TYPE_1__ VAR_12 ;
 int FUNC_9 (int ,char*) ;

enum snmpd_input_err
FUNC_10(struct snmp_pdu *VAR_13, const u_char *VAR_14, size_t VAR_15,
    u_char *VAR_16, size_t *VAR_17, const char *VAR_18,
    enum snmpd_input_err VAR_19, int32_t VAR_20, void *VAR_21)
{
 struct snmp_pdu VAR_22;
 struct asn_buf VAR_23, VAR_24;
 enum snmp_ret VAR_25;

 VAR_23.asn_ptr = VAR_16;
 VAR_23.asn_len = VAR_11.txbuf;

 VAR_24.asn_cptr = VAR_14;
 VAR_24.asn_len = VAR_15;

 if (VAR_19 != VAR_2) {

  if (VAR_13->version == VAR_9)
   VAR_13->error_status = VAR_5;
  else if (VAR_19 == VAR_3)
   VAR_13->error_status = VAR_7;
  else if (VAR_19 == VAR_4)
   VAR_13->error_status = VAR_8;
  else
   VAR_13->error_status = VAR_6;

  VAR_13->error_index = VAR_20;

  if (FUNC_4(VAR_13, &VAR_24, &VAR_23) == 129) {
   FUNC_9(VAR_0, "could not encode error response");
   VAR_12.silentDrops++;
   return (VAR_1);
  }

  if (VAR_10.dump_pdus) {
   FUNC_7("%s <- ", VAR_18);
   FUNC_5(VAR_13);
  }
  *VAR_17 = (size_t)(VAR_23.asn_ptr - VAR_16);
  return (VAR_2);
 }

 switch (VAR_13->type) {

   case 134:
  VAR_25 = FUNC_1(VAR_13, &VAR_23, &VAR_22, VAR_21);
  break;

   case 132:
  VAR_25 = FUNC_3(VAR_13, &VAR_23, &VAR_22, VAR_21);
  break;

   case 131:
  VAR_25 = FUNC_8(VAR_13, &VAR_23, &VAR_22, VAR_21);
  break;

   case 133:
  VAR_25 = FUNC_2(VAR_13, &VAR_23, &VAR_22, VAR_21);
  break;

   default:
  VAR_25 = 129;
  break;
 }

 switch (VAR_25) {

   case 128:

  if (VAR_10.dump_pdus) {
   FUNC_7("%s <- ", VAR_18);
   FUNC_5(&VAR_22);
  }
  *VAR_17 = (size_t)(VAR_23.asn_ptr - VAR_16);
  FUNC_6(&VAR_22);
  return (VAR_2);

   case 129:

  VAR_12.silentDrops++;
  return (VAR_1);

   case 130:


  VAR_23.asn_ptr = VAR_16;
  VAR_23.asn_len = VAR_11.txbuf;
  if (FUNC_4(VAR_13, &VAR_24, &VAR_23) == 129) {
   FUNC_9(VAR_0, "could not encode error response");
   VAR_12.silentDrops++;
   return (VAR_1);
  } else {
   if (VAR_10.dump_pdus) {
    FUNC_7("%s <- ", VAR_18);
    FUNC_5(VAR_13);
   }
   *VAR_17 = (size_t)(VAR_23.asn_ptr - VAR_16);
   return (VAR_2);
  }
 }
 FUNC_0();
}
