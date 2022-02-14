
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigev_node {int sn_id; int sn_type; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,struct sigev_node*,int ) ;
 int * VAR_0 ;
 int VAR_1 ;

int
FUNC_2(struct sigev_node *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2->sn_type, VAR_2->sn_id);

 FUNC_1(&VAR_0[VAR_3], VAR_2, VAR_1);
 return (0);
}
