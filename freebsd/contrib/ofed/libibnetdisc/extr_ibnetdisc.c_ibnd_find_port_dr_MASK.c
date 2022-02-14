
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* node; } ;
typedef TYPE_2__ ibnd_port_t ;
struct TYPE_11__ {TYPE_1__** ports; } ;
typedef TYPE_3__ ibnd_node_t ;
struct TYPE_12__ {TYPE_3__* from_node; } ;
typedef TYPE_4__ ibnd_fabric_t ;
struct TYPE_13__ {int cnt; size_t* p; } ;
typedef TYPE_5__ ib_dr_path_t ;
struct TYPE_9__ {TYPE_2__* remoteport; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_5__*,char*,int ,int ) ;

ibnd_port_t *FUNC_2(ibnd_fabric_t * VAR_0, char *VAR_1)
{
 int VAR_2 = 0;
 ibnd_node_t *VAR_3;
 ibnd_port_t *VAR_4 = ((void*)0);
 ib_dr_path_t VAR_5;

 if (!VAR_0) {
  FUNC_0("fabric parameter NULL\n");
  return ((void*)0);
 }

 if (!VAR_1) {
  FUNC_0("dr_str parameter NULL\n");
  return ((void*)0);
 }

 VAR_3 = VAR_0->from_node;

 if (FUNC_1(&VAR_5, VAR_1, 0, 0) == -1)
  return ((void*)0);

 for (VAR_2 = 0; VAR_2 <= VAR_5.cnt; VAR_2++) {
  ibnd_port_t *VAR_6 = ((void*)0);
  if (VAR_5.p[VAR_2] == 0)
   continue;
  if (!VAR_3->ports)
   return ((void*)0);

  VAR_6 = VAR_3->ports[VAR_5.p[VAR_2]]->remoteport;
  if (!VAR_6)
   return ((void*)0);

  VAR_4 = VAR_6;
  VAR_3 = VAR_6->node;
 }

 return VAR_4;
}
