
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dnup_node {int rank; int * sw; } ;
typedef int osm_switch_t ;


 struct dnup_node* FUNC_0 (int) ;
 int FUNC_1 (struct dnup_node*,int ,int) ;

__attribute__((used)) static struct dnup_node *FUNC_2(osm_switch_t * VAR_0)
{
 struct dnup_node *VAR_1;

 VAR_1 = FUNC_0(sizeof(*VAR_1));
 if (!VAR_1)
  return ((void*)0);
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->sw = VAR_0;
 VAR_1->rank = 0xffffffff;
 return VAR_1;
}
