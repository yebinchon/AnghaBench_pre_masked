
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct udf_sb_info {int dummy; } ;
struct super_block {long s_blocksize_bits; } ;
struct kernel_lb_addr {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_4__ {int extLength; int extLocation; } ;
struct TYPE_3__ {int extLength; int extLocation; } ;
struct anchorVolDescPtr {TYPE_2__ reserveVolDescSeqExt; TYPE_1__ mainVolDescSeqExt; } ;


 struct udf_sb_info* FUNC_0 (struct super_block*) ;
 long FUNC_1 (int ) ;
 int FUNC_2 (struct super_block*,long,long,struct kernel_lb_addr*) ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_0, struct buffer_head *VAR_1,
        struct kernel_lb_addr *VAR_2)
{
 struct anchorVolDescPtr *VAR_3;
 long VAR_4, VAR_5, VAR_6, VAR_7;
 struct udf_sb_info *VAR_8;

 VAR_8 = FUNC_0(VAR_0);
 VAR_3 = (struct anchorVolDescPtr *)VAR_1->b_data;


 VAR_4 = FUNC_1(VAR_3->mainVolDescSeqExt.extLocation);
 VAR_5 = FUNC_1(VAR_3->mainVolDescSeqExt.extLength);
 VAR_5 = VAR_5 >> VAR_0->s_blocksize_bits;
 VAR_5 += VAR_4;


 VAR_6 = FUNC_1(VAR_3->reserveVolDescSeqExt.extLocation);
 VAR_7 = FUNC_1(VAR_3->reserveVolDescSeqExt.extLength);
 VAR_7 = VAR_7 >> VAR_0->s_blocksize_bits;
 VAR_7 += VAR_6;



 if (!FUNC_2(VAR_0, VAR_4, VAR_5, VAR_2))
  return 1;
 return !FUNC_2(VAR_0, VAR_6, VAR_7, VAR_2);
}
