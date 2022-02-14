
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_5__ {int blocked; int name; } ;
struct TYPE_6__ {TYPE_1__ publ; scalar_t__ active; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_2__* VAR_3 ;

void FUNC_2(void)
{
 u32 VAR_4;

 if (!VAR_3)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_3[VAR_4].active)
   VAR_3[VAR_4].publ.blocked = 1;
 }
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_3[VAR_4].active)
   FUNC_0(VAR_3[VAR_4].publ.name);
 }
 FUNC_1(VAR_3);
 FUNC_1(VAR_2);
 VAR_3 = ((void*)0);
 VAR_2 = ((void*)0);
 VAR_1 = 0;
}
