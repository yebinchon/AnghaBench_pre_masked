
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct udf_sb_info {scalar_t__ s_udfrev; scalar_t__ s_lvid_dirty; struct buffer_head* s_lvid_bh; } ;
struct tag {int dummy; } ;
struct super_block {int dummy; } ;
struct TYPE_3__ {int * identSuffix; } ;
struct logicalVolIntegrityDescImpUse {void* minUDFWriteRev; void* minUDFReadRev; void* maxUDFWriteRev; TYPE_1__ impIdent; } ;
struct TYPE_4__ {int tagChecksum; void* descCRCLength; void* descCRC; } ;
struct logicalVolIntegrityDesc {TYPE_2__ descTag; int integrityType; int recordingDateAndTime; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct udf_sb_info* FUNC_0 (struct super_block*) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (void*) ;
 int FUNC_5 (struct buffer_head*) ;
 struct logicalVolIntegrityDescImpUse* FUNC_6 (struct udf_sb_info*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static void FUNC_9(struct super_block *VAR_5)
{
 struct udf_sb_info *VAR_6 = FUNC_0(VAR_5);
 struct buffer_head *VAR_7 = VAR_6->s_lvid_bh;
 struct logicalVolIntegrityDesc *VAR_8;
 struct logicalVolIntegrityDescImpUse *VAR_9;

 if (!VAR_7)
  return;

 VAR_8 = (struct logicalVolIntegrityDesc *)VAR_7->b_data;
 VAR_9 = FUNC_6(VAR_6);
 VAR_9->impIdent.identSuffix[0] = VAR_3;
 VAR_9->impIdent.identSuffix[1] = VAR_4;
 FUNC_8(&VAR_8->recordingDateAndTime, VAR_0);
 if (VAR_2 > FUNC_4(VAR_9->maxUDFWriteRev))
  VAR_9->maxUDFWriteRev = FUNC_1(VAR_2);
 if (VAR_6->s_udfrev > FUNC_4(VAR_9->minUDFReadRev))
  VAR_9->minUDFReadRev = FUNC_1(VAR_6->s_udfrev);
 if (VAR_6->s_udfrev > FUNC_4(VAR_9->minUDFWriteRev))
  VAR_9->minUDFWriteRev = FUNC_1(VAR_6->s_udfrev);
 VAR_8->integrityType = FUNC_2(VAR_1);

 VAR_8->descTag.descCRC = FUNC_1(
   FUNC_3(0, (char *)VAR_8 + sizeof(struct tag),
    FUNC_4(VAR_8->descTag.descCRCLength)));

 VAR_8->descTag.tagChecksum = FUNC_7(&VAR_8->descTag);
 FUNC_5(VAR_7);
 VAR_6->s_lvid_dirty = 0;
}
