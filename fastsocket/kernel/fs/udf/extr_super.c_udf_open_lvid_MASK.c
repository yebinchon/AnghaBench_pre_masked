
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct udf_sb_info {scalar_t__ s_lvid_dirty; struct buffer_head* s_lvid_bh; } ;
struct tag {int dummy; } ;
struct super_block {int dummy; } ;
struct TYPE_3__ {int * identSuffix; } ;
struct logicalVolIntegrityDescImpUse {TYPE_1__ impIdent; } ;
struct TYPE_4__ {int tagChecksum; int descCRCLength; int descCRC; } ;
struct logicalVolIntegrityDesc {TYPE_2__ descTag; int integrityType; int recordingDateAndTime; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct udf_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct buffer_head*) ;
 struct logicalVolIntegrityDescImpUse* FUNC_6 (struct udf_sb_info*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static void FUNC_9(struct super_block *VAR_4)
{
 struct udf_sb_info *VAR_5 = FUNC_0(VAR_4);
 struct buffer_head *VAR_6 = VAR_5->s_lvid_bh;
 struct logicalVolIntegrityDesc *VAR_7;
 struct logicalVolIntegrityDescImpUse *VAR_8;

 if (!VAR_6)
  return;
 VAR_7 = (struct logicalVolIntegrityDesc *)VAR_6->b_data;
 VAR_8 = FUNC_6(VAR_5);

 VAR_8->impIdent.identSuffix[0] = VAR_2;
 VAR_8->impIdent.identSuffix[1] = VAR_3;
 FUNC_8(&VAR_7->recordingDateAndTime,
    VAR_0);
 VAR_7->integrityType = FUNC_2(VAR_1);

 VAR_7->descTag.descCRC = FUNC_1(
  FUNC_3(0, (char *)VAR_7 + sizeof(struct tag),
   FUNC_4(VAR_7->descTag.descCRCLength)));

 VAR_7->descTag.tagChecksum = FUNC_7(&VAR_7->descTag);
 FUNC_5(VAR_6);
 VAR_5->s_lvid_dirty = 0;
}
