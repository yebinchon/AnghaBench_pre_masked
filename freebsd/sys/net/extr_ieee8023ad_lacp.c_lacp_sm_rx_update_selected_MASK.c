
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lacpdu {int ldu_actor; } ;
struct lacp_port {int dummy; } ;


 int FUNC_0 (struct lacp_port*) ;
 int FUNC_1 (struct lacp_port*,int *) ;

__attribute__((used)) static void
FUNC_2(struct lacp_port *VAR_0, const struct lacpdu *VAR_1)
{

 FUNC_0(VAR_0);

 FUNC_1(VAR_0, &VAR_1->ldu_actor);
}
