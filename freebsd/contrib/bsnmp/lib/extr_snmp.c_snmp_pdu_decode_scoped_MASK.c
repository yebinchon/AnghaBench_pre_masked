
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct snmp_pdu {scalar_t__ version; size_t context_engine_len; char* context_name; int type; int context_engine; } ;
struct asn_buf {size_t asn_len; } ;
typedef int int32_t ;
typedef enum snmp_code { ____Placeholder_snmp_code } snmp_code ;
typedef enum asn_err { ____Placeholder_asn_err } asn_err ;
typedef size_t asn_len_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (struct asn_buf*,int*,size_t*) ;
 scalar_t__ FUNC_2 (struct asn_buf*,int*,size_t*) ;
 scalar_t__ FUNC_3 (struct asn_buf*,size_t*) ;
 int FUNC_4 (struct asn_buf*,struct snmp_pdu*,int *) ;
 int FUNC_5 (char*,...) ;

enum snmp_code
FUNC_6(struct asn_buf *VAR_10, struct snmp_pdu *VAR_11, int32_t *VAR_12)
{
 u_char VAR_13;
 asn_len_t VAR_14, VAR_15;
 enum asn_err VAR_16;

 if (VAR_11->version == VAR_9) {
  if (FUNC_3(VAR_10, &VAR_14) != VAR_1) {
   FUNC_5("cannot decode scoped pdu header");
   return (VAR_4);
  }

  VAR_14 = VAR_7;
  if (FUNC_2(VAR_10, (u_char *)&VAR_11->context_engine,
      &VAR_14) != VAR_1) {
   FUNC_5("cannot decode msg context engine");
   return (VAR_4);
  }
  VAR_11->context_engine_len = VAR_14;

  VAR_14 = VAR_6;
  if (FUNC_2(VAR_10, (u_char *)&VAR_11->context_name,
      &VAR_14) != VAR_1) {
   FUNC_5("cannot decode msg context name");
   return (VAR_4);
  }
  VAR_11->context_name[VAR_14] = '\0';
 }

 if (FUNC_1(VAR_10, &VAR_13, &VAR_14) != VAR_1) {
  FUNC_5("cannot get pdu header");
  return (VAR_4);
 }
 if ((VAR_13 & ~VAR_3) !=
     (VAR_2 | VAR_0)) {
  FUNC_5("bad pdu header tag");
  return (VAR_4);
 }
 VAR_11->type = VAR_13 & VAR_3;

 switch (VAR_11->type) {

   case 136:
   case 134:
   case 131:
   case 130:
  break;

   case 129:
  if (VAR_11->version != VAR_8) {
   FUNC_5("bad pdu type %u", VAR_11->type);
   return (VAR_4);
  }
  break;

   case 135:
   case 133:
   case 128:
   case 132:
  if (VAR_11->version == VAR_8) {
   FUNC_5("bad pdu type %u", VAR_11->type);
   return (VAR_4);
  }
  break;

   default:
  FUNC_5("bad pdu type %u", VAR_11->type);
  return (VAR_4);
 }

 VAR_15 = VAR_10->asn_len - VAR_14;
 VAR_10->asn_len = VAR_14;

 VAR_16 = FUNC_4(VAR_10, VAR_11, VAR_12);
 if (FUNC_0(VAR_16))
  return (VAR_4);

 if (VAR_10->asn_len != 0)
  FUNC_5("ignoring trailing junk after pdu");

 VAR_10->asn_len = VAR_15;

 return (VAR_5);
}
