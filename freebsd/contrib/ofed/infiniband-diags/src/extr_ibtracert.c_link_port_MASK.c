
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ports; } ;
struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ Port ;
typedef TYPE_2__ Node ;



__attribute__((used)) static void FUNC_0(Port * VAR_0, Node * VAR_1)
{
 VAR_0->next = VAR_1->ports;
 VAR_1->ports = VAR_0;
}
