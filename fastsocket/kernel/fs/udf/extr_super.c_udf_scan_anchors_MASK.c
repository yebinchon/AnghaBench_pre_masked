
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct udf_sb_info {int s_anchor; int s_session; } ;
struct super_block {int s_blocksize_bits; TYPE_2__* s_bdev; } ;
struct kernel_lb_addr {int dummy; } ;
typedef int sector_t ;
struct TYPE_4__ {TYPE_1__* bd_inode; } ;
struct TYPE_3__ {int i_size; } ;


 struct udf_sb_info* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (struct super_block*,int,struct kernel_lb_addr*) ;

__attribute__((used)) static sector_t FUNC_2(struct super_block *VAR_0, sector_t VAR_1,
     struct kernel_lb_addr *VAR_2)
{
 sector_t VAR_3[6];
 int VAR_4;
 struct udf_sb_info *VAR_5 = FUNC_0(VAR_0);
 int VAR_6 = 0;


 if (VAR_5->s_anchor) {
  if (FUNC_1(VAR_0, VAR_5->s_anchor, VAR_2))
   return VAR_1;
 }







 if (FUNC_1(VAR_0, VAR_5->s_session + 256, VAR_2))
  return VAR_1;




 VAR_3[VAR_6++] = VAR_1;
 if (VAR_1 >= 1)
  VAR_3[VAR_6++] = VAR_1 - 1;
 VAR_3[VAR_6++] = VAR_1 + 1;
 if (VAR_1 >= 2)
  VAR_3[VAR_6++] = VAR_1 - 2;
 if (VAR_1 >= 150)
  VAR_3[VAR_6++] = VAR_1 - 150;
 if (VAR_1 >= 152)
  VAR_3[VAR_6++] = VAR_1 - 152;

 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
  if (VAR_3[VAR_4] >= VAR_0->s_bdev->bd_inode->i_size >>
    VAR_0->s_blocksize_bits)
   continue;
  if (FUNC_1(VAR_0, VAR_3[VAR_4], VAR_2))
   return VAR_3[VAR_4];
  if (VAR_3[VAR_4] < 256)
   continue;
  if (FUNC_1(VAR_0, VAR_3[VAR_4] - 256, VAR_2))
   return VAR_3[VAR_4];
 }


 if (FUNC_1(VAR_0, VAR_5->s_session + 512, VAR_2))
  return VAR_3[0];
 return 0;
}
