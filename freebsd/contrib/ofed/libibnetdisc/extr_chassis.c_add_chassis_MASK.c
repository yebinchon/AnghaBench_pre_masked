
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ibnd_chassis_t ;
struct TYPE_4__ {TYPE_2__* current_chassis; TYPE_2__* last_chassis; TYPE_2__* first_chassis; } ;
typedef TYPE_1__ chassis_scan_t ;
struct TYPE_5__ {struct TYPE_5__* next; } ;


 int FUNC_0 (char*) ;
 TYPE_2__* FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(chassis_scan_t * VAR_0)
{
 if (!(VAR_0->current_chassis =
       FUNC_1(1, sizeof(ibnd_chassis_t)))) {
  FUNC_0("OOM: failed to allocate chassis object\n");
  return -1;
 }

 if (VAR_0->first_chassis == ((void*)0)) {
  VAR_0->first_chassis = VAR_0->current_chassis;
  VAR_0->last_chassis = VAR_0->current_chassis;
 } else {
  VAR_0->last_chassis->next =
      VAR_0->current_chassis;
  VAR_0->last_chassis = VAR_0->current_chassis;
 }
 return 0;
}
