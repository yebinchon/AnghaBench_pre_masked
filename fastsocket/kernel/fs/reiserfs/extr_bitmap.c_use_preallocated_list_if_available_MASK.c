
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_4__ {struct inode* inode; } ;
typedef TYPE_1__ reiserfs_blocknr_hint_t ;
typedef int b_blocknr_t ;
struct TYPE_5__ {scalar_t__ i_prealloc_count; int i_prealloc_list; int i_prealloc_block; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(reiserfs_blocknr_hint_t * VAR_0,
           b_blocknr_t * VAR_1,
           int VAR_2)
{
 struct inode *VAR_3 = VAR_0->inode;

 if (FUNC_0(VAR_3)->i_prealloc_count > 0) {
  while (VAR_2) {

   *VAR_1++ = FUNC_0(VAR_3)->i_prealloc_block++;
   FUNC_0(VAR_3)->i_prealloc_count--;

   VAR_2--;

   if (FUNC_0(VAR_3)->i_prealloc_count <= 0) {
    FUNC_1(&FUNC_0(VAR_3)->i_prealloc_list);
    break;
   }
  }
 }

 return VAR_2;
}
