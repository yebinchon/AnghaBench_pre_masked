
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ engine_boots; scalar_t__ engine_time; scalar_t__ engine_len; int engine_id; int max_msg_size; } ;
struct snmp_pdu {scalar_t__ version; scalar_t__ error_status; TYPE_2__ engine; } ;
typedef enum snmp_privacy { ____Placeholder_snmp_privacy } snmp_privacy ;
typedef enum snmp_authentication { ____Placeholder_snmp_authentication } snmp_authentication ;
typedef int cname ;
struct TYPE_7__ {scalar_t__ engine_boots; scalar_t__ engine_time; scalar_t__ engine_len; int engine_id; int max_msg_size; } ;
struct TYPE_9__ {char* sec_name; int auth_proto; int priv_proto; } ;
struct TYPE_10__ {scalar_t__ version; TYPE_1__ engine; TYPE_3__ user; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (TYPE_5__*,char*,...) ;
 TYPE_5__ VAR_7 ;
 int FUNC_3 (struct snmp_pdu*,struct snmp_pdu*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_3__*,char*) ;
 int FUNC_6 (struct snmp_pdu*,int ) ;
 int FUNC_7 (struct snmp_pdu*) ;
 int FUNC_8 (char*,char*,int) ;

int
FUNC_9(char *VAR_8)
{
 char VAR_9[VAR_0];
 enum snmp_authentication VAR_10;
 enum snmp_privacy VAR_11;
 struct snmp_pdu VAR_12, VAR_13;

 if (VAR_7.version != VAR_6)
  FUNC_2(&VAR_7, "wrong version");

 FUNC_8(VAR_9, VAR_7.user.sec_name, sizeof(VAR_9));
 VAR_10 = VAR_7.user.auth_proto;
 VAR_11 = VAR_7.user.priv_proto;

 VAR_7.engine.engine_len = 0;
 VAR_7.engine.engine_boots = 0;
 VAR_7.engine.engine_time = 0;
 VAR_7.user.auth_proto = VAR_1;
 VAR_7.user.priv_proto = VAR_5;
 FUNC_1(VAR_7.user.sec_name, 0, sizeof(VAR_7.user.sec_name));

 FUNC_6(&VAR_12, VAR_4);

 if (FUNC_3(&VAR_12, &VAR_13) == -1)
   return (-1);

 if (VAR_13.version != VAR_12.version) {
  FUNC_2(&VAR_7, "wrong version");
  return (-1);
 }

 if (VAR_13.error_status != VAR_3) {
  FUNC_2(&VAR_7, "Error %d in responce", VAR_13.error_status);
  return (-1);
 }

 VAR_7.engine.engine_len = VAR_13.engine.engine_len;
 VAR_7.engine.max_msg_size = VAR_13.engine.max_msg_size;
 FUNC_0(VAR_7.engine.engine_id, VAR_13.engine.engine_id,
     VAR_13.engine.engine_len);

 FUNC_8(VAR_7.user.sec_name, VAR_9,
     sizeof(VAR_7.user.sec_name));
 VAR_7.user.auth_proto = VAR_10;
 VAR_7.user.priv_proto = VAR_11;

 if (VAR_7.user.auth_proto == VAR_1)
  return (0);

 if (VAR_8 == ((void*)0) ||
     FUNC_5(&VAR_7.user, VAR_8) != VAR_2 ||
     FUNC_4(&VAR_7.user, VAR_7.engine.engine_id,
     VAR_7.engine.engine_len) != VAR_2)
  return (-1);

 if (VAR_13.engine.engine_boots != 0)
  VAR_7.engine.engine_boots = VAR_13.engine.engine_boots;

 if (VAR_13.engine.engine_time != 0) {
  VAR_7.engine.engine_time = VAR_13.engine.engine_time;
  return (0);
 }

 FUNC_7(&VAR_12);

 FUNC_6(&VAR_12, VAR_4);
 VAR_12.engine.engine_boots = 0;
 VAR_12.engine.engine_time = 0;

 if (FUNC_3(&VAR_12, &VAR_13) == -1)
  return (-1);

 if (VAR_13.version != VAR_12.version) {
  FUNC_2(&VAR_7, "wrong version");
  return (-1);
 }

 if (VAR_13.error_status != VAR_3) {
  FUNC_2(&VAR_7, "Error %d in responce", VAR_13.error_status);
  return (-1);
 }

 VAR_7.engine.engine_boots = VAR_13.engine.engine_boots;
 VAR_7.engine.engine_time = VAR_13.engine.engine_time;

 FUNC_7(&VAR_12);
 FUNC_7(&VAR_13);

 return (0);
}
