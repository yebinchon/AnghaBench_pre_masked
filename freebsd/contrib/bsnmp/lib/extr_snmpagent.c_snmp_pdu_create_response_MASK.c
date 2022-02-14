
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_pdu {scalar_t__ version; int flags; int context_engine_len; int context_name; int * context_engine; int security_model; int identifier; int user; int engine; int request_id; int type; int community; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct snmp_pdu*,int ,int) ;
 int FUNC_2 (struct snmp_pdu*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_5(const struct snmp_pdu *VAR_4, struct snmp_pdu *VAR_5)
{
 FUNC_1(VAR_5, 0, sizeof(*VAR_5));
 FUNC_3(VAR_5->community, VAR_4->community);
 VAR_5->version = VAR_4->version;
 if (VAR_4->flags & VAR_0)
  VAR_5->type = VAR_1;
 else
  VAR_5->type = VAR_2;
 VAR_5->request_id = VAR_4->request_id;
 VAR_5->version = VAR_4->version;

 if (VAR_5->version != VAR_3)
  return;

 FUNC_0(&VAR_5->engine, &VAR_4->engine, sizeof(VAR_4->engine));
 FUNC_0(&VAR_5->user, &VAR_4->user, sizeof(VAR_4->user));
 FUNC_2(VAR_5);
 VAR_5->identifier = VAR_4->identifier;
 VAR_5->security_model = VAR_4->security_model;
 VAR_5->context_engine_len = VAR_4->context_engine_len;
 FUNC_0(VAR_5->context_engine, VAR_4->context_engine,
     VAR_5->context_engine_len);
 FUNC_4(VAR_5->context_name, VAR_4->context_name,
     sizeof(VAR_5->context_name));
}
