
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void u8 ;
typedef unsigned int u32 ;
struct page {scalar_t__ index; TYPE_1__* mapping; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_size; int b_state; struct buffer_head* b_this_page; scalar_t__ b_blocknr; struct page* b_page; } ;
typedef scalar_t__ s64 ;
struct TYPE_10__ {unsigned int block_size; } ;
struct TYPE_11__ {TYPE_3__ index; } ;
struct TYPE_12__ {scalar_t__ initialized_size; TYPE_4__ itype; TYPE_2__* vol; int size_lock; } ;
typedef TYPE_5__ ntfs_inode ;
typedef scalar_t__ loff_t ;
struct TYPE_9__ {int sb; } ;
struct TYPE_8__ {struct inode* host; } ;
typedef int NTFS_RECORD ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_5__*) ;
 TYPE_5__* FUNC_3 (struct inode*) ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (struct buffer_head*) ;
 int FUNC_12 (struct buffer_head*) ;
 int FUNC_13 (struct buffer_head*) ;
 int FUNC_14 (struct buffer_head*) ;
 int FUNC_15 (struct page*) ;
 scalar_t__ FUNC_16 (struct inode*) ;
 void* FUNC_17 (struct page*,int ) ;
 int FUNC_18 (void*,int ) ;
 scalar_t__ FUNC_19 (int) ;
 int FUNC_20 (unsigned long) ;
 int FUNC_21 (unsigned long) ;
 int FUNC_22 (void*,int ,scalar_t__) ;
 int FUNC_23 (int ,char*,unsigned long long) ;
 struct buffer_head* FUNC_24 (struct page*) ;
 int FUNC_25 (int *,unsigned int) ;
 int FUNC_26 (int *,unsigned long) ;
 int FUNC_27 (int *,unsigned long) ;
 int FUNC_28 (struct buffer_head*) ;
 scalar_t__ FUNC_29 (int) ;
 int FUNC_30 (struct buffer_head*) ;
 int FUNC_31 (struct page*) ;

__attribute__((used)) static void FUNC_32(struct buffer_head *VAR_4, int VAR_5)
{
 unsigned long VAR_6;
 struct buffer_head *VAR_7, *VAR_8;
 struct page *VAR_9;
 struct inode *VAR_10;
 ntfs_inode *VAR_11;
 int VAR_12 = 1;

 VAR_9 = VAR_4->b_page;
 VAR_10 = VAR_9->mapping->host;
 VAR_11 = FUNC_3(VAR_10);

 if (FUNC_19(VAR_5)) {
  loff_t VAR_13;
  s64 VAR_14, VAR_15;

  FUNC_28(VAR_4);

  VAR_14 = ((s64)VAR_9->index << VAR_2) +
    FUNC_7(VAR_4);
  FUNC_26(&VAR_11->size_lock, VAR_6);
  VAR_15 = VAR_11->initialized_size;
  VAR_13 = FUNC_16(VAR_10);
  FUNC_27(&VAR_11->size_lock, VAR_6);
  if (FUNC_29(VAR_15 > VAR_13)) {

   VAR_15 = VAR_13;
  }

  if (FUNC_29(VAR_14 + VAR_4->b_size > VAR_15)) {
   int VAR_16;
   void *VAR_17;

   VAR_16 = 0;
   if (VAR_14 < VAR_15)
    VAR_16 = VAR_15 - VAR_14;
   FUNC_21(VAR_6);
   VAR_17 = FUNC_17(VAR_9, VAR_1);
   FUNC_22(VAR_17 + FUNC_7(VAR_4) + VAR_16, 0,
     VAR_4->b_size - VAR_16);
   FUNC_15(VAR_9);
   FUNC_18(VAR_17, VAR_1);
   FUNC_20(VAR_6);
  }
 } else {
  FUNC_14(VAR_4);
  FUNC_5(VAR_9);
  FUNC_23(VAR_11->vol->sb, "Buffer I/O error, logical block "
    "0x%llx.", (unsigned long long)VAR_4->b_blocknr);
 }
 VAR_7 = FUNC_24(VAR_9);
 FUNC_21(VAR_6);
 FUNC_8(VAR_0, &VAR_7->b_state);
 FUNC_13(VAR_4);
 FUNC_30(VAR_4);
 VAR_8 = VAR_4;
 do {
  if (!FUNC_12(VAR_8))
   VAR_12 = 0;
  if (FUNC_10(VAR_8)) {
   if (FUNC_19(FUNC_11(VAR_8)))
    goto still_busy;

   FUNC_0();
  }
  VAR_8 = VAR_8->b_this_page;
 } while (VAR_8 != VAR_4);
 FUNC_9(VAR_0, &VAR_7->b_state);
 FUNC_20(VAR_6);
 if (!FUNC_2(VAR_11)) {
  if (FUNC_19(VAR_12 && !FUNC_4(VAR_9)))
   FUNC_6(VAR_9);
 } else {
  u8 *VAR_18;
  unsigned int VAR_19, VAR_20;
  u32 VAR_21;

  VAR_21 = VAR_11->itype.index.block_size;
  VAR_20 = VAR_3 / VAR_21;

  FUNC_1(!VAR_20);
  FUNC_21(VAR_6);
  VAR_18 = FUNC_17(VAR_9, VAR_1);
  for (VAR_19 = 0; VAR_19 < VAR_20; VAR_19++)
   FUNC_25((NTFS_RECORD*)(VAR_18 +
     VAR_19 * VAR_21), VAR_21);
  FUNC_18(VAR_18, VAR_1);
  FUNC_20(VAR_6);
  FUNC_15(VAR_9);
  if (FUNC_19(VAR_12 && !FUNC_4(VAR_9)))
   FUNC_6(VAR_9);
 }
 FUNC_31(VAR_9);
 return;
still_busy:
 FUNC_9(VAR_0, &VAR_7->b_state);
 FUNC_20(VAR_6);
 return;
}
