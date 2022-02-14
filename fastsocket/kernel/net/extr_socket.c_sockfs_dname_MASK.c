
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {TYPE_1__* d_inode; } ;
struct TYPE_2__ {int i_ino; } ;


 char* FUNC_0 (struct dentry*,char*,int,char*,int ) ;

__attribute__((used)) static char *FUNC_1(struct dentry *VAR_0, char *VAR_1, int VAR_2)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2, "socket:[%lu]",
    VAR_0->d_inode->i_ino);
}
