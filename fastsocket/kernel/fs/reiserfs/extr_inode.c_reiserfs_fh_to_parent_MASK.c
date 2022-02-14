
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct fid {int * raw; } ;
struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (struct super_block*,int ,int ,int ) ;

struct dentry *FUNC_1(struct super_block *VAR_0, struct fid *VAR_1,
  int VAR_2, int VAR_3)
{
 if (VAR_3 < 4)
  return ((void*)0);

 return FUNC_0(VAR_0,
  (VAR_3 >= 5) ? VAR_1->raw[3] : VAR_1->raw[2],
  (VAR_3 >= 5) ? VAR_1->raw[4] : VAR_1->raw[3],
  (VAR_3 == 6) ? VAR_1->raw[5] : 0);
}
