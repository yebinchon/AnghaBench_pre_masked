
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udf_sb_info {scalar_t__ s_last_block; } ;
struct super_block {int dummy; } ;
struct kernel_lb_addr {int dummy; } ;
typedef scalar_t__ sector_t ;


 int FUNC_0 (struct super_block*,int ) ;
 int VAR_0 ;
 struct udf_sb_info* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*,int ) ;
 scalar_t__ FUNC_3 (struct super_block*,scalar_t__,struct kernel_lb_addr*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_1,
      struct kernel_lb_addr *VAR_2)
{
 sector_t VAR_3;
 struct udf_sb_info *VAR_4 = FUNC_1(VAR_1);

 VAR_3 = FUNC_3(VAR_1, VAR_4->s_last_block, VAR_2);
 if (VAR_3)
  goto out;


 FUNC_2(VAR_1, VAR_0);

 VAR_3 = FUNC_3(VAR_1,
    FUNC_4(VAR_4->s_last_block),
    VAR_2);
 if (VAR_3)
  goto out;


 VAR_3 = FUNC_3(VAR_1, VAR_4->s_last_block, VAR_2);
 if (!VAR_3) {

  FUNC_0(VAR_1, VAR_0);
  return 0;
 }
out:
 VAR_4->s_last_block = VAR_3;
 return 1;
}
