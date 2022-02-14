
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_context {int dummy; } ;
struct context {struct snmp_context ctx; int dlist; } ;


 int FUNC_0 (int *) ;
 struct context* FUNC_1 (int) ;
 int FUNC_2 (struct context*,int ,int) ;

struct snmp_context *
FUNC_3(void)
{
 struct context *VAR_0;

 if ((VAR_0 = FUNC_1(sizeof(*VAR_0))) == ((void*)0))
  return (((void*)0));

 FUNC_2(VAR_0, 0, sizeof(*VAR_0));
 FUNC_0(&VAR_0->dlist);

 return (&VAR_0->ctx);
}
