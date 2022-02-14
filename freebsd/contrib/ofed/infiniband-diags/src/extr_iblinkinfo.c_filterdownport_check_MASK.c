
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t portnum; int info; } ;
typedef TYPE_1__ ibnd_port_t ;
struct TYPE_7__ {size_t numports; TYPE_1__** ports; int guid; } ;
typedef TYPE_2__ ibnd_node_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

int FUNC_2(ibnd_node_t * VAR_3, ibnd_port_t * VAR_4)
{
 ibnd_node_t *VAR_5;
 ibnd_port_t *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_0(VAR_2, VAR_3->guid);

 if (!VAR_5)
  return 0;

 if (VAR_4->portnum > VAR_5->numports)
  return 0;

 VAR_6 = VAR_5->ports[VAR_4->portnum];

 if (!VAR_6)
  return 0;

 VAR_7 = FUNC_1(VAR_6->info, 0, VAR_1);

 return (VAR_7 == VAR_0) ? 1 : 0;
}
