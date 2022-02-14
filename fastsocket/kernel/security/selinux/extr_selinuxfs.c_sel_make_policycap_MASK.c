
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct inode {unsigned int i_ino; int * i_fop; } ;
struct dentry {int dummy; } ;
struct TYPE_4__ {int d_sb; } ;


 unsigned int FUNC_0 (char**) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct dentry*,struct inode*) ;
 struct dentry* FUNC_2 (TYPE_1__*,char*) ;
 TYPE_1__* VAR_5 ;
 char** VAR_6 ;
 struct inode* FUNC_3 (int ,int) ;
 int VAR_7 ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(void)
{
 unsigned int VAR_8;
 struct dentry *VAR_9 = ((void*)0);
 struct inode *VAR_10 = ((void*)0);

 FUNC_4(VAR_5);

 for (VAR_8 = 0; VAR_8 <= VAR_1; VAR_8++) {
  if (VAR_8 < FUNC_0(VAR_6))
   VAR_9 = FUNC_2(VAR_5,
           VAR_6[VAR_8]);
  else
   VAR_9 = FUNC_2(VAR_5, "unknown");

  if (VAR_9 == ((void*)0))
   return -VAR_0;

  VAR_10 = FUNC_3(VAR_5->d_sb, VAR_3 | VAR_4);
  if (VAR_10 == ((void*)0))
   return -VAR_0;

  VAR_10->i_fop = &VAR_7;
  VAR_10->i_ino = VAR_8 | VAR_2;
  FUNC_1(VAR_9, VAR_10);
 }

 return 0;
}
