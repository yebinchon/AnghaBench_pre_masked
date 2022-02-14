
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ engine_len; scalar_t__ engine_boots; scalar_t__ engine_time; int engine_id; } ;
struct TYPE_7__ {scalar_t__ priv_proto; scalar_t__ auth_proto; int auth_key; int priv_key; int sec_name; } ;
struct snmp_pdu {int flags; TYPE_2__ engine; TYPE_1__ user; } ;
typedef enum snmp_code { ____Placeholder_snmp_code } snmp_code ;
struct TYPE_11__ {int engine_len; scalar_t__ engine_boots; scalar_t__ engine_time; int engine_id; } ;
struct TYPE_9__ {scalar_t__ priv_proto; scalar_t__ auth_proto; int auth_key; int priv_key; } ;
struct TYPE_10__ {int status; scalar_t__ user_engine_len; TYPE_3__ suser; int user_engine_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int ,int ,int) ;
 TYPE_6__ VAR_11 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 TYPE_4__* FUNC_5 (int ,int,int ) ;
 TYPE_4__* VAR_12 ;

__attribute__((used)) static enum snmp_code
FUNC_6(struct snmp_pdu *VAR_13)
{
 VAR_12 = ((void*)0);


 if (VAR_13->engine.engine_len == 0 && FUNC_3(VAR_13->user.sec_name) == 0) {
  VAR_13->engine.engine_len = VAR_11.engine_len;
  FUNC_2(VAR_13->engine.engine_id, VAR_11.engine_id,
      VAR_11.engine_len);
  FUNC_4();
  VAR_13->engine.engine_boots = VAR_11.engine_boots;
  VAR_13->engine.engine_time = VAR_11.engine_time;
  VAR_13->flags |= VAR_7;
  return (VAR_5);
 }

 if ((VAR_12 = FUNC_5(VAR_13->engine.engine_id,
     VAR_13->engine.engine_len, VAR_13->user.sec_name)) == ((void*)0) ||
     VAR_12->status != 1 )
  return (VAR_3);

 if (VAR_12->user_engine_len != VAR_11.engine_len ||
     FUNC_1(VAR_12->user_engine_id, VAR_11.engine_id,
     VAR_11.engine_len) != 0)
  return (VAR_1);

 VAR_13->user.priv_proto = VAR_12->suser.priv_proto;
 FUNC_2(VAR_13->user.priv_key, VAR_12->suser.priv_key,
     sizeof(VAR_13->user.priv_key));


 if ((VAR_13->flags & VAR_6) != 0) {
  FUNC_4();
  VAR_13->user.auth_proto = VAR_12->suser.auth_proto;
  FUNC_2(VAR_13->user.auth_key, VAR_12->suser.auth_key,
      sizeof(VAR_13->user.auth_key));

  if (VAR_13->engine.engine_boots == 0 &&
      VAR_13->engine.engine_time == 0) {
   FUNC_4();
       VAR_13->flags |= VAR_7;
   return (VAR_5);
  }

  if (VAR_13->engine.engine_boots != VAR_11.engine_boots ||
      FUNC_0(VAR_13->engine.engine_time - VAR_11.engine_time) >
      VAR_10)
   return (VAR_4);
 }

 if (((VAR_13->flags & VAR_8) != 0 &&
     (VAR_13->flags & VAR_6) == 0) ||
     ((VAR_13->flags & VAR_6) == 0 &&
     VAR_12->suser.auth_proto != VAR_0) ||
     ((VAR_13->flags & VAR_8) == 0 &&
     VAR_12->suser.priv_proto != VAR_9))
  return (VAR_2);

 return (VAR_5);
}
