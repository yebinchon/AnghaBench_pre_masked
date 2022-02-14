
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct super_block {int s_blocksize; } ;
struct TYPE_6__ {scalar_t__ k_dir_id; } ;
struct TYPE_8__ {unsigned long search_start; scalar_t__ inode; TYPE_1__ key; scalar_t__ formatted_node; TYPE_2__* th; } ;
typedef TYPE_3__ reiserfs_blocknr_hint_t ;
typedef scalar_t__ __u32 ;
struct TYPE_9__ {int k_dir_id; } ;
struct TYPE_7__ {struct super_block* t_super; } ;


 TYPE_5__* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct super_block*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(reiserfs_blocknr_hint_t * VAR_0)
{
 unsigned long VAR_1;
 __u32 VAR_2 = 0;
 int VAR_3 = 0;
 struct super_block *VAR_4 = VAR_0->th->t_super;
 if (VAR_0->inode)
  VAR_2 = FUNC_2(FUNC_0(VAR_0->inode)->k_dir_id);
 else if (VAR_0->formatted_node)
  VAR_2 = VAR_0->key.k_dir_id;

 if (VAR_2) {
  VAR_3 = FUNC_1(VAR_4, VAR_2);
  VAR_1 = VAR_3 * (VAR_4->s_blocksize << 3);

  if (VAR_0->inode)
   VAR_1 += VAR_4->s_blocksize / 2;
  VAR_0->search_start = VAR_1;
 }
}
