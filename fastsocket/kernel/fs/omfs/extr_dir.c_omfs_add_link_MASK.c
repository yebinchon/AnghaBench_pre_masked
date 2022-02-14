
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct omfs_inode {void* i_parent; void* i_sibling; scalar_t__ i_name; } ;
struct inode {int i_ctime; int i_ino; int i_sb; } ;
struct TYPE_4__ {char* name; int len; } ;
struct dentry {TYPE_2__ d_name; TYPE_1__* d_parent; } ;
struct buffer_head {int * b_data; } ;
typedef void* __be64 ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ,int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (scalar_t__,char const*,int) ;
 int FUNC_8 (scalar_t__,int ,scalar_t__) ;
 struct buffer_head* FUNC_9 (struct inode*,char const*,int,int*) ;
 struct buffer_head* FUNC_10 (int ,int ) ;

__attribute__((used)) static int FUNC_11(struct dentry *VAR_3, struct inode *VAR_4)
{
 struct inode *VAR_5 = VAR_3->d_parent->d_inode;
 const char *VAR_6 = VAR_3->d_name.name;
 int VAR_7 = VAR_3->d_name.len;
 struct omfs_inode *VAR_8;
 struct buffer_head *VAR_9;
 u64 VAR_10;
 __be64 *VAR_11;
 int VAR_12;


 VAR_9 = FUNC_9(VAR_5, VAR_6, VAR_7, &VAR_12);
 if (!VAR_9)
  goto out;

 VAR_11 = (__be64 *) &VAR_9->b_data[VAR_12];
 VAR_10 = FUNC_1(*VAR_11);
 *VAR_11 = FUNC_4(VAR_4->i_ino);
 FUNC_5(VAR_9);
 FUNC_2(VAR_9);


 VAR_9 = FUNC_10(VAR_5->i_sb, FUNC_3(FUNC_0(VAR_5->i_sb), VAR_4->i_ino));
 if (!VAR_9)
  goto out;

 VAR_8 = (struct omfs_inode *) VAR_9->b_data;
 FUNC_7(VAR_8->i_name, VAR_6, VAR_7);
 FUNC_8(VAR_8->i_name + VAR_7, 0, VAR_2 - VAR_7);
 VAR_8->i_sibling = FUNC_4(VAR_10);
 VAR_8->i_parent = FUNC_4(VAR_5->i_ino);
 FUNC_5(VAR_9);
 FUNC_2(VAR_9);

 VAR_5->i_ctime = VAR_0;


 FUNC_6(VAR_5);
 FUNC_6(VAR_4);
 return 0;
out:
 return -VAR_1;
}
