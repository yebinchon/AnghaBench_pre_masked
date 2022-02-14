
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct guids {scalar_t__ before; scalar_t__ after; int found; } ;
struct TYPE_4__ {scalar_t__ guid; scalar_t__ type; } ;
typedef TYPE_1__ ibnd_node_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(ibnd_node_t *VAR_1, void *VAR_2)
{
 struct guids *VAR_3;

 VAR_3 = (struct guids *)VAR_2;

 if (VAR_1->guid == VAR_3->before) {

  VAR_1->guid = VAR_3->after;




  if (VAR_1->type == VAR_0)
   FUNC_0(VAR_1);

  VAR_3->found++;
 }
}
