
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nameidata {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int name; int len; } ;
struct dentry {TYPE_1__ d_name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct inode*,struct dentry*,int,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct inode*,struct dentry*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1,
   struct dentry *VAR_2,
   int VAR_3,
   struct nameidata *VAR_4)
{
 int VAR_5;

 FUNC_0("(0x%p, 0x%p, %d, '%.*s')\n", VAR_1, VAR_2, VAR_3,
     VAR_2->d_name.len, VAR_2->d_name.name);
 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3 | VAR_0, 0);
 FUNC_1(VAR_5);

 return VAR_5;
}
