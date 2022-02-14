
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct updn_node {int rank; int id; TYPE_1__* sw; } ;
struct TYPE_3__ {int p_node; } ;
typedef TYPE_1__ osm_switch_t ;


 int FUNC_0 (int ) ;
 struct updn_node* FUNC_1 (int) ;
 int FUNC_2 (struct updn_node*,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static struct updn_node *FUNC_4(osm_switch_t * VAR_0)
{
 struct updn_node *VAR_1;

 VAR_1 = FUNC_1(sizeof(*VAR_1));
 if (!VAR_1)
  return ((void*)0);
 FUNC_2(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->sw = VAR_0;
 VAR_1->id = FUNC_0(FUNC_3(VAR_0->p_node));
 VAR_1->rank = 0xffffffff;
 return VAR_1;
}
