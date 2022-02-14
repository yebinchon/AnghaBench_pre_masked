
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int guid; } ;
typedef TYPE_1__ ibnd_port_t ;
struct TYPE_5__ {int numports; int guid; TYPE_1__** ports; } ;
typedef TYPE_2__ ibnd_node_t ;



__attribute__((used)) static void FUNC_0(ibnd_node_t *VAR_0)
{
 ibnd_port_t *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 <= VAR_0->numports; VAR_2++) {
  VAR_1 = VAR_0->ports[VAR_2];
  if (VAR_1)
   VAR_1->guid = VAR_0->guid;
 }
}
