
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_2__ {int generation; int partref; int block; } ;
struct fid {TYPE_1__ udf; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (struct super_block*,int ,int ,int ) ;

__attribute__((used)) static struct dentry *FUNC_1(struct super_block *VAR_2,
           struct fid *VAR_3, int VAR_4, int VAR_5)
{
 if ((VAR_4 != 3 && VAR_4 != 5) ||
     (VAR_5 != VAR_1 &&
      VAR_5 != VAR_0))
  return ((void*)0);

 return FUNC_0(VAR_2, VAR_3->udf.block, VAR_3->udf.partref,
   VAR_3->udf.generation);
}
