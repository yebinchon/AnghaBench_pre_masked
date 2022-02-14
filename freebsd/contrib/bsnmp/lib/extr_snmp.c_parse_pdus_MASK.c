
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_value {int dummy; } ;
struct snmp_pdu {scalar_t__ nbindings; struct snmp_value* bindings; } ;
struct asn_buf {scalar_t__ asn_len; } ;
typedef scalar_t__ int32_t ;
typedef enum asn_err { ____Placeholder_asn_err } asn_err ;
typedef scalar_t__ asn_len_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct asn_buf*,struct snmp_value*) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (struct asn_buf*,struct snmp_pdu*,scalar_t__*) ;

__attribute__((used)) static enum asn_err
FUNC_4(struct asn_buf *VAR_3, struct snmp_pdu *VAR_4, int32_t *VAR_5)
{
 asn_len_t VAR_6, VAR_7;
 struct snmp_value *VAR_8;
 enum asn_err VAR_9, VAR_10;

 VAR_9 = FUNC_3(VAR_3, VAR_4, &VAR_6);
 if (FUNC_0(VAR_9))
  return (VAR_9);

 VAR_7 = VAR_3->asn_len - VAR_6;

 VAR_8 = VAR_4->bindings;
 VAR_9 = VAR_1;
 while (VAR_3->asn_len != 0) {
  if (VAR_4->nbindings == VAR_2) {
   FUNC_2("too many bindings (> %u) in PDU",
       VAR_2);
   return (VAR_0);
  }
  VAR_10 = FUNC_1(VAR_3, VAR_8);
  if (FUNC_0(VAR_10))
   return (VAR_0);
  if (VAR_10 != VAR_1 && VAR_9 == VAR_1) {
   VAR_9 = VAR_10;
   *VAR_5 = VAR_4->nbindings + 1;
  }
  VAR_4->nbindings++;
  VAR_8++;
 }

 VAR_3->asn_len = VAR_7;

 return (VAR_9);
}
