
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
struct reiserfs_super_block {scalar_t__ s_uuid; } ;
struct TYPE_4__ {void** val; } ;
struct kstatfs {TYPE_1__ f_fsid; int f_type; int f_bsize; scalar_t__ f_blocks; int f_bfree; int f_bavail; int f_namelen; } ;
struct dentry {TYPE_3__* d_sb; } ;
struct TYPE_6__ {int s_blocksize; } ;
struct TYPE_5__ {int s_blocksize; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct reiserfs_super_block* FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int) ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_3 (struct reiserfs_super_block*) ;
 scalar_t__ FUNC_4 (struct reiserfs_super_block*) ;
 int FUNC_5 (struct reiserfs_super_block*) ;

__attribute__((used)) static int FUNC_6(struct dentry *VAR_2, struct kstatfs *VAR_3)
{
 struct reiserfs_super_block *VAR_4 = FUNC_1(VAR_2->d_sb);

 VAR_3->f_namelen = (FUNC_0(VAR_1->s_blocksize));
 VAR_3->f_bfree = FUNC_5(VAR_4);
 VAR_3->f_bavail = VAR_3->f_bfree;
 VAR_3->f_blocks = FUNC_3(VAR_4) - FUNC_4(VAR_4) - 1;
 VAR_3->f_bsize = VAR_2->d_sb->s_blocksize;

 VAR_3->f_type = VAR_0;
 VAR_3->f_fsid.val[0] = (u32)FUNC_2(0, VAR_4->s_uuid, sizeof(VAR_4->s_uuid)/2);
 VAR_3->f_fsid.val[1] = (u32)FUNC_2(0, VAR_4->s_uuid + sizeof(VAR_4->s_uuid)/2,
    sizeof(VAR_4->s_uuid)/2);

 return 0;
}
