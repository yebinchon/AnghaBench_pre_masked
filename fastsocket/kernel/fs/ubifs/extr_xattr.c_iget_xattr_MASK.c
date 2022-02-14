
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_info {int vfs_sb; } ;
struct inode {int dummy; } ;
typedef int ino_t ;
struct TYPE_2__ {scalar_t__ xattr; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (char*,...) ;
 struct inode* FUNC_5 (int ,int ) ;
 TYPE_1__* FUNC_6 (struct inode*) ;

__attribute__((used)) static struct inode *FUNC_7(struct ubifs_info *VAR_1, ino_t VAR_2)
{
 struct inode *VAR_3;

 VAR_3 = FUNC_5(VAR_1->vfs_sb, VAR_2);
 if (FUNC_1(VAR_3)) {
  FUNC_4("dead extended attribute entry, error %d",
     (int)FUNC_2(VAR_3));
  return VAR_3;
 }
 if (FUNC_6(VAR_3)->xattr)
  return VAR_3;
 FUNC_4("corrupt extended attribute entry");
 FUNC_3(VAR_3);
 return FUNC_0(-VAR_0);
}
