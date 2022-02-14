
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_name {int len; int name; } ;
struct TYPE_2__ {int len; int name; } ;
struct dentry {TYPE_1__ d_name; } ;



__attribute__((used)) static void
FUNC_0(
 struct xfs_name *VAR_0,
 struct dentry *VAR_1)
{
 VAR_0->name = VAR_1->d_name.name;
 VAR_0->len = VAR_1->d_name.len;
}
