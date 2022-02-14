
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_2__ {int parent_generation; int parent_partref; int parent_block; } ;
struct fid {TYPE_1__ udf; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (struct super_block*,int ,int ,int ) ;

__attribute__((used)) static struct dentry *FUNC_1(struct super_block *VAR_1,
           struct fid *VAR_2, int VAR_3, int VAR_4)
{
 if (VAR_3 != 5 || VAR_4 != VAR_0)
  return ((void*)0);

 return FUNC_0(VAR_1, VAR_2->udf.parent_block,
     VAR_2->udf.parent_partref,
     VAR_2->udf.parent_generation);
}
