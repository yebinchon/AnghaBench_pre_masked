
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_generation; int i_sb; } ;
struct dentry {TYPE_1__* d_inode; } ;
typedef int namebuf ;
struct TYPE_4__ {int k_objectid; } ;
struct TYPE_3__ {int i_mutex; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (struct inode const*) ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 int VAR_1 ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (int ) ;
 struct dentry* FUNC_5 (char*,struct dentry*,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 struct dentry* FUNC_8 (int ,int) ;
 int FUNC_9 (char*,int,char*,int,int) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (TYPE_1__*,struct dentry*,int) ;

__attribute__((used)) static struct dentry *FUNC_13(const struct inode *VAR_2, int VAR_3)
{
 struct dentry *VAR_4, *VAR_5;
 char VAR_6[17];

 VAR_4 = FUNC_8(VAR_2->i_sb, VAR_3);
 if (FUNC_2(VAR_4))
  return VAR_4;

 FUNC_9(VAR_6, sizeof(VAR_6), "%X.%X",
   FUNC_4(FUNC_1(VAR_2)->k_objectid),
   VAR_2->i_generation);

 FUNC_6(&VAR_4->d_inode->i_mutex, VAR_1);

 VAR_5 = FUNC_5(VAR_6, VAR_4, FUNC_10(VAR_6));
 if (!FUNC_2(VAR_5) && !VAR_5->d_inode) {
  int VAR_7 = -VAR_0;
  if (FUNC_11(VAR_3))
   VAR_7 = FUNC_12(VAR_4->d_inode, VAR_5, 0700);
  if (VAR_7) {
   FUNC_3(VAR_5);
   VAR_5 = FUNC_0(VAR_7);
  }
 }

 FUNC_7(&VAR_4->d_inode->i_mutex);
 FUNC_3(VAR_4);
 return VAR_5;
}
