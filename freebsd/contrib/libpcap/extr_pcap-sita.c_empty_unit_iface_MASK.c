
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* iface; } ;
typedef TYPE_1__ unit_t ;
struct TYPE_6__ {struct TYPE_6__* next; struct TYPE_6__* IOPname; struct TYPE_6__* name; } ;
typedef TYPE_2__ iface_t ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(unit_t *VAR_0) {
 iface_t *VAR_1, *VAR_2;

 VAR_2 = VAR_0->iface;
 while (VAR_2) {
  if (VAR_2->name) FUNC_0(VAR_2->name);
  if (VAR_2->IOPname) FUNC_0(VAR_2->IOPname);
  VAR_1 = VAR_2->next;
  FUNC_0(VAR_2);
  VAR_2 = VAR_1;
 }
 VAR_0->iface = 0;
}
