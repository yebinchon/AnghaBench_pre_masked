
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dtm_count; struct TYPE_5__* dtm_name; } ;
typedef TYPE_1__ dtrace_meta_t ;
typedef scalar_t__ dtrace_meta_provider_id_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,void*) ;
 int FUNC_4 (TYPE_1__*) ;

int
FUNC_5(dtrace_meta_provider_id_t VAR_4)
{
 dtrace_meta_t **VAR_5, *VAR_6 = (dtrace_meta_t *)VAR_4;

 FUNC_1(&VAR_2);
 FUNC_1(&VAR_1);

 if (VAR_6 == VAR_3) {
  VAR_5 = &VAR_3;
 } else {
  FUNC_3("attempt to unregister non-existent "
      "dtrace meta-provider %p\n", (void *)VAR_6);
 }

 if (VAR_6->dtm_count != 0) {
  FUNC_2(&VAR_1);
  FUNC_2(&VAR_2);
  return (VAR_0);
 }

 *VAR_5 = ((void*)0);

 FUNC_2(&VAR_1);
 FUNC_2(&VAR_2);

 FUNC_0(VAR_6->dtm_name, FUNC_4(VAR_6->dtm_name) + 1);
 FUNC_0(VAR_6, sizeof (dtrace_meta_t));

 return (0);
}
