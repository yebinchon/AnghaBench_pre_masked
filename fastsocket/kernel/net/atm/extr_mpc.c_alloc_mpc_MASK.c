
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mpc_p6; int mpc_p5; int mpc_p4; int mpc_p3; int mpc_p2; int mpc_p1; } ;
struct mpoa_client {TYPE_1__ parameters; struct mpoa_client* next; int egress_lock; int ingress_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mpoa_client*) ;
 struct mpoa_client* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,int) ;
 struct mpoa_client* VAR_6 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct mpoa_client *FUNC_4(void)
{
 struct mpoa_client *VAR_7;

 VAR_7 = FUNC_1(sizeof (struct mpoa_client), VAR_0);
 if (VAR_7 == ((void*)0))
  return ((void*)0);
 FUNC_3(&VAR_7->ingress_lock);
 FUNC_3(&VAR_7->egress_lock);
 VAR_7->next = VAR_6;
 FUNC_0(VAR_7);

 VAR_7->parameters.mpc_p1 = VAR_1;
 VAR_7->parameters.mpc_p2 = VAR_2;
 FUNC_2(VAR_7->parameters.mpc_p3,0,sizeof(VAR_7->parameters.mpc_p3));
 VAR_7->parameters.mpc_p4 = VAR_3;
 VAR_7->parameters.mpc_p5 = VAR_4;
 VAR_7->parameters.mpc_p6 = VAR_5;

 VAR_6 = VAR_7;

 return VAR_7;
}
