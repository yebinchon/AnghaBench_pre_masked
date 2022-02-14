
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct iter_user_data {scalar_t__ group; } ;
struct TYPE_9__ {scalar_t__ remoteport; } ;
typedef TYPE_2__ ibnd_port_t ;
struct TYPE_10__ {int numports; TYPE_2__** ports; TYPE_1__* chassis; } ;
typedef TYPE_3__ ibnd_node_t ;
struct TYPE_8__ {scalar_t__ chassisnum; } ;


 int FUNC_0 (char*,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,scalar_t__,int *,int *,int *) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,int *) ;

__attribute__((used)) static void FUNC_3(ibnd_node_t * VAR_0, void *VAR_1)
{
 ibnd_port_t *VAR_2;
 int VAR_3 = 0;
 struct iter_user_data *VAR_4 = (struct iter_user_data *)VAR_1;

 FUNC_0("RT: node %p\n", VAR_0);

 if (VAR_4->group && VAR_0->chassis && VAR_0->chassis->chassisnum)
  return;
 FUNC_1(VAR_0, VAR_4->group, ((void*)0), ((void*)0), ((void*)0));
 for (VAR_3 = 1; VAR_3 <= VAR_0->numports; VAR_3++) {
  VAR_2 = VAR_0->ports[VAR_3];
  if (VAR_2 && VAR_2->remoteport)
   FUNC_2(VAR_2, VAR_4->group, ((void*)0));
 }
}
