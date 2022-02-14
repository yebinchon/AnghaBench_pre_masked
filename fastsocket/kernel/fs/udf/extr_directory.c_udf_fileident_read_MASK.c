
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef unsigned char uint32_t ;
struct TYPE_5__ {int * i_data; } ;
struct udf_inode_info {scalar_t__ i_alloc_type; scalar_t__ i_efe; TYPE_1__ i_ext; } ;
struct udf_fileident_bh {int soffset; int eoffset; struct buffer_head* ebh; struct buffer_head* sbh; } ;
struct kernel_lb_addr {int dummy; } ;
struct inode {TYPE_2__* i_sb; } ;
struct fileIdentDesc {int lengthFileIdent; int lengthOfImpUse; } ;
struct fileEntry {int dummy; } ;
struct extent_position {int offset; } ;
struct extendedFileEntry {int dummy; } ;
struct buffer_head {int * b_data; } ;
typedef unsigned char sector_t ;
typedef int loff_t ;
struct TYPE_6__ {int s_blocksize; unsigned char s_blocksize_bits; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct udf_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,struct buffer_head**) ;
 int FUNC_6 (int *,int *,int) ;
 struct fileIdentDesc* FUNC_7 (int *,int,int*) ;
 int FUNC_8 (TYPE_2__*,struct kernel_lb_addr*,unsigned char) ;
 int FUNC_9 (struct inode*,struct extent_position*,struct kernel_lb_addr*,unsigned char*,int) ;
 struct buffer_head* FUNC_10 (TYPE_2__*,int) ;
 void* FUNC_11 (TYPE_2__*,int) ;

struct fileIdentDesc *FUNC_12(struct inode *VAR_3, loff_t *VAR_4,
      struct udf_fileident_bh *VAR_5,
      struct fileIdentDesc *VAR_6,
      struct extent_position *VAR_7,
      struct kernel_lb_addr *VAR_8, uint32_t *VAR_9,
      sector_t *VAR_10)
{
 struct fileIdentDesc *VAR_11;
 int VAR_12, VAR_13, VAR_14;
 struct buffer_head *VAR_15, *VAR_16[16];
 struct udf_inode_info *VAR_17 = FUNC_0(VAR_3);

 VAR_5->soffset = VAR_5->eoffset;

 if (VAR_17->i_alloc_type == VAR_1) {
  VAR_11 = FUNC_7(VAR_17->i_ext.i_data -
           (VAR_17->i_efe ?
     sizeof(struct extendedFileEntry) :
     sizeof(struct fileEntry)),
           VAR_3->i_sb->s_blocksize,
           &(VAR_5->eoffset));
  if (!VAR_11)
   return ((void*)0);

  *VAR_4 += VAR_5->eoffset - VAR_5->soffset;

  FUNC_6((uint8_t *)VAR_6, (uint8_t *)VAR_11,
         sizeof(struct fileIdentDesc));

  return VAR_11;
 }

 if (VAR_5->eoffset == VAR_3->i_sb->s_blocksize) {
  int VAR_18 = VAR_7->offset;
  unsigned char VAR_19 = VAR_3->i_sb->s_blocksize_bits;

  if (FUNC_9(VAR_3, VAR_7, VAR_8, VAR_9, 1) !=
      (VAR_0 >> 30))
   return ((void*)0);

  VAR_14 = FUNC_8(VAR_3->i_sb, VAR_8, *VAR_10);

  (*VAR_10)++;

  if ((*VAR_10 << VAR_19) >= *VAR_9)
   *VAR_10 = 0;
  else
   VAR_7->offset = VAR_18;

  FUNC_1(VAR_5->sbh);
  VAR_5->sbh = VAR_5->ebh = FUNC_11(VAR_3->i_sb, VAR_14);
  if (!VAR_5->sbh)
   return ((void*)0);
  VAR_5->soffset = VAR_5->eoffset = 0;

  if (!(*VAR_10 & ((16 >> (VAR_19 - 9)) - 1))) {
   VAR_12 = 16 >> (VAR_19 - 9);
   if (VAR_12 + *VAR_10 > (*VAR_9 >> VAR_19))
    VAR_12 = (*VAR_9 >> VAR_19)-*VAR_10;
   for (VAR_13 = 0; VAR_12 > 0; VAR_12--) {
    VAR_14 = FUNC_8(VAR_3->i_sb, VAR_8,
         *VAR_10 + VAR_12);
    VAR_15 = FUNC_10(VAR_3->i_sb, VAR_14);
    if (VAR_15 && !FUNC_3(VAR_15) &&
      !FUNC_2(VAR_15))
     VAR_16[VAR_13++] = VAR_15;
    else
     FUNC_1(VAR_15);
   }
   if (VAR_13) {
    FUNC_5(VAR_2, VAR_13, VAR_16);
    for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
     FUNC_1(VAR_16[VAR_12]);
   }
  }
 } else if (VAR_5->sbh != VAR_5->ebh) {
  FUNC_1(VAR_5->sbh);
  VAR_5->sbh = VAR_5->ebh;
 }

 VAR_11 = FUNC_7(VAR_5->sbh->b_data, VAR_3->i_sb->s_blocksize,
          &(VAR_5->eoffset));

 if (!VAR_11)
  return ((void*)0);

 *VAR_4 += VAR_5->eoffset - VAR_5->soffset;

 if (VAR_5->eoffset <= VAR_3->i_sb->s_blocksize) {
  FUNC_6((uint8_t *)VAR_6, (uint8_t *)VAR_11,
         sizeof(struct fileIdentDesc));
 } else if (VAR_5->eoffset > VAR_3->i_sb->s_blocksize) {
  int VAR_20 = VAR_7->offset;

  if (FUNC_9(VAR_3, VAR_7, VAR_8, VAR_9, 1) !=
      (VAR_0 >> 30))
   return ((void*)0);

  VAR_14 = FUNC_8(VAR_3->i_sb, VAR_8, *VAR_10);

  (*VAR_10)++;

  if ((*VAR_10 << VAR_3->i_sb->s_blocksize_bits) >= *VAR_9)
   *VAR_10 = 0;
  else
   VAR_7->offset = VAR_20;

  VAR_5->soffset -= VAR_3->i_sb->s_blocksize;
  VAR_5->eoffset -= VAR_3->i_sb->s_blocksize;

  VAR_5->ebh = FUNC_11(VAR_3->i_sb, VAR_14);
  if (!VAR_5->ebh)
   return ((void*)0);

  if (sizeof(struct fileIdentDesc) > -VAR_5->soffset) {
   int VAR_21;

   FUNC_6((uint8_t *)VAR_6, (uint8_t *)VAR_11, -VAR_5->soffset);
   FUNC_6((uint8_t *)VAR_6 - VAR_5->soffset,
          VAR_5->ebh->b_data,
          sizeof(struct fileIdentDesc) + VAR_5->soffset);

   VAR_21 = (sizeof(struct fileIdentDesc) +
      VAR_6->lengthFileIdent +
      FUNC_4(VAR_6->lengthOfImpUse) + 3) & ~3;

   *VAR_4 += VAR_21 - (VAR_5->eoffset - VAR_5->soffset);
   VAR_5->eoffset = VAR_5->soffset + VAR_21;
  } else {
   FUNC_6((uint8_t *)VAR_6, (uint8_t *)VAR_11,
          sizeof(struct fileIdentDesc));
  }
 }
 return VAR_11;
}
