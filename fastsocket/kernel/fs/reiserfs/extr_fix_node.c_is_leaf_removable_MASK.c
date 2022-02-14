
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtual_node {int vn_nr_item; int * vn_vi; } ;
struct tree_balance {int* lnum; int lbytes; int* rnum; int rbytes; struct virtual_node* tb_vn; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct tree_balance*,int ,int,int,int ,int *,int,int) ;

__attribute__((used)) static int FUNC_2(struct tree_balance *VAR_0)
{
 struct virtual_node *VAR_1 = VAR_0->tb_vn;
 int VAR_2, VAR_3;
 int VAR_4;
 int VAR_5;



 VAR_2 = VAR_0->lnum[0] - ((VAR_0->lbytes != -1) ? 1 : 0);
 VAR_3 = VAR_0->rnum[0] - ((VAR_0->rbytes != -1) ? 1 : 0);
 VAR_5 = VAR_1->vn_nr_item;


 VAR_5 -= (VAR_2 + VAR_3);

 if (VAR_5 < 1) {

  FUNC_1(VAR_0, 0, VAR_2, VAR_1->vn_nr_item - VAR_2, 0,
          ((void*)0), -1, -1);
  return 1;
 }

 if (VAR_5 > 1 || VAR_0->lbytes == -1 || VAR_0->rbytes == -1)

  return 0;




 VAR_4 = FUNC_0(&(VAR_1->vn_vi[VAR_2]));

 if (VAR_0->lbytes + VAR_0->rbytes >= VAR_4) {
  FUNC_1(VAR_0, 0, VAR_2 + 1, VAR_3 + 1, 0, ((void*)0),
          VAR_0->lbytes, -1);
  return 1;
 }

 return 0;
}
