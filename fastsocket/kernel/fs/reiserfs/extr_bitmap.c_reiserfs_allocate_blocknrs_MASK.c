
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_8__ {scalar_t__ search_start; int inode; TYPE_3__* th; scalar_t__ preallocate; int formatted_node; } ;
typedef TYPE_1__ reiserfs_blocknr_hint_t ;
typedef int b_blocknr_t ;
struct TYPE_10__ {int reserved_blocks; } ;
struct TYPE_9__ {struct super_block* t_super; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (TYPE_1__*,int *,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_3__*,int ,int ,int) ;
 int FUNC_6 (TYPE_1__*,int *,int) ;

int FUNC_7(reiserfs_blocknr_hint_t * VAR_2, b_blocknr_t * VAR_3, int VAR_4, int VAR_5 )

{
 int VAR_6 = VAR_4;
 int VAR_7;
 struct super_block *VAR_8 = VAR_2->th->t_super;


 if (FUNC_2(VAR_8) - FUNC_0(VAR_8)->reserved_blocks <
     VAR_4 - VAR_5)
  return VAR_1;






 if (!VAR_2->formatted_node && VAR_2->preallocate) {
  VAR_4 = FUNC_6
      (VAR_2, VAR_3, VAR_4);
  if (VAR_4 == 0)

   return VAR_0;
  VAR_3 += (VAR_6 - VAR_4);
 }


 FUNC_4(VAR_2, VAR_4);
 if (VAR_2->search_start >= FUNC_1(VAR_8))
  VAR_2->search_start = FUNC_1(VAR_8) - 1;


 VAR_7 = FUNC_3
     (VAR_2, VAR_3, VAR_4);





 if (VAR_7 != VAR_0) {
  while (VAR_4++ < VAR_6) {
   FUNC_5(VAR_2->th, VAR_2->inode,
         *(--VAR_3), 1);
  }
 }
 return VAR_7;
}
