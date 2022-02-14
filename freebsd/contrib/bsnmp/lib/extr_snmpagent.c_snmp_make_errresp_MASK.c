
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {scalar_t__ priv_proto; } ;
struct snmp_pdu {scalar_t__ version; size_t scoped_len; size_t context_engine_len; char* context_name; int type; int error_index; int error_status; scalar_t__ context_engine; TYPE_1__ user; } ;
struct asn_buf {size_t asn_len; size_t asn_ptr; int asn_cptr; } ;
typedef enum snmp_ret { ____Placeholder_snmp_ret } snmp_ret ;
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
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_1 (struct asn_buf*,int*,size_t*) ;
 scalar_t__ FUNC_2 (struct asn_buf*,int*,size_t*) ;
 scalar_t__ FUNC_3 (struct asn_buf*,size_t*) ;
 int FUNC_4 (size_t,int ,size_t) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct asn_buf*,struct snmp_pdu*) ;
 int FUNC_7 (struct asn_buf*,struct snmp_pdu*,size_t*) ;
 int FUNC_8 (struct snmp_pdu const*,struct snmp_pdu*) ;
 int FUNC_9 (struct asn_buf*,struct snmp_pdu*) ;
 int FUNC_10 (struct asn_buf*,struct snmp_pdu*) ;

enum snmp_ret
FUNC_11(const struct snmp_pdu *VAR_13, struct asn_buf *VAR_14,
    struct asn_buf *VAR_15)
{
 u_char VAR_16;
 asn_len_t VAR_17;
 struct snmp_pdu VAR_18;
 enum asn_err VAR_19;
 enum snmp_code VAR_20;

 FUNC_8(VAR_13, &VAR_18);

 if ((VAR_20 = FUNC_9(VAR_14, &VAR_18)) != VAR_5)
  return (VAR_10);

 if (VAR_13->version == VAR_12) {
  if (VAR_18.user.priv_proto != VAR_9 &&
     (FUNC_1(VAR_14, &VAR_16, &VAR_18.scoped_len) != VAR_1
     || VAR_16 != VAR_4)) {
   FUNC_5("cannot decode encrypted pdu");
   return (VAR_10);
  }

  if (FUNC_3(VAR_14, &VAR_17) != VAR_1) {
   FUNC_5("cannot decode scoped pdu header");
   return (VAR_10);
  }

  VAR_17 = VAR_7;
  if (FUNC_2(VAR_14, (u_char *)VAR_18.context_engine,
      &VAR_17) != VAR_1) {
   FUNC_5("cannot decode msg context engine");
   return (VAR_10);
  }
  VAR_18.context_engine_len = VAR_17;
  VAR_17 = VAR_6;
  if (FUNC_2(VAR_14, (u_char *)VAR_18.context_name,
      &VAR_17) != VAR_1) {
   FUNC_5("cannot decode msg context name");
   return (VAR_10);
  }
  VAR_18.context_name[VAR_17] = '\0';
 }


 if (FUNC_1(VAR_14, &VAR_16, &VAR_17) != VAR_1) {
  FUNC_5("cannot get pdu header");
  return (VAR_10);
 }

 if ((VAR_16 & ~VAR_3) !=
     (VAR_2 | VAR_0)) {
  FUNC_5("bad pdu header tag");
  return (VAR_10);
 }

 VAR_19 = FUNC_7(VAR_14, &VAR_18, &VAR_17);
 if (FUNC_0(VAR_19))
  return (VAR_10);
 if (VAR_14->asn_len < VAR_17)
  return (VAR_10);
 VAR_14->asn_len = VAR_17;


 VAR_18.error_status = VAR_13->error_status;
 VAR_18.error_index = VAR_13->error_index;
 VAR_18.type = VAR_8;

 VAR_20 = FUNC_10(VAR_15, &VAR_18);
 if (VAR_20 != VAR_5)
  return (VAR_10);

 if (VAR_14->asn_len > VAR_15->asn_len)

  return (VAR_10);
 (void)FUNC_4(VAR_15->asn_ptr, VAR_14->asn_cptr, VAR_14->asn_len);
 VAR_15->asn_len -= VAR_14->asn_len;
 VAR_15->asn_ptr += VAR_14->asn_len;

 VAR_20 = FUNC_6(VAR_15, &VAR_18);
 if (VAR_20 != VAR_5)
  return (VAR_10);

 return (VAR_11);
}
