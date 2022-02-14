
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nameidata {int dummy; } ;
struct dentry {int d_inode; } ;
struct TYPE_2__ {scalar_t__ i_data; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (struct nameidata*,char*) ;

__attribute__((used)) static void *FUNC_2(struct dentry *VAR_0, struct nameidata *VAR_1)
{
 FUNC_1(VAR_1, (char *)FUNC_0(VAR_0->d_inode)->i_data);
 return ((void*)0);
}
