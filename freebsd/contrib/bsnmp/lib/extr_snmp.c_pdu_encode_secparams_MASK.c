
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {scalar_t__ sec_name; } ;
struct TYPE_3__ {int engine_len; int engine_time; int engine_boots; scalar_t__ engine_id; } ;
struct snmp_pdu {int flags; int * encrypted_ptr; int * digest_ptr; scalar_t__ msg_salt; scalar_t__ msg_digest; TYPE_2__ user; TYPE_1__ engine; } ;
struct asn_buf {int asn_len; int * asn_ptr; } ;
typedef enum snmp_code { ____Placeholder_snmp_code } snmp_code ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct asn_buf*,int *,size_t*) ;
 scalar_t__ FUNC_1 (struct asn_buf*,int ) ;
 scalar_t__ FUNC_2 (struct asn_buf*,int *,int) ;
 scalar_t__ FUNC_3 (struct asn_buf*,int,int **) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static enum snmp_code
FUNC_6(struct asn_buf *VAR_9, struct snmp_pdu *VAR_10)
{
 u_char VAR_11[256], *VAR_12;
 struct asn_buf VAR_13;
 size_t VAR_14, VAR_15 = 0;

 VAR_14 = 0;
 FUNC_4(VAR_11, 0, 256);
 VAR_13.asn_ptr = VAR_11;
 VAR_13.asn_len = 256;

 if (FUNC_3(&VAR_13, (VAR_4|VAR_2),
     &VAR_12) != VAR_0)
  return (VAR_5);

 if (FUNC_2(&VAR_13, (u_char *)VAR_10->engine.engine_id,
     VAR_10->engine.engine_len) != VAR_0)
  return (VAR_5);

 if (FUNC_1(&VAR_13, VAR_10->engine.engine_boots) != VAR_0)
  return (VAR_5);

 if (FUNC_1(&VAR_13, VAR_10->engine.engine_time) != VAR_0)
  return (VAR_5);

 if (FUNC_2(&VAR_13, (u_char *)VAR_10->user.sec_name,
     FUNC_5(VAR_10->user.sec_name)) != VAR_0)
  return (VAR_5);

 if ((VAR_10->flags & VAR_7) != 0) {
  VAR_14 = sizeof(VAR_11) - VAR_13.asn_len + VAR_1;
  if (FUNC_2(&VAR_13, (u_char *)VAR_10->msg_digest,
      sizeof(VAR_10->msg_digest)) != VAR_0)
   return (VAR_5);
 } else {
  if (FUNC_2(&VAR_13, (u_char *)VAR_10->msg_digest, 0)
      != VAR_0)
   return (VAR_5);
 }

 if ((VAR_10->flags & VAR_8) != 0) {
  if (FUNC_2(&VAR_13, (u_char *)VAR_10->msg_salt,
      sizeof(VAR_10->msg_salt)) != VAR_0)
   return (VAR_5);
 } else {
  if (FUNC_2(&VAR_13, (u_char *)VAR_10->msg_salt, 0)
      != VAR_0)
   return (VAR_5);
 }

 if (FUNC_0(&VAR_13, VAR_12, &VAR_15) != VAR_0)
  return (VAR_5);

 if ((VAR_10->flags & VAR_7) != 0)
  VAR_10->digest_ptr = VAR_9->asn_ptr + VAR_14 - VAR_15;

 if (FUNC_2(VAR_9, VAR_11, sizeof(VAR_11) - VAR_13.asn_len) != VAR_0)
  return (VAR_5);
 VAR_10->digest_ptr += VAR_1;

 if ((VAR_10->flags & VAR_8) != 0 && FUNC_3(VAR_9,
     VAR_3, &VAR_10->encrypted_ptr) != VAR_0)
   return (VAR_5);

 return (VAR_6);
}
