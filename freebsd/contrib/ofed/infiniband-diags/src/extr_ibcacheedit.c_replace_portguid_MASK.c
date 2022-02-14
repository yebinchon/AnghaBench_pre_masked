
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct guids {scalar_t__ searchguid; scalar_t__ before; scalar_t__ after; int found; int searchguid_found; } ;
struct TYPE_5__ {scalar_t__ guid; } ;
typedef TYPE_1__ ibnd_port_t ;
struct TYPE_6__ {scalar_t__ guid; scalar_t__ type; int numports; TYPE_1__** ports; } ;
typedef TYPE_2__ ibnd_node_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(ibnd_node_t *VAR_1, void *VAR_2)
{
 struct guids *VAR_3;

 VAR_3 = (struct guids *)VAR_2;

 if (VAR_1->guid != VAR_3->searchguid)
  return;

 VAR_3->searchguid_found++;

 if (VAR_1->type == VAR_0) {



  if (VAR_1->guid == VAR_3->before) {
   VAR_1->guid = VAR_3->after;
   FUNC_0(VAR_1);
   VAR_3->found++;
  }
 }
 else {
  ibnd_port_t *VAR_4;
  int VAR_5;

  for (VAR_5 = 1; VAR_5 <= VAR_1->numports; VAR_5++) {
   VAR_4 = VAR_1->ports[VAR_5];
   if (VAR_4
       && VAR_4->guid == VAR_3->before) {
    VAR_4->guid = VAR_3->after;
    VAR_3->found++;
    break;
   }
  }
 }
}
