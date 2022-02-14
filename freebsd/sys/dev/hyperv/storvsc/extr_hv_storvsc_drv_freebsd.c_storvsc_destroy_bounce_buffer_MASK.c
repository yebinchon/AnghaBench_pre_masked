
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sglist {int dummy; } ;
struct hv_sgl_node {struct sglist* sgl_data; } ;
struct TYPE_2__ {int free_sgl_list; int in_use_sgl_list; } ;


 scalar_t__ FUNC_0 (int *) ;
 struct hv_sgl_node* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct hv_sgl_node*,int ) ;
 int FUNC_3 (struct hv_sgl_node*,int ) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(struct sglist *VAR_2)
{
 struct hv_sgl_node *VAR_3 = ((void*)0);
 if (FUNC_0(&VAR_0.in_use_sgl_list)) {
  FUNC_4("storvsc error: not enough in use sgl\n");
  return;
 }
 VAR_3 = FUNC_1(&VAR_0.in_use_sgl_list);
 FUNC_3(VAR_3, VAR_1);
 VAR_3->sgl_data = VAR_2;
 FUNC_2(&VAR_0.free_sgl_list, VAR_3, VAR_1);
}
