
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct treepath {int pos_in_item; } ;
struct item_head {int dummy; } ;
struct buffer_head {int b_blocknr; } ;
struct TYPE_3__ {int search_start; int formatted_node; struct treepath* path; } ;
typedef TYPE_1__ reiserfs_blocknr_hint_t ;
typedef int __le32 ;


 int FUNC_0 (struct item_head*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *,int) ;
 struct item_head* FUNC_3 (struct treepath*) ;
 int * FUNC_4 (struct treepath*) ;
 struct buffer_head* FUNC_5 (struct treepath*) ;
 scalar_t__ FUNC_6 (struct item_head*) ;

__attribute__((used)) static int FUNC_7(reiserfs_blocknr_hint_t * VAR_0)
{
 struct treepath *VAR_1;
 struct buffer_head *VAR_2;
 struct item_head *VAR_3;
 int VAR_4;
 __le32 *VAR_5;
 int VAR_6 = 0;

 if (!VAR_0->path)

  return 0;

 VAR_1 = VAR_0->path;
 VAR_2 = FUNC_5(VAR_1);
 FUNC_1(!VAR_2, "green-4002: Illegal path specified to get_left_neighbor");
 VAR_3 = FUNC_3(VAR_1);
 VAR_4 = VAR_1->pos_in_item;
 VAR_5 = FUNC_4(VAR_1);

 VAR_0->search_start = VAR_2->b_blocknr;

 if (!VAR_0->formatted_node && FUNC_6(VAR_3)) {


  if (VAR_4 == FUNC_0(VAR_3))
   VAR_4--;

  while (VAR_4 >= 0) {
   int VAR_7 = FUNC_2(VAR_5, VAR_4);
   if (VAR_7) {
    VAR_0->search_start = VAR_7;
    VAR_6 = 1;
    break;
   }
   VAR_4--;
  }
 }


 return VAR_6;
}
