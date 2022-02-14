
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct udf_sb_info {struct udf_part_map* s_partmaps; } ;
struct TYPE_20__ {struct udf_bitmap* s_bitmap; TYPE_8__* s_table; } ;
struct TYPE_15__ {struct udf_bitmap* s_bitmap; TYPE_3__* s_table; } ;
struct udf_part_map {int s_partition_flags; TYPE_9__ s_fspace; TYPE_4__ s_uspace; void* s_partition_len; void* s_partition_root; int s_partition_type; } ;
struct udf_bitmap {void* s_extPosition; void* s_extLength; } ;
struct super_block {int dummy; } ;
struct TYPE_11__ {scalar_t__ extPosition; scalar_t__ extLength; } ;
struct TYPE_18__ {scalar_t__ extPosition; scalar_t__ extLength; } ;
struct TYPE_17__ {scalar_t__ extLength; } ;
struct TYPE_16__ {scalar_t__ extPosition; scalar_t__ extLength; } ;
struct TYPE_13__ {scalar_t__ extPosition; scalar_t__ extLength; } ;
struct partitionHeaderDesc {TYPE_10__ freedSpaceBitmap; TYPE_7__ freedSpaceTable; TYPE_6__ partitionIntegrityTable; TYPE_5__ unallocSpaceBitmap; TYPE_2__ unallocSpaceTable; } ;
struct TYPE_12__ {int ident; } ;
struct partitionDesc {scalar_t__ accessType; scalar_t__ partitionContentsUse; TYPE_1__ partitionContents; scalar_t__ partitionStartingLocation; scalar_t__ partitionLength; } ;
struct kernel_lb_addr {void* logicalBlockNum; int partitionReferenceNum; } ;
struct TYPE_19__ {void* i_ino; } ;
struct TYPE_14__ {void* i_ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct udf_sb_info* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (int ) ;
 void* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,int,...) ;
 void* FUNC_5 (struct super_block*,struct kernel_lb_addr*) ;
 struct udf_bitmap* FUNC_6 (struct super_block*,int) ;

__attribute__((used)) static int FUNC_7(struct super_block *VAR_14,
  struct partitionDesc *VAR_15, int VAR_16)
{
 struct udf_part_map *VAR_17;
 struct udf_sb_info *VAR_18 = FUNC_0(VAR_14);
 struct partitionHeaderDesc *VAR_19;

 VAR_17 = &VAR_18->s_partmaps[VAR_16];

 VAR_17->s_partition_len = FUNC_2(VAR_15->partitionLength);
 VAR_17->s_partition_root = FUNC_2(VAR_15->partitionStartingLocation);

 if (VAR_15->accessType == FUNC_1(VAR_1))
  VAR_17->s_partition_flags |= VAR_9;
 if (VAR_15->accessType == FUNC_1(VAR_3))
  VAR_17->s_partition_flags |= VAR_13;
 if (VAR_15->accessType == FUNC_1(VAR_2))
  VAR_17->s_partition_flags |= VAR_10;
 if (VAR_15->accessType == FUNC_1(VAR_0))
  VAR_17->s_partition_flags |= VAR_8;

 FUNC_4("Partition (%d type %x) starts at physical %d, "
    "block length %d\n", VAR_16,
    VAR_17->s_partition_type, VAR_17->s_partition_root,
    VAR_17->s_partition_len);

 if (FUNC_3(VAR_15->partitionContents.ident, VAR_4) &&
     FUNC_3(VAR_15->partitionContents.ident, VAR_5))
  return 0;

 VAR_19 = (struct partitionHeaderDesc *)VAR_15->partitionContentsUse;
 if (VAR_19->unallocSpaceTable.extLength) {
  struct kernel_lb_addr VAR_20 = {
   .logicalBlockNum = FUNC_2(
    VAR_19->unallocSpaceTable.extPosition),
   .partitionReferenceNum = VAR_16,
  };

  VAR_17->s_uspace.s_table = FUNC_5(VAR_14, &VAR_20);
  if (!VAR_17->s_uspace.s_table) {
   FUNC_4("cannot load unallocSpaceTable (part %d)\n",
     VAR_16);
   return 1;
  }
  VAR_17->s_partition_flags |= VAR_12;
  FUNC_4("unallocSpaceTable (part %d) @ %ld\n",
    VAR_16, VAR_17->s_uspace.s_table->i_ino);
 }

 if (VAR_19->unallocSpaceBitmap.extLength) {
  struct udf_bitmap *VAR_21 = FUNC_6(VAR_14, VAR_16);
  if (!VAR_21)
   return 1;
  VAR_17->s_uspace.s_bitmap = VAR_21;
  VAR_21->s_extLength = FUNC_2(
    VAR_19->unallocSpaceBitmap.extLength);
  VAR_21->s_extPosition = FUNC_2(
    VAR_19->unallocSpaceBitmap.extPosition);
  VAR_17->s_partition_flags |= VAR_11;
  FUNC_4("unallocSpaceBitmap (part %d) @ %d\n", VAR_16,
      VAR_21->s_extPosition);
 }

 if (VAR_19->partitionIntegrityTable.extLength)
  FUNC_4("partitionIntegrityTable (part %d)\n", VAR_16);

 if (VAR_19->freedSpaceTable.extLength) {
  struct kernel_lb_addr VAR_22 = {
   .logicalBlockNum = FUNC_2(
    VAR_19->freedSpaceTable.extPosition),
   .partitionReferenceNum = VAR_16,
  };

  VAR_17->s_fspace.s_table = FUNC_5(VAR_14, &VAR_22);
  if (!VAR_17->s_fspace.s_table) {
   FUNC_4("cannot load freedSpaceTable (part %d)\n",
    VAR_16);
   return 1;
  }

  VAR_17->s_partition_flags |= VAR_7;
  FUNC_4("freedSpaceTable (part %d) @ %ld\n",
    VAR_16, VAR_17->s_fspace.s_table->i_ino);
 }

 if (VAR_19->freedSpaceBitmap.extLength) {
  struct udf_bitmap *VAR_23 = FUNC_6(VAR_14, VAR_16);
  if (!VAR_23)
   return 1;
  VAR_17->s_fspace.s_bitmap = VAR_23;
  VAR_23->s_extLength = FUNC_2(
    VAR_19->freedSpaceBitmap.extLength);
  VAR_23->s_extPosition = FUNC_2(
    VAR_19->freedSpaceBitmap.extPosition);
  VAR_17->s_partition_flags |= VAR_6;
  FUNC_4("freedSpaceBitmap (part %d) @ %d\n", VAR_16,
     VAR_23->s_extPosition);
 }
 return 0;
}
