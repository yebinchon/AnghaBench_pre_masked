
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct snmp_pdu {int dummy; } ;
struct asn_buf {int * asn_ptr; int asn_len; } ;
typedef enum snmp_code { ____Placeholder_snmp_code } snmp_code ;
struct TYPE_4__ {scalar_t__ dump_pdus; } ;
struct TYPE_3__ {int txbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (struct snmp_pdu*) ;
 int FUNC_2 (struct snmp_pdu*,struct asn_buf*) ;
 int FUNC_3 (char*,char const*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_4 (int ,char*,int) ;

void
FUNC_5(struct snmp_pdu *VAR_4, u_char *VAR_5, size_t *VAR_6,
    const char *VAR_7)
{
 struct asn_buf VAR_8;
 enum snmp_code VAR_9;

 VAR_8.asn_ptr = VAR_5;
 VAR_8.asn_len = VAR_3.txbuf;

 if ((VAR_9 = FUNC_2(VAR_4, &VAR_8)) != VAR_1) {
  FUNC_4(VAR_0, "cannot encode message (code=%d)", VAR_9);
  FUNC_0();
 }
 if (VAR_2.dump_pdus) {
  FUNC_3("%s <- ", VAR_7);
  FUNC_1(VAR_4);
 }
 *VAR_6 = (size_t)(VAR_8.asn_ptr - VAR_5);
}
