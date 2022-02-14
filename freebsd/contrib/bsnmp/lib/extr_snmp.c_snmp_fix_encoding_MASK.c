
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ priv_proto; } ;
struct snmp_pdu {scalar_t__ version; scalar_t__ security_model; size_t digest_ptr; int flags; int msg_digest; scalar_t__ outer_ptr; scalar_t__ outer_len; scalar_t__ encrypted_ptr; TYPE_1__ user; scalar_t__ scoped_ptr; scalar_t__ scoped_len; scalar_t__ pdu_ptr; scalar_t__ vars_ptr; } ;
struct asn_buf {scalar_t__ asn_ptr; } ;
typedef enum snmp_code { ____Placeholder_snmp_code } snmp_code ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct asn_buf*,scalar_t__,size_t*) ;
 int FUNC_1 (size_t,int ,int) ;
 int FUNC_2 (struct snmp_pdu*,int ) ;
 scalar_t__ FUNC_3 (struct snmp_pdu*) ;
 scalar_t__ FUNC_4 (struct asn_buf*,struct snmp_pdu*) ;

enum snmp_code
FUNC_5(struct asn_buf *VAR_7, struct snmp_pdu *VAR_8)
{
 size_t VAR_9 = 0;
 enum snmp_code VAR_10;

 if (FUNC_0(VAR_7, VAR_8->vars_ptr, ((void*)0)) != VAR_0 ||
     FUNC_0(VAR_7, VAR_8->pdu_ptr, ((void*)0)) != VAR_0)
  return (VAR_1);

 if (VAR_8->version == VAR_6) {
  if (FUNC_0(VAR_7, VAR_8->scoped_ptr, ((void*)0)) != VAR_0)
   return (VAR_1);

  VAR_8->scoped_len = VAR_7->asn_ptr - VAR_8->scoped_ptr;
  if (FUNC_4(VAR_7, VAR_8) != VAR_0)
   return (VAR_1);

  if (VAR_8->security_model != VAR_5)
   return (VAR_1);

  if (FUNC_3(VAR_8) != VAR_2)
   return (VAR_1);

  if (VAR_8->user.priv_proto != VAR_4 &&
      FUNC_0(VAR_7, VAR_8->encrypted_ptr, ((void*)0)) != VAR_0)
   return (VAR_1);
 }

 if (FUNC_0(VAR_7, VAR_8->outer_ptr, &VAR_9) != VAR_0)
  return (VAR_1);

 VAR_8->outer_len = VAR_7->asn_ptr - VAR_8->outer_ptr;
 VAR_8->digest_ptr -= VAR_9;

 if (VAR_8->version == VAR_6) {
  if ((VAR_10 = FUNC_2(VAR_8, VAR_8->msg_digest)) !=
      VAR_2)
   return (VAR_1);

  if ((VAR_8->flags & VAR_3) != 0)
   FUNC_1(VAR_8->digest_ptr, VAR_8->msg_digest,
       sizeof(VAR_8->msg_digest));
 }

 return (VAR_2);
}
