
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtual_node {int vn_nr_item; unsigned int vn_size; scalar_t__ vn_mode; struct virtual_item* vn_vi; } ;
struct virtual_item {int vi_type; scalar_t__ vi_item_len; } ;
struct tree_balance {int* rnum; int rbytes; int tb_path; struct virtual_node* tb_vn; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,char*) ;
 int VAR_5 ;
 int FUNC_2 (struct virtual_item*,int) ;

__attribute__((used)) static void FUNC_3(struct tree_balance *VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9;
 struct virtual_node *VAR_10 = VAR_6->tb_vn;
 struct virtual_item *VAR_11;
 int VAR_12, VAR_13;

 FUNC_1(VAR_8 < 0, "vs-8070: cur_free < 0");


 if (VAR_7 > 0) {
  VAR_6->rnum[VAR_7] = VAR_8 / (VAR_0 + VAR_2);
  return;
 }



 if (!VAR_8 || !VAR_10->vn_nr_item) {

  VAR_6->rnum[VAR_7] = 0;
  VAR_6->rbytes = -1;
  return;
 }

 FUNC_1(!FUNC_0(VAR_6->tb_path, 0),
        "vs-8075: parent does not exist or invalid");

 VAR_11 = VAR_10->vn_vi + VAR_10->vn_nr_item - 1;
 if ((unsigned int)VAR_8 >=
     (VAR_10->vn_size -
      ((VAR_11->vi_type & VAR_5) ? VAR_1 : 0))) {


  FUNC_1(VAR_10->vn_mode == VAR_3 || VAR_10->vn_mode == VAR_4,
         "vs-8080: invalid mode or balance condition failed");

  VAR_6->rnum[VAR_7] = VAR_10->vn_nr_item;
  VAR_6->rbytes = -1;
  return;
 }

 VAR_12 = 0, VAR_13 = VAR_1;


 if (VAR_11->vi_type & VAR_5)
  VAR_12 = -(int)VAR_1, VAR_13 = 0;

 VAR_6->rnum[0] = 0;
 for (VAR_9 = VAR_10->vn_nr_item - 1; VAR_9 >= 0;
      VAR_9--, VAR_12 = 0, VAR_13 = VAR_1, VAR_11--) {
  VAR_12 += VAR_11->vi_item_len;
  if (VAR_8 >= VAR_12) {

   VAR_8 -= VAR_12;
   VAR_6->rnum[0]++;
   continue;
  }


  if (VAR_8 <= VAR_13) {
   VAR_6->rbytes = -1;
   return;
  }


  VAR_8 -= VAR_13;

  VAR_6->rbytes = FUNC_2(VAR_11, VAR_8);
  if (VAR_6->rbytes != -1)

   VAR_6->rnum[0]++;

  break;
 }

 return;
}
