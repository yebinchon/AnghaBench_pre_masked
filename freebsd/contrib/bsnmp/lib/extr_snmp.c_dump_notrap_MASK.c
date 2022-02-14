
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_pdu {int error_index; int error_status; int request_id; } ;


 int FUNC_0 (struct snmp_pdu const*) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static __inline void
FUNC_2(const struct snmp_pdu *VAR_0)
{
 FUNC_1(" request_id=%d", VAR_0->request_id);
 FUNC_1(" error_status=%d", VAR_0->error_status);
 FUNC_1(" error_index=%d\n", VAR_0->error_index);
 FUNC_0(VAR_0);
}
