
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtual_node {int vn_nr_item; } ;
struct tree_balance {int* insert_size; int* lnum; int lbytes; int* rnum; int rbytes; int s0num; int * FL; int * FR; int tb_path; struct virtual_node* tb_vn; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct buffer_head*) ;
 int VAR_0 ;
 int FUNC_1 (struct buffer_head*) ;
 int VAR_1 ;
 struct buffer_head* FUNC_2 (int ,int ) ;
 struct buffer_head* FUNC_3 (int ,int ) ;
 int FUNC_4 (int,char*) ;
 scalar_t__ FUNC_5 (struct tree_balance*,int,int) ;
 int FUNC_6 (struct tree_balance*,int,int) ;
 int FUNC_7 (struct tree_balance*,int,int) ;
 int FUNC_8 (struct tree_balance*,int) ;
 int FUNC_9 (struct tree_balance*,int) ;
 int FUNC_10 (struct tree_balance*,int) ;
 int FUNC_11 (struct tree_balance*,int) ;
 scalar_t__ FUNC_12 (struct tree_balance*) ;
 scalar_t__ FUNC_13 (struct tree_balance*,int) ;
 int FUNC_14 (struct tree_balance*,int,int,int,int,int *,int,int) ;

__attribute__((used)) static int FUNC_15(struct tree_balance *VAR_2, int VAR_3)
{
 struct virtual_node *VAR_4 = VAR_2->tb_vn;





 int VAR_5;

 int VAR_6, VAR_7;


 struct buffer_head *VAR_8, *VAR_9;
 int VAR_10, VAR_11 ;

 VAR_8 = FUNC_2(VAR_2->tb_path, 0);
 VAR_9 = FUNC_3(VAR_2->tb_path, 0);

 VAR_5 = VAR_2->insert_size[VAR_3];

 VAR_6 = FUNC_1(VAR_8);

 if (!VAR_9) {

  FUNC_4(-VAR_5 >= VAR_6 - FUNC_0(VAR_8),
         "vs-8240: attempt to create empty buffer tree");

  FUNC_14(VAR_2, VAR_3, 0, 0, 1, ((void*)0), -1, -1);
  return VAR_1;
 }

 if ((VAR_7 = FUNC_10(VAR_2, VAR_3)) != VAR_0)
  return VAR_7;


 VAR_11 = FUNC_11(VAR_2, VAR_3);
 VAR_10 = FUNC_9(VAR_2, VAR_3);

 FUNC_8(VAR_2, VAR_3);


 if (FUNC_5(VAR_2, VAR_10, VAR_11))
  return VAR_0;





 FUNC_6(VAR_2, VAR_3, VAR_10);
 FUNC_7(VAR_2, VAR_3, VAR_11);


 if (VAR_2->lnum[0] >= VAR_4->vn_nr_item && VAR_2->lbytes == -1)
  if (FUNC_13(VAR_2, VAR_3) || ((VAR_2->rnum[0] - ((VAR_2->rbytes == -1) ? 0 : 1)) < VAR_4->vn_nr_item) ||
      !VAR_2->FR[VAR_3]) {

   FUNC_4(!VAR_2->FL[VAR_3],
          "vs-8245: dc_check_balance_leaf: FL[h] must exist");


   FUNC_14(VAR_2, VAR_3, -1, 0, 0, ((void*)0), -1, -1);
   return VAR_0;
  }


 if (VAR_2->rnum[0] >= VAR_4->vn_nr_item && VAR_2->rbytes == -1) {
  FUNC_14(VAR_2, VAR_3, 0, -1, 0, ((void*)0), -1, -1);
  return VAR_0;
 }


 if (FUNC_12(VAR_2))
  return VAR_0;


 VAR_2->s0num = VAR_4->vn_nr_item;
 FUNC_14(VAR_2, VAR_3, 0, 0, 1, ((void*)0), -1, -1);
 return VAR_1;
}
