
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nilfs_super_root {int sr_sum; } ;
struct buffer_head {scalar_t__ b_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned char*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct buffer_head *VAR_1, u32 VAR_2)
{
 struct nilfs_super_root *VAR_3 =
  (struct nilfs_super_root *)VAR_1->b_data;
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_2,
         (unsigned char *)VAR_3 + sizeof(VAR_3->sr_sum),
         VAR_0 - sizeof(VAR_3->sr_sum));
 VAR_3->sr_sum = FUNC_0(VAR_4);
}
