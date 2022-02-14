
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct super_block {int s_blocksize_bits; TYPE_2__* s_bdev; } ;
struct kernel_lb_addr {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int sector_t ;
struct TYPE_4__ {TYPE_1__* bd_inode; } ;
struct TYPE_3__ {scalar_t__ i_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct super_block*,int ) ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct super_block*,struct buffer_head*,struct kernel_lb_addr*) ;
 struct buffer_head* FUNC_4 (struct super_block*,int ,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_2, sector_t VAR_3,
      struct kernel_lb_addr *VAR_4)
{
 struct buffer_head *VAR_5;
 uint16_t VAR_6;
 int VAR_7;

 if (FUNC_0(VAR_2, VAR_1) &&
     FUNC_2(VAR_3) >=
     VAR_2->s_bdev->bd_inode->i_size >> VAR_2->s_blocksize_bits)
  return 0;

 VAR_5 = FUNC_4(VAR_2, VAR_3, VAR_3, &VAR_6);
 if (!VAR_5)
  return 0;
 if (VAR_6 != VAR_0) {
  FUNC_1(VAR_5);
  return 0;
 }
 VAR_7 = FUNC_3(VAR_2, VAR_5, VAR_4);
 FUNC_1(VAR_5);
 return VAR_7;
}
