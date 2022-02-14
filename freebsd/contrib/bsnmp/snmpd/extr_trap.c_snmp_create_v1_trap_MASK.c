
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snmp_pdu {scalar_t__ nbindings; scalar_t__ time_stamp; scalar_t__ specific_trap; scalar_t__ generic_trap; int agent_addr; int enterprise; int type; int version; int community; } ;
struct asn_oid {int len; scalar_t__* subs; } ;
struct TYPE_4__ {int trap1addr; } ;
struct TYPE_3__ {int object_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct snmp_pdu*,int ,int) ;
 TYPE_2__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,char*,int) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static void
FUNC_4(struct snmp_pdu *VAR_5, char *VAR_6,
    const struct asn_oid *VAR_7)
{
 FUNC_2(VAR_5, 0, sizeof(*VAR_5));
 FUNC_3(VAR_5->community, VAR_6, sizeof(VAR_5->community));

 VAR_5->version = VAR_1;
 VAR_5->type = VAR_0;
 VAR_5->enterprise = VAR_4.object_id;
 FUNC_1(VAR_5->agent_addr, VAR_2.trap1addr, 4);
 VAR_5->generic_trap = VAR_7->subs[VAR_7->len - 1] - 1;
 VAR_5->specific_trap = 0;
 VAR_5->time_stamp = FUNC_0() - VAR_3;
 VAR_5->nbindings = 0;
}
