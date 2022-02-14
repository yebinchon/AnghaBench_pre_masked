
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct inode {scalar_t__ i_generation; } ;


 struct inode* FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct super_block*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (struct inode*) ;
 struct inode* FUNC_5 (struct super_block*,scalar_t__) ;

__attribute__((used)) static struct inode *
FUNC_6(struct super_block *VAR_3, u64 VAR_4, u32 VAR_5)
{
 struct inode *VAR_6;

 if (VAR_4 < FUNC_3(VAR_3) && VAR_4 != VAR_1 &&
     VAR_4 != VAR_2)
  return FUNC_1(-VAR_0);

 VAR_6 = FUNC_5(VAR_3, VAR_4);
 if (FUNC_2(VAR_6))
  return FUNC_0(VAR_6);
 if (VAR_5 && VAR_6->i_generation != VAR_5) {
  FUNC_4(VAR_6);
  return FUNC_1(-VAR_0);
 }

 return VAR_6;
}
