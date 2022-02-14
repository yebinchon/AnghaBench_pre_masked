
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snmp_pdu {int nbindings; TYPE_2__* bindings; int error_status; scalar_t__ error_index; int request_id; int type; int version; int community; } ;
struct asn_oid {int dummy; } ;
struct TYPE_7__ {int len; scalar_t__* subs; } ;
struct TYPE_5__ {struct asn_oid oid; scalar_t__ uint32; } ;
struct TYPE_6__ {TYPE_1__ v; int syntax; TYPE_3__ var; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct snmp_pdu*,int ,int) ;
 TYPE_3__ VAR_5 ;
 TYPE_3__ VAR_6 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_4(struct snmp_pdu *VAR_9, char *VAR_10,
    const struct asn_oid *VAR_11)
{
 FUNC_1(VAR_9, 0, sizeof(*VAR_9));
 FUNC_3(VAR_9->community, VAR_10, sizeof(VAR_9->community));

 VAR_9->version = VAR_4;
 VAR_9->type = VAR_1;
 VAR_9->request_id = FUNC_2(VAR_8);
 VAR_9->error_index = 0;
 VAR_9->error_status = VAR_0;

 VAR_9->bindings[0].var = VAR_6;
 VAR_9->bindings[0].var.subs[VAR_9->bindings[0].var.len++] = 0;
 VAR_9->bindings[0].syntax = VAR_3;
 VAR_9->bindings[0].v.uint32 = FUNC_0() - VAR_7;

 VAR_9->bindings[1].var = VAR_5;
 VAR_9->bindings[1].var.subs[VAR_9->bindings[1].var.len++] = 0;
 VAR_9->bindings[1].syntax = VAR_2;
 VAR_9->bindings[1].v.oid = *VAR_11;

 VAR_9->nbindings = 2;
}
