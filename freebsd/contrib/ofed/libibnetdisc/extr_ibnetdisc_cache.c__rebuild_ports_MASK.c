
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {struct TYPE_13__* remoteport; int node; } ;
typedef TYPE_2__ ibnd_port_t ;
struct TYPE_14__ {TYPE_2__* port; int remoteport_cache_key; scalar_t__ remoteport_flag; int node_guid; struct TYPE_14__* next; } ;
typedef TYPE_3__ ibnd_port_cache_t ;
struct TYPE_15__ {int node; } ;
typedef TYPE_4__ ibnd_node_cache_t ;
struct TYPE_16__ {TYPE_1__* f_int; TYPE_3__* ports_cache; } ;
typedef TYPE_5__ ibnd_fabric_cache_t ;
struct TYPE_12__ {int lid2guid; } ;


 int FUNC_0 (char*) ;
 TYPE_4__* FUNC_1 (TYPE_5__*,int ) ;
 TYPE_3__* FUNC_2 (TYPE_5__*,int *) ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_4(ibnd_fabric_cache_t * VAR_0)
{
 ibnd_port_cache_t *VAR_1;
 ibnd_port_cache_t *VAR_2;

 VAR_1 = VAR_0->ports_cache;
 while (VAR_1) {
  ibnd_node_cache_t *VAR_3;
  ibnd_port_cache_t *VAR_4;
  ibnd_port_t *VAR_5;

  VAR_2 = VAR_1->next;

  VAR_5 = VAR_1->port;

  if (!(VAR_3 =
        FUNC_1(VAR_0, VAR_1->node_guid))) {
   FUNC_0("Cache invalid: cannot find node\n");
   return -1;
  }

  VAR_5->node = VAR_3->node;

  if (VAR_1->remoteport_flag) {
   if (!(VAR_4 = FUNC_2(VAR_0,
           &VAR_1->remoteport_cache_key)))
   {
    FUNC_0
        ("Cache invalid: cannot find remote port\n");
    return -1;
   }

   VAR_5->remoteport = VAR_4->port;
  } else
   VAR_5->remoteport = ((void*)0);

  FUNC_3(VAR_5, VAR_0->f_int->lid2guid);
  VAR_1 = VAR_2;
 }

 return 0;
}
