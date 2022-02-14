
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_client {scalar_t__ next_reqid; scalar_t__ max_reqid; scalar_t__ min_reqid; } ;
typedef scalar_t__ int32_t ;



__attribute__((used)) static int32_t
FUNC_0(struct snmp_client * VAR_0)
{
 int32_t VAR_1;

 VAR_1 = VAR_0->next_reqid;
 if (VAR_0->next_reqid >= VAR_0->max_reqid)
  VAR_0->next_reqid = VAR_0->min_reqid;
 else
  VAR_0->next_reqid++;
 return (VAR_1);
}
