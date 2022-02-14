
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t uint16_t ;
struct udf_virtual_data {int s_num_entries; int s_start_offset; } ;
struct udf_sb_info {int s_vat_inode; struct udf_part_map* s_partmaps; } ;
struct TYPE_4__ {struct udf_virtual_data s_virtual; } ;
struct udf_part_map {TYPE_1__ s_type_specific; } ;
struct TYPE_6__ {size_t partitionReferenceNum; } ;
struct TYPE_5__ {scalar_t__ i_data; } ;
struct udf_inode_info {scalar_t__ i_alloc_type; TYPE_3__ i_location; TYPE_2__ i_ext; } ;
struct super_block {int s_blocksize; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int __le32 ;


 scalar_t__ VAR_0 ;
 struct udf_inode_info* FUNC_0 (int ) ;
 struct udf_sb_info* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ) ;
 struct buffer_head* FUNC_4 (struct super_block*,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct super_block*,int,size_t,int) ;

uint32_t FUNC_8(struct super_block *VAR_1, uint32_t VAR_2,
          uint16_t VAR_3, uint32_t VAR_4)
{
 struct buffer_head *VAR_5 = ((void*)0);
 uint32_t VAR_6;
 uint32_t VAR_7;
 uint32_t VAR_8;
 struct udf_sb_info *VAR_9 = FUNC_1(VAR_1);
 struct udf_part_map *VAR_10;
 struct udf_virtual_data *VAR_11;
 struct udf_inode_info *VAR_12 = FUNC_0(VAR_9->s_vat_inode);

 VAR_10 = &VAR_9->s_partmaps[VAR_3];
 VAR_11 = &VAR_10->s_type_specific.s_virtual;

 if (VAR_2 > VAR_11->s_num_entries) {
  FUNC_6("Trying to access block beyond end of VAT "
     "(%d max %d)\n", VAR_2, VAR_11->s_num_entries);
  return 0xFFFFFFFF;
 }

 if (VAR_12->i_alloc_type == VAR_0) {
  VAR_8 = FUNC_3(((__le32 *)(VAR_12->i_ext.i_data +
   VAR_11->s_start_offset))[VAR_2]);
  goto translate;
 }
 VAR_7 = (VAR_1->s_blocksize - VAR_11->s_start_offset) / sizeof(uint32_t);
 if (VAR_2 >= VAR_7) {
  VAR_2 -= VAR_7;
  VAR_6 = 1 + (VAR_2 / (VAR_1->s_blocksize / sizeof(uint32_t)));
  VAR_7 = VAR_2 % (VAR_1->s_blocksize / sizeof(uint32_t));
 } else {
  VAR_6 = 0;
  VAR_7 = VAR_11->s_start_offset / sizeof(uint32_t) + VAR_2;
 }

 VAR_8 = FUNC_5(VAR_9->s_vat_inode, VAR_6);

 VAR_5 = FUNC_4(VAR_1, VAR_8);
 if (!VAR_5) {
  FUNC_6("get_pblock(UDF_VIRTUAL_MAP:%p,%d,%d) VAT: %d[%d]\n",
     VAR_1, VAR_2, VAR_3, VAR_8, VAR_7);
  return 0xFFFFFFFF;
 }

 VAR_8 = FUNC_3(((__le32 *)VAR_5->b_data)[VAR_7]);

 FUNC_2(VAR_5);

translate:
 if (VAR_12->i_location.partitionReferenceNum == VAR_3) {
  FUNC_6("recursive call to udf_get_pblock!\n");
  return 0xFFFFFFFF;
 }

 return FUNC_7(VAR_1, VAR_8,
         VAR_12->i_location.partitionReferenceNum,
         VAR_4);
}
