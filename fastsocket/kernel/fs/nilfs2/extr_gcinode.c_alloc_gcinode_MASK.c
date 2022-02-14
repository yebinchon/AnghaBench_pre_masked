
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct the_nilfs {int dummy; } ;
struct nilfs_inode_info {int i_state; int i_bmap; int * i_bh; scalar_t__ i_flags; int i_cno; } ;
struct inode {TYPE_1__* i_mapping; int * i_fop; int * i_op; } ;
typedef int ino_t ;
typedef int __u64 ;
struct TYPE_2__ {int * a_ops; } ;


 int VAR_0 ;
 struct nilfs_inode_info* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 struct inode* FUNC_2 (struct the_nilfs*,int *,int ,int ) ;

__attribute__((used)) static struct inode *FUNC_3(struct the_nilfs *VAR_3, ino_t VAR_4,
       __u64 VAR_5)
{
 struct inode *VAR_6 = FUNC_2(VAR_3, ((void*)0), VAR_4, VAR_0);
 struct nilfs_inode_info *VAR_7;

 if (!VAR_6)
  return ((void*)0);

 VAR_6->i_op = ((void*)0);
 VAR_6->i_fop = ((void*)0);
 VAR_6->i_mapping->a_ops = &VAR_2;

 VAR_7 = FUNC_0(VAR_6);
 VAR_7->i_cno = VAR_5;
 VAR_7->i_flags = 0;
 VAR_7->i_state = 1 << VAR_1;
 VAR_7->i_bh = ((void*)0);
 FUNC_1(VAR_7->i_bmap);

 return VAR_6;
}
