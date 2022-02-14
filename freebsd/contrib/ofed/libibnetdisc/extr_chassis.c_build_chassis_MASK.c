
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int portnum; TYPE_1__* remoteport; } ;
typedef TYPE_2__ ibnd_port_t ;
struct TYPE_10__ {int numports; int ch_found; TYPE_2__** ports; } ;
typedef TYPE_3__ ibnd_node_t ;
typedef int ibnd_chassis_t ;
struct TYPE_8__ {TYPE_3__* node; } ;


 int FUNC_0 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(ibnd_node_t * VAR_0, ibnd_chassis_t * VAR_1)
{
 int VAR_2 = 0;
 ibnd_node_t *VAR_3 = 0;
 ibnd_port_t *VAR_4 = 0;


 if (FUNC_1(VAR_0, VAR_1))
  return -1;


 for (VAR_2 = 1; VAR_2 <= VAR_0->numports; VAR_2++) {

  VAR_4 = VAR_0->ports[VAR_2];
  if (!VAR_4 || !VAR_4->remoteport)
   continue;





  if (FUNC_2(VAR_0) && (VAR_4->portnum > 18))
   continue;

  VAR_3 = VAR_4->remoteport->node;

  if (!VAR_3->ch_found)
   continue;

  FUNC_0(VAR_3, VAR_1);
 }

 if (FUNC_3(VAR_1))
  return -1;


 if (FUNC_4(VAR_1))
  return -1;




 if (FUNC_3(VAR_1))
  return -1;
 if (FUNC_4(VAR_1))
  return -1;
 FUNC_5(VAR_1);

 return 0;
}
