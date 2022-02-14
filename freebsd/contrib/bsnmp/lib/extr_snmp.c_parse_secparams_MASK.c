
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
typedef int u_char ;
struct TYPE_4__ {char* sec_name; } ;
struct TYPE_3__ {size_t engine_len; int engine_time; int engine_boots; int engine_id; } ;
struct snmp_pdu {int flags; int * digest_ptr; int msg_salt; int msg_digest; TYPE_2__ user; TYPE_1__ engine; } ;
struct asn_buf {int asn_len; int * asn_ptr; } ;
typedef enum asn_err { ____Placeholder_asn_err } asn_err ;
typedef size_t asn_len_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 scalar_t__ FUNC_0 (struct asn_buf*,int *) ;
 scalar_t__ FUNC_1 (struct asn_buf*,int *,size_t*) ;
 scalar_t__ FUNC_2 (struct asn_buf*,size_t*) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static enum asn_err
FUNC_5(struct asn_buf *VAR_8, struct snmp_pdu *VAR_9)
{
 asn_len_t VAR_10;
 u_char VAR_11[256];
 struct asn_buf VAR_12;

 FUNC_3(VAR_11, 0, 256);
 VAR_12.asn_ptr = VAR_11;
 VAR_12.asn_len = 256;
 u_int VAR_13 = 256;

 if (FUNC_1(VAR_8, VAR_11, &VAR_13) != VAR_1) {
  FUNC_4("cannot parse usm header");
  return (VAR_0);
 }
 VAR_12.asn_len = VAR_13;

 if (FUNC_2(&VAR_12, &VAR_10) != VAR_1) {
  FUNC_4("cannot decode usm header");
  return (VAR_0);
 }

 VAR_10 = VAR_4;
 if (FUNC_1(&VAR_12, (u_char *)&VAR_9->engine.engine_id,
     &VAR_10) != VAR_1) {
  FUNC_4("cannot decode msg engine id");
  return (VAR_0);
 }
 VAR_9->engine.engine_len = VAR_10;

 if (FUNC_0(&VAR_12, &VAR_9->engine.engine_boots) != VAR_1) {
  FUNC_4("cannot decode msg engine boots");
  return (VAR_0);
 }

 if (FUNC_0(&VAR_12, &VAR_9->engine.engine_time) != VAR_1) {
  FUNC_4("cannot decode msg engine time");
  return (VAR_0);
 }

 VAR_10 = VAR_3 - 1;
 if (FUNC_1(&VAR_12, (u_char *)&VAR_9->user.sec_name, &VAR_10)
     != VAR_1) {
  FUNC_4("cannot decode msg user name");
  return (VAR_0);
 }
 VAR_9->user.sec_name[VAR_10] = '\0';

 VAR_10 = sizeof(VAR_9->msg_digest);
 if (FUNC_1(&VAR_12, (u_char *)&VAR_9->msg_digest, &VAR_10) !=
     VAR_1 || ((VAR_9->flags & VAR_5) != 0 &&
     VAR_10 != sizeof(VAR_9->msg_digest))) {
  FUNC_4("cannot decode msg authentication param");
  return (VAR_0);
 }

 VAR_10 = sizeof(VAR_9->msg_salt);
 if (FUNC_1(&VAR_12, (u_char *)&VAR_9->msg_salt, &VAR_10) !=
     VAR_1 ||((VAR_9->flags & VAR_6) != 0 &&
     VAR_10 != sizeof(VAR_9->msg_salt))) {
  FUNC_4("cannot decode msg authentication param");
  return (VAR_0);
 }

 if ((VAR_9->flags & VAR_5) != 0) {
  VAR_9->digest_ptr = VAR_8->asn_ptr - VAR_7;
  VAR_9->digest_ptr -= VAR_10 + VAR_2;
 }

 return (VAR_1);
}
