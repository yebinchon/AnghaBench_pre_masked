
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int portnum; TYPE_1__* remoteport; } ;
typedef TYPE_2__ ibnd_port_t ;
struct TYPE_11__ {int numports; int ch_found; TYPE_2__** ports; } ;
typedef TYPE_3__ ibnd_node_t ;
struct TYPE_12__ {TYPE_3__** spinenode; } ;
typedef TYPE_4__ ibnd_chassis_t ;
struct TYPE_9__ {TYPE_3__* node; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_2(ibnd_chassis_t * VAR_1)
{
 ibnd_node_t *VAR_2, *VAR_3;
 ibnd_port_t *VAR_4;
 int VAR_5, VAR_6;

 for (VAR_5 = 1; VAR_5 <= VAR_0; VAR_5++) {
  int VAR_7;

  VAR_2 = VAR_1->spinenode[VAR_5];
  if (!VAR_2)
   continue;

  VAR_7 = FUNC_1(VAR_2);

  for (VAR_6 = 1; VAR_6 <= VAR_2->numports; VAR_6++) {
   VAR_4 = VAR_2->ports[VAR_6];
   if (!VAR_4 || !VAR_4->remoteport)
    continue;





   if (VAR_7 && (VAR_4->portnum > 18))
    continue;

   VAR_3 = VAR_4->remoteport->node;

   if (!VAR_3->ch_found)
    continue;

   if (FUNC_0(VAR_3, VAR_1))
    return -1;
  }
 }
 return 0;
}
