
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct romfs_inode {int spec; int next; } ;
struct nameidata {int dummy; } ;
struct inode {unsigned long i_ino; int i_sb; } ;
struct TYPE_2__ {char* name; int len; } ;
struct dentry {TYPE_1__ d_name; } ;
typedef int ri ;


 struct dentry* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (struct dentry*,struct inode*) ;
 int FUNC_5 (int ,unsigned long,struct romfs_inode*,int) ;
 int FUNC_6 (int ,int,char const*,int) ;
 struct inode* FUNC_7 (int ,unsigned long) ;
 unsigned long FUNC_8 (int ) ;

__attribute__((used)) static struct dentry *FUNC_9(struct inode *VAR_4, struct dentry *VAR_5,
       struct nameidata *VAR_6)
{
 unsigned long VAR_7, VAR_8;
 struct inode *VAR_9;
 struct romfs_inode VAR_10;
 const char *VAR_11;
 int VAR_12, VAR_13;

 VAR_7 = VAR_4->i_ino & VAR_1;
 VAR_13 = FUNC_5(VAR_4->i_sb, VAR_7, &VAR_10, VAR_2);
 if (VAR_13 < 0)
  goto error;



 VAR_8 = FUNC_8(VAR_4->i_sb);
 VAR_7 = FUNC_3(VAR_10.spec) & VAR_1;

 VAR_11 = VAR_5->d_name.name;
 VAR_12 = VAR_5->d_name.len;

 for (;;) {
  if (!VAR_7 || VAR_7 >= VAR_8)
   goto out0;

  VAR_13 = FUNC_5(VAR_4->i_sb, VAR_7, &VAR_10, sizeof(VAR_10));
  if (VAR_13 < 0)
   goto error;


  VAR_13 = FUNC_6(VAR_4->i_sb, VAR_7 + VAR_2, VAR_11,
           VAR_12);
  if (VAR_13 < 0)
   goto error;
  if (VAR_13 == 1)
   break;


  VAR_7 = FUNC_3(VAR_10.next) & VAR_1;
 }


 if ((FUNC_3(VAR_10.next) & VAR_3) == VAR_0)
  VAR_7 = FUNC_3(VAR_10.spec) & VAR_1;

 VAR_9 = FUNC_7(VAR_4->i_sb, VAR_7);
 if (FUNC_1(VAR_9)) {
  VAR_13 = FUNC_2(VAR_9);
  goto error;
 }
 goto outi;
out0:
 VAR_9 = ((void*)0);
outi:
 FUNC_4(VAR_5, VAR_9);
 VAR_13 = 0;
error:
 return FUNC_0(VAR_13);
}
