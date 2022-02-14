
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtual_node {int vn_nr_item; int vn_size; TYPE_1__* vn_vi; } ;
struct tree_balance {int tb_sb; int * rkey; scalar_t__* CFR; int tb_path; struct virtual_node* tb_vn; } ;
struct item_head {int ih_key; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {int vi_type; } ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (scalar_t__,int ) ;
 struct item_head* FUNC_2 (struct buffer_head*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct buffer_head*) ;
 struct buffer_head* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (struct item_head*) ;
 scalar_t__ FUNC_9 (struct item_head*) ;
 int VAR_4 ;
 int FUNC_10 (struct tree_balance*,int ,int,int,int,int *,int,int) ;

__attribute__((used)) static int FUNC_11(struct tree_balance *VAR_5, int VAR_6, int VAR_7)
{
 struct virtual_node *VAR_8 = VAR_5->tb_vn;
 int VAR_9;
 struct buffer_head *VAR_10;

 VAR_10 = FUNC_4(VAR_5->tb_path, 0);

 VAR_9 = 0;
 if (VAR_8->vn_nr_item) {
  if (VAR_8->vn_vi[0].vi_type & VAR_2)
   VAR_9 += VAR_1;

  if (VAR_8->vn_vi[VAR_8->vn_nr_item - 1].
      vi_type & VAR_3)
   VAR_9 += VAR_1;
 } else {

  struct item_head *VAR_11;

  FUNC_6(FUNC_0(VAR_10) != 1,
         "vs-8125: item number must be 1: it is %d",
         FUNC_0(VAR_10));

  VAR_11 = FUNC_2(VAR_10, 0);
  if (VAR_5->CFR[0]
      && !FUNC_7(&(VAR_11->ih_key),
        FUNC_1(VAR_5->CFR[0],
         VAR_5->rkey[0])))
   if (FUNC_8(VAR_11)) {







    VAR_9 = VAR_1;



    FUNC_6(FUNC_9(VAR_11) == VAR_0,
           "vs-8130: first directory item can not be removed until directory is not empty");
   }

 }

 if (FUNC_3(VAR_10) + VAR_8->vn_size <= VAR_7 + VAR_6 + VAR_9) {
  FUNC_10(VAR_5, 0, -1, -1, -1, ((void*)0), -1, -1);
  FUNC_5(VAR_5->tb_sb, VAR_4);
  return 1;
 }
 return 0;

}
