
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int al_elements; } ;
typedef TYPE_1__ alist_t ;
struct TYPE_7__ {void* ale_value; void* ale_name; } ;
typedef TYPE_2__ alist_el_t ;


 int FUNC_0 (int ,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int) ;

void
FUNC_2(alist_t *VAR_0, void *VAR_1, void *VAR_2)
{
 alist_el_t *VAR_3;

 VAR_3 = FUNC_1(sizeof (alist_el_t));
 VAR_3->ale_name = VAR_1;
 VAR_3->ale_value = VAR_2;
 FUNC_0(VAR_0->al_elements, VAR_3);
}
