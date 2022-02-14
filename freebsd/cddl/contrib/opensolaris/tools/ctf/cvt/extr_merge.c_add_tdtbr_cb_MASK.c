
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int t_id; } ;
typedef TYPE_1__ tdesc_t ;
struct TYPE_8__ {int md_tdtbr; } ;
typedef TYPE_2__ merge_cb_data_t ;


 int FUNC_0 (int,char*,int ,int ) ;
 int FUNC_1 (int ,void*,int *,int *) ;
 int FUNC_2 (TYPE_1__**,TYPE_1__*,int,int *,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(void *VAR_0, void *VAR_1)
{
 tdesc_t **VAR_2 = VAR_0;
 merge_cb_data_t *VAR_3 = VAR_1;

 FUNC_0(3, "Remapping %s (%d)\n", FUNC_3(*VAR_2), (*VAR_2)->t_id);

 if (!FUNC_2(VAR_2, *VAR_2, -1, ((void*)0), VAR_3))
  return (0);

 (void) FUNC_1(VAR_3->md_tdtbr, (void *)VAR_2, ((void*)0), ((void*)0));
 return (1);
}
