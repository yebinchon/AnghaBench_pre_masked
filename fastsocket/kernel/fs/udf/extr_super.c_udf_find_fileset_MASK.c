
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct udf_sb_info {int s_partitions; int s_partition; TYPE_1__* s_partmaps; } ;
struct super_block {int s_blocksize_bits; } ;
struct spaceBitmapDesc {int numOfBytes; } ;
struct kernel_lb_addr {int logicalBlockNum; int partitionReferenceNum; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_2__ {long s_partition_len; } ;




 struct udf_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (struct super_block*,struct buffer_head*,struct kernel_lb_addr*) ;
 struct buffer_head* FUNC_5 (struct super_block*,struct kernel_lb_addr*,int ,int*) ;

__attribute__((used)) static int FUNC_6(struct super_block *VAR_0,
       struct kernel_lb_addr *VAR_1,
       struct kernel_lb_addr *VAR_2)
{
 struct buffer_head *VAR_3 = ((void*)0);
 long VAR_4;
 uint16_t VAR_5;
 struct udf_sb_info *VAR_6;

 if (VAR_1->logicalBlockNum != 0xFFFFFFFF ||
     VAR_1->partitionReferenceNum != 0xFFFF) {
  VAR_3 = FUNC_5(VAR_0, VAR_1, 0, &VAR_5);

  if (!VAR_3) {
   return 1;
  } else if (VAR_5 != 129) {
   FUNC_1(VAR_3);
   return 1;
  }

 }

 VAR_6 = FUNC_0(VAR_0);
 if (!VAR_3) {

  struct kernel_lb_addr VAR_7;


  return 1;

  for (VAR_7.partitionReferenceNum = VAR_6->s_partitions - 1;
       (VAR_7.partitionReferenceNum != 0xFFFF &&
        VAR_1->logicalBlockNum == 0xFFFFFFFF &&
        VAR_1->partitionReferenceNum == 0xFFFF);
       VAR_7.partitionReferenceNum--) {
   VAR_4 = VAR_6->s_partmaps
     [VAR_7.partitionReferenceNum]
      .s_partition_len;
   VAR_7.logicalBlockNum = 0;

   do {
    VAR_3 = FUNC_5(VAR_0, &VAR_7, 0,
            &VAR_5);
    if (!VAR_3) {
     VAR_7.logicalBlockNum++;
     continue;
    }

    switch (VAR_5) {
    case 128:
    {
     struct spaceBitmapDesc *VAR_8;
     VAR_8 = (struct spaceBitmapDesc *)
        VAR_3->b_data;
     VAR_7.logicalBlockNum += 1 +
      ((FUNC_2(VAR_8->numOfBytes) +
        sizeof(struct spaceBitmapDesc)
        - 1) >> VAR_0->s_blocksize_bits);
     FUNC_1(VAR_3);
     break;
    }
    case 129:
     *VAR_1 = VAR_7;
     break;
    default:
     VAR_7.logicalBlockNum++;
     FUNC_1(VAR_3);
     VAR_3 = ((void*)0);
     break;
    }
   } while (VAR_7.logicalBlockNum < VAR_4 &&
     VAR_1->logicalBlockNum == 0xFFFFFFFF &&
     VAR_1->partitionReferenceNum == 0xFFFF);
  }
 }

 if ((VAR_1->logicalBlockNum != 0xFFFFFFFF ||
      VAR_1->partitionReferenceNum != 0xFFFF) && VAR_3) {
  FUNC_3("Fileset at block=%d, partition=%d\n",
     VAR_1->logicalBlockNum,
     VAR_1->partitionReferenceNum);

  VAR_6->s_partition = VAR_1->partitionReferenceNum;
  FUNC_4(VAR_0, VAR_3, VAR_2);
  FUNC_1(VAR_3);
  return 0;
 }
 return 1;
}
