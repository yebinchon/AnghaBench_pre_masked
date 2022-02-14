
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct page {int index; TYPE_1__* mapping; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_20__ {TYPE_6__* base_ntfs_ino; } ;
struct TYPE_24__ {scalar_t__ type; int name_len; int initialized_size; int size_lock; int name; TYPE_2__ ext; } ;
typedef TYPE_6__ ntfs_inode ;
struct TYPE_25__ {TYPE_5__* attr; } ;
typedef TYPE_7__ ntfs_attr_search_ctx ;
typedef int loff_t ;
struct TYPE_21__ {int value_offset; int value_length; } ;
struct TYPE_22__ {TYPE_3__ resident; } ;
struct TYPE_23__ {TYPE_4__ data; } ;
struct TYPE_19__ {struct inode* host; } ;
typedef int MFT_RECORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_6__*) ;
 scalar_t__ FUNC_3 (TYPE_6__*) ;
 scalar_t__ FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*) ;
 TYPE_6__* FUNC_6 (struct inode*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct page*) ;
 scalar_t__ FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct inode*) ;
 int * FUNC_13 (struct page*,int ) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int * FUNC_17 (TYPE_6__*) ;
 int FUNC_18 (int *,int *,int) ;
 int FUNC_19 (int *,int ,int) ;
 TYPE_7__* FUNC_20 (TYPE_6__*,int *) ;
 int FUNC_21 (scalar_t__,int ,int,int ,int ,int *,int ,TYPE_7__*) ;
 int FUNC_22 (TYPE_7__*) ;
 int FUNC_23 (char*) ;
 int FUNC_24 (struct page*) ;
 int FUNC_25 (struct page*) ;
 int FUNC_26 (int *,unsigned long) ;
 int FUNC_27 (int *,unsigned long) ;
 scalar_t__ FUNC_28 (int) ;
 int FUNC_29 (struct page*) ;
 int FUNC_30 (TYPE_6__*) ;
 int FUNC_31 (struct page*,int ,int) ;

__attribute__((used)) static int FUNC_32(struct file *VAR_8, struct page *VAR_9)
{
 loff_t VAR_10;
 struct inode *VAR_11;
 ntfs_inode *VAR_12, *VAR_13;
 u8 *VAR_14;
 ntfs_attr_search_ctx *VAR_15;
 MFT_RECORD *VAR_16;
 unsigned long VAR_17;
 u32 VAR_18;
 int VAR_19 = 0;

retry_readpage:
 FUNC_0(!FUNC_8(VAR_9));
 VAR_11 = VAR_9->mapping->host;
 VAR_10 = FUNC_12(VAR_11);

 if (FUNC_28(VAR_9->index >= (VAR_10 + VAR_7 - 1) >>
   VAR_6)) {
  FUNC_31(VAR_9, 0, VAR_7);
  FUNC_23("Read outside i_size - truncated?");
  goto done;
 }




 if (FUNC_9(VAR_9)) {
  FUNC_29(VAR_9);
  return 0;
 }
 VAR_12 = FUNC_6(VAR_11);
 if (VAR_12->type != VAR_1) {

  if (FUNC_4(VAR_12)) {
   FUNC_0(VAR_12->type != VAR_0);
   VAR_19 = -VAR_3;
   goto err_out;
  }

  if (FUNC_5(VAR_12) && FUNC_3(VAR_12)) {
   FUNC_0(VAR_12->type != VAR_0);
   FUNC_0(VAR_12->name_len);
   return FUNC_25(VAR_9);
  }
 }

 if (FUNC_5(VAR_12)) {

  return FUNC_24(VAR_9);
 }
 if (FUNC_28(VAR_9->index > 0)) {
  FUNC_31(VAR_9, 0, VAR_7);
  goto done;
 }
 if (!FUNC_2(VAR_12))
  VAR_13 = VAR_12;
 else
  VAR_13 = VAR_12->ext.base_ntfs_ino;

 VAR_16 = FUNC_17(VAR_13);
 if (FUNC_1(VAR_16)) {
  VAR_19 = FUNC_7(VAR_16);
  goto err_out;
 }




 if (FUNC_28(FUNC_5(VAR_12))) {
  FUNC_30(VAR_13);
  goto retry_readpage;
 }
 VAR_15 = FUNC_20(VAR_13, VAR_16);
 if (FUNC_28(!VAR_15)) {
  VAR_19 = -VAR_4;
  goto unm_err_out;
 }
 VAR_19 = FUNC_21(VAR_12->type, VAR_12->name, VAR_12->name_len,
   VAR_2, 0, ((void*)0), 0, VAR_15);
 if (FUNC_28(VAR_19))
  goto put_unm_err_out;
 VAR_18 = FUNC_16(VAR_15->attr->data.resident.value_length);
 FUNC_26(&VAR_12->size_lock, VAR_17);
 if (FUNC_28(VAR_18 > VAR_12->initialized_size))
  VAR_18 = VAR_12->initialized_size;
 VAR_10 = FUNC_12(VAR_11);
 FUNC_27(&VAR_12->size_lock, VAR_17);
 if (FUNC_28(VAR_18 > VAR_10)) {

  VAR_18 = VAR_10;
 }
 VAR_14 = FUNC_13(VAR_9, VAR_5);

 FUNC_18(VAR_14, (u8*)VAR_15->attr +
   FUNC_15(VAR_15->attr->data.resident.value_offset),
   VAR_18);

 FUNC_19(VAR_14 + VAR_18, 0, VAR_7 - VAR_18);
 FUNC_11(VAR_9);
 FUNC_14(VAR_14, VAR_5);
put_unm_err_out:
 FUNC_22(VAR_15);
unm_err_out:
 FUNC_30(VAR_13);
done:
 FUNC_10(VAR_9);
err_out:
 FUNC_29(VAR_9);
 return VAR_19;
}
