
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct udf_sb_info {struct buffer_head* s_lvid_bh; } ;
struct super_block {scalar_t__ s_blocksize; } ;
struct TYPE_2__ {scalar_t__ extLength; } ;
struct logicalVolIntegrityDesc {TYPE_1__ nextIntegrityExt; } ;
struct kernel_extent_ad {scalar_t__ extLength; int extLocation; } ;
struct buffer_head {scalar_t__ b_data; } ;


 scalar_t__ VAR_0 ;
 struct udf_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct buffer_head*) ;
 struct kernel_extent_ad FUNC_2 (TYPE_1__) ;
 struct buffer_head* FUNC_3 (struct super_block*,int ,int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_4(struct super_block *VAR_1, struct kernel_extent_ad VAR_2)
{
 struct buffer_head *VAR_3 = ((void*)0);
 uint16_t VAR_4;
 struct udf_sb_info *VAR_5 = FUNC_0(VAR_1);
 struct logicalVolIntegrityDesc *VAR_6;

 while (VAR_2.extLength > 0 &&
        (VAR_3 = FUNC_3(VAR_1, VAR_2.extLocation,
         VAR_2.extLocation, &VAR_4)) &&
        VAR_4 == VAR_0) {
  VAR_5->s_lvid_bh = VAR_3;
  VAR_6 = (struct logicalVolIntegrityDesc *)VAR_3->b_data;

  if (VAR_6->nextIntegrityExt.extLength)
   FUNC_4(VAR_1,
    FUNC_2(VAR_6->nextIntegrityExt));

  if (VAR_5->s_lvid_bh != VAR_3)
   FUNC_1(VAR_3);
  VAR_2.extLength -= VAR_1->s_blocksize;
  VAR_2.extLocation++;
 }
 if (VAR_5->s_lvid_bh != VAR_3)
  FUNC_1(VAR_3);
}
