
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int priv_key; int auth_key; int priv_proto; int auth_proto; } ;
struct usm_user {TYPE_5__ suser; } ;
struct target_param {scalar_t__ sec_model; scalar_t__ sec_level; int secname; } ;
struct TYPE_12__ {int priv_key; int auth_key; int priv_proto; int auth_proto; int sec_name; } ;
struct TYPE_11__ {int engine_len; int engine_id; int max_msg_size; int engine_time; int engine_boots; } ;
struct snmp_pdu {int nbindings; scalar_t__ security_model; int context_engine_len; TYPE_4__ user; TYPE_3__ engine; int context_engine; TYPE_2__* bindings; int error_status; scalar_t__ error_index; int request_id; int type; int version; } ;
struct asn_oid {int dummy; } ;
struct TYPE_15__ {int len; scalar_t__* subs; } ;
struct TYPE_14__ {int engine_len; int engine_id; int max_msg_size; int engine_time; int engine_boots; } ;
struct TYPE_9__ {struct asn_oid oid; scalar_t__ uint32; } ;
struct TYPE_10__ {TYPE_1__ v; int syntax; TYPE_7__ var; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct snmp_pdu*,int ,int) ;
 TYPE_7__ VAR_7 ;
 TYPE_7__ VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct snmp_pdu*) ;
 TYPE_6__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_5 (int ,int ,int) ;
 int VAR_11 ;
 int FUNC_6 () ;
 struct usm_user* FUNC_7 (int ,int,int ) ;

__attribute__((used)) static void
FUNC_8(struct snmp_pdu *VAR_12, struct target_param *VAR_13,
    const struct asn_oid *VAR_14)
{
 struct usm_user *VAR_15;

 FUNC_2(VAR_12, 0, sizeof(*VAR_12));

 VAR_12->version = VAR_5;
 VAR_12->type = VAR_1;
 VAR_12->request_id = FUNC_3(VAR_11);
 VAR_12->error_index = 0;
 VAR_12->error_status = VAR_0;

 VAR_12->bindings[0].var = VAR_8;
 VAR_12->bindings[0].var.subs[VAR_12->bindings[0].var.len++] = 0;
 VAR_12->bindings[0].syntax = VAR_4;
 VAR_12->bindings[0].v.uint32 = FUNC_0() - VAR_10;

 VAR_12->bindings[1].var = VAR_7;
 VAR_12->bindings[1].var.subs[VAR_12->bindings[1].var.len++] = 0;
 VAR_12->bindings[1].syntax = VAR_3;
 VAR_12->bindings[1].v.oid = *VAR_14;

 VAR_12->nbindings = 2;

 FUNC_6();

 FUNC_1(VAR_12->engine.engine_id, VAR_9.engine_id,
     VAR_9.engine_len);
 VAR_12->engine.engine_len = VAR_9.engine_len;
 VAR_12->engine.engine_boots = VAR_9.engine_boots;
 VAR_12->engine.engine_time = VAR_9.engine_time;
 VAR_12->engine.max_msg_size = VAR_9.max_msg_size;
 FUNC_5(VAR_12->user.sec_name, VAR_13->secname,
     sizeof(VAR_12->user.sec_name));
 VAR_12->security_model = VAR_13->sec_model;

 VAR_12->context_engine_len = VAR_9.engine_len;
 FUNC_1(VAR_12->context_engine, VAR_9.engine_id,
     VAR_9.engine_len);

 if (VAR_13->sec_model == VAR_2 &&
     VAR_13->sec_level != VAR_6) {
      VAR_15 = FUNC_7(VAR_12->engine.engine_id,
         VAR_12->engine.engine_len, VAR_12->user.sec_name);
  if (VAR_15 != ((void*)0)) {
   VAR_12->user.auth_proto = VAR_15->suser.auth_proto;
   VAR_12->user.priv_proto = VAR_15->suser.priv_proto;
   FUNC_1(VAR_12->user.auth_key, VAR_15->suser.auth_key,
       sizeof(VAR_12->user.auth_key));
   FUNC_1(VAR_12->user.priv_key, VAR_15->suser.priv_key,
       sizeof(VAR_12->user.priv_key));
  }
  FUNC_4(VAR_12);
 }
}
