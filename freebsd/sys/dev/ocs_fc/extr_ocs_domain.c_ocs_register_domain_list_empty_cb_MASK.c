
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {void (* domain_list_empty_cb ) (TYPE_1__*,void*) ;int domain_list; void* domain_list_empty_cb_arg; } ;
typedef TYPE_1__ ocs_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *) ;
 void FUNC_3 (TYPE_1__*,void*) ;

void
FUNC_4(ocs_t *VAR_0, void (*VAR_1)(ocs_t *VAR_2, void *VAR_3), void *VAR_4)
{
 FUNC_0(VAR_0);
  VAR_0->domain_list_empty_cb = VAR_1;
  VAR_0->domain_list_empty_cb_arg = VAR_4;
  if (FUNC_2(&VAR_0->domain_list) && VAR_1) {
   (*VAR_1)(VAR_0, VAR_4);
  }
 FUNC_1(VAR_0);
}
