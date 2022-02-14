
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct udf_fileident_bh {int eoffset; int soffset; TYPE_2__* sbh; TYPE_2__* ebh; } ;
struct tag {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {int tagChecksum; void* descCRCLength; void* descCRC; } ;
struct fileIdentDesc {int lengthFileIdent; TYPE_1__ descTag; scalar_t__ impUse; scalar_t__ padding; scalar_t__ fileIdent; int lengthOfImpUse; } ;
struct TYPE_6__ {scalar_t__ i_alloc_type; } ;
struct TYPE_5__ {int* b_data; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int,int*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int*,int*,int) ;
 int FUNC_7 (int*,int,int) ;
 int FUNC_8 (TYPE_1__*) ;

int FUNC_9(struct inode *VAR_1, struct fileIdentDesc *VAR_2,
   struct fileIdentDesc *VAR_3, struct udf_fileident_bh *VAR_4,
   uint8_t *VAR_5, uint8_t *VAR_6)
{
 uint16_t VAR_7 = VAR_4->eoffset - VAR_4->soffset - sizeof(struct tag);
 uint16_t VAR_8;
 int VAR_9;
 uint16_t VAR_10 = FUNC_3(VAR_2->lengthOfImpUse);
 uint8_t VAR_11 = VAR_2->lengthFileIdent;
 int VAR_12 = VAR_4->eoffset - VAR_4->soffset - VAR_10 - VAR_11 -
  sizeof(struct fileIdentDesc);
 int VAR_13 = 0;

 if (FUNC_0(VAR_1)->i_alloc_type == VAR_0)
  VAR_13 = 1;

 VAR_9 = VAR_4->soffset + sizeof(struct fileIdentDesc);

 if (VAR_5) {
  if (VAR_13 || (VAR_9 + VAR_10 < 0)) {
   FUNC_6((uint8_t *)VAR_3->impUse, VAR_5, VAR_10);
  } else if (VAR_9 >= 0) {
   FUNC_6(VAR_4->ebh->b_data + VAR_9, VAR_5, VAR_10);
  } else {
   FUNC_6((uint8_t *)VAR_3->impUse, VAR_5, -VAR_9);
   FUNC_6(VAR_4->ebh->b_data, VAR_5 - VAR_9,
    VAR_10 + VAR_9);
  }
 }

 VAR_9 += VAR_10;

 if (VAR_6) {
  if (VAR_13 || (VAR_9 + VAR_11 < 0)) {
   FUNC_6((uint8_t *)VAR_3->fileIdent + VAR_10, VAR_6, VAR_11);
  } else if (VAR_9 >= 0) {
   FUNC_6(VAR_4->ebh->b_data + VAR_9, VAR_6, VAR_11);
  } else {
   FUNC_6((uint8_t *)VAR_3->fileIdent + VAR_10, VAR_6,
    -VAR_9);
   FUNC_6(VAR_4->ebh->b_data, VAR_6 - VAR_9,
    VAR_11 + VAR_9);
  }
 }

 VAR_9 += VAR_11;

 if (VAR_13 || (VAR_9 + VAR_12 < 0)) {
  FUNC_7((uint8_t *)VAR_3->padding + VAR_10 + VAR_11, 0x00, VAR_12);
 } else if (VAR_9 >= 0) {
  FUNC_7(VAR_4->ebh->b_data + VAR_9, 0x00, VAR_12);
 } else {
  FUNC_7((uint8_t *)VAR_3->padding + VAR_10 + VAR_11, 0x00, -VAR_9);
  FUNC_7(VAR_4->ebh->b_data, 0x00, VAR_12 + VAR_9);
 }

 VAR_8 = FUNC_2(0, (uint8_t *)VAR_2 + sizeof(struct tag),
        sizeof(struct fileIdentDesc) - sizeof(struct tag));

 if (VAR_4->sbh == VAR_4->ebh) {
  VAR_8 = FUNC_2(VAR_8, (uint8_t *)VAR_3->impUse,
         VAR_7 + sizeof(struct tag) -
         sizeof(struct fileIdentDesc));
 } else if (sizeof(struct fileIdentDesc) >= -VAR_4->soffset) {
  VAR_8 = FUNC_2(VAR_8, VAR_4->ebh->b_data +
     sizeof(struct fileIdentDesc) +
     VAR_4->soffset,
         VAR_7 + sizeof(struct tag) -
     sizeof(struct fileIdentDesc));
 } else {
  VAR_8 = FUNC_2(VAR_8, (uint8_t *)VAR_3->impUse,
         -VAR_4->soffset - sizeof(struct fileIdentDesc));
  VAR_8 = FUNC_2(VAR_8, VAR_4->ebh->b_data, VAR_4->eoffset);
 }

 VAR_2->descTag.descCRC = FUNC_1(VAR_8);
 VAR_2->descTag.descCRCLength = FUNC_1(VAR_7);
 VAR_2->descTag.tagChecksum = FUNC_8(&VAR_2->descTag);

 if (VAR_13 || (sizeof(struct fileIdentDesc) <= -VAR_4->soffset)) {
  FUNC_6((uint8_t *)VAR_3, (uint8_t *)VAR_2,
   sizeof(struct fileIdentDesc));
 } else {
  FUNC_6((uint8_t *)VAR_3, (uint8_t *)VAR_2, -VAR_4->soffset);
  FUNC_6(VAR_4->ebh->b_data, (uint8_t *)VAR_2 - VAR_4->soffset,
         sizeof(struct fileIdentDesc) + VAR_4->soffset);
 }

 if (VAR_13) {
  FUNC_5(VAR_1);
 } else {
  if (VAR_4->sbh != VAR_4->ebh)
   FUNC_4(VAR_4->ebh, VAR_1);
  FUNC_4(VAR_4->sbh, VAR_1);
 }
 return 0;
}
