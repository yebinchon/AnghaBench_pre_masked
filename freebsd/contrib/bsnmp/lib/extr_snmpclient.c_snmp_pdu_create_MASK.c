
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_6__ {int max_msg_size; } ;
struct snmp_pdu {scalar_t__ version; scalar_t__ security_model; int context_engine_len; int context_name; TYPE_3__* context_engine; TYPE_3__ user; TYPE_3__ engine; scalar_t__ flags; scalar_t__ identifier; scalar_t__ nbindings; scalar_t__ error_index; scalar_t__ error_status; scalar_t__ type; int community; } ;
struct TYPE_7__ {int engine_len; struct TYPE_7__* engine_id; int max_msg_size; } ;
struct TYPE_5__ {scalar_t__ version; scalar_t__ security_model; int clen; int cname; TYPE_4__ engine; TYPE_4__* cengine; TYPE_4__ user; scalar_t__ identifier; int read_community; int write_community; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*,TYPE_4__*,int) ;
 int FUNC_1 (struct snmp_pdu*,int ,int) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 (struct snmp_pdu*) ;
 int FUNC_4 (int ,int ,int) ;

void
FUNC_5(struct snmp_pdu *VAR_4, u_int VAR_5)
{
 FUNC_1(VAR_4, 0, sizeof(struct snmp_pdu));

 if (VAR_5 == VAR_0)
  FUNC_4(VAR_4->community, VAR_3.write_community,
      sizeof(VAR_4->community));
 else
  FUNC_4(VAR_4->community, VAR_3.read_community,
      sizeof(VAR_4->community));

 VAR_4->type = VAR_5;
 VAR_4->version = VAR_3.version;
 VAR_4->error_status = 0;
 VAR_4->error_index = 0;
 VAR_4->nbindings = 0;

 if (VAR_3.version != VAR_2)
  return;

 VAR_4->identifier = ++VAR_3.identifier;
 VAR_4->engine.max_msg_size = VAR_3.engine.max_msg_size;
 VAR_4->flags = 0;
 VAR_4->security_model = VAR_3.security_model;

 if (VAR_3.security_model == VAR_1) {
  FUNC_0(&VAR_4->engine, &VAR_3.engine, sizeof(VAR_4->engine));
  FUNC_0(&VAR_4->user, &VAR_3.user, sizeof(VAR_4->user));
  FUNC_3(VAR_4);
 } else
  FUNC_2(&VAR_3, "unknown security model");

 if (VAR_3.clen > 0) {
  FUNC_0(VAR_4->context_engine, VAR_3.cengine,
      VAR_3.clen);
  VAR_4->context_engine_len = VAR_3.clen;
 } else {
  FUNC_0(VAR_4->context_engine, VAR_3.engine.engine_id,
      VAR_3.engine.engine_len);
  VAR_4->context_engine_len = VAR_3.engine.engine_len;
 }

 FUNC_4(VAR_4->context_name, VAR_3.cname,
     sizeof(VAR_4->context_name));
}
