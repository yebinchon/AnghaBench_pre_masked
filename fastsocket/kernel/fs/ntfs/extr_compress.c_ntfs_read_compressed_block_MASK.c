
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
typedef unsigned long u64 ;
typedef unsigned long u32 ;
typedef scalar_t__ u16 ;
struct super_block {unsigned long s_blocksize; unsigned char s_blocksize_bits; } ;
struct page {unsigned long index; int * b_data; int b_end_io; struct address_space* mapping; } ;
struct buffer_head {unsigned long index; int * b_data; int b_end_io; struct address_space* mapping; } ;
struct address_space {int host; } ;
typedef unsigned long s64 ;
struct TYPE_14__ {unsigned long vcn; scalar_t__ length; } ;
typedef TYPE_4__ runlist_element ;
struct TYPE_15__ {unsigned long cluster_size_bits; unsigned char cluster_size; struct super_block* sb; } ;
typedef TYPE_5__ ntfs_volume ;
struct TYPE_13__ {int lock; TYPE_4__* rl; } ;
struct TYPE_11__ {unsigned long block_size; unsigned long block_size_bits; unsigned int block_clusters; } ;
struct TYPE_12__ {TYPE_1__ compressed; } ;
struct TYPE_16__ {scalar_t__ type; int name_len; unsigned long initialized_size; TYPE_3__ runlist; int mft_no; TYPE_2__ itype; int size_lock; TYPE_5__* vol; } ;
typedef TYPE_6__ ntfs_inode ;
typedef int loff_t ;
typedef unsigned long VCN ;
typedef unsigned char LCN ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 TYPE_6__* FUNC_2 (int ) ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int VAR_10 ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct address_space*) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int VAR_11 ;
 int FUNC_14 (struct page*) ;
 int FUNC_15 (struct page*) ;
 struct page* FUNC_16 (struct address_space*,unsigned long) ;
 int FUNC_17 (struct page*,int,unsigned long) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct page**) ;
 struct page** FUNC_20 (int,int ) ;
 int FUNC_21 (struct page*) ;
 int FUNC_22 (struct page*) ;
 scalar_t__ FUNC_23 (unsigned char) ;
 int FUNC_24 (int *,int *,unsigned int) ;
 int FUNC_25 (int *,int ,unsigned int) ;
 int VAR_12 ;
 int * VAR_13 ;
 int FUNC_26 (char*,...) ;
 int FUNC_27 (struct page**,unsigned int*,unsigned int*,int,unsigned int,unsigned int,unsigned char*,int *,unsigned long,int,unsigned long) ;
 int FUNC_28 (struct super_block*,char*,...) ;
 int FUNC_29 (TYPE_6__*,unsigned long) ;
 unsigned char FUNC_30 (TYPE_4__*,unsigned long) ;
 int FUNC_31 (struct super_block*,char*) ;
 int * FUNC_32 (struct page*) ;
 int FUNC_33 (struct page*) ;
 int FUNC_34 (struct page*) ;
 int FUNC_35 (int *,unsigned long) ;
 int FUNC_36 (int *,unsigned long) ;
 struct page* FUNC_37 (struct super_block*,int) ;
 int FUNC_38 () ;
 int FUNC_39 (int *) ;
 int FUNC_40 (int *) ;
 int FUNC_41 (int ,struct page*) ;
 int FUNC_42 (struct page*) ;
 scalar_t__ FUNC_43 (int) ;
 int FUNC_44 (struct page*) ;
 int FUNC_45 (struct page*) ;
 int FUNC_46 (int *) ;
 int FUNC_47 (struct page*) ;
 int FUNC_48 (struct page*,int ,int) ;

int FUNC_49(struct page *VAR_14)
{
 loff_t VAR_15;
 s64 VAR_16;
 struct address_space *VAR_17 = VAR_14->mapping;
 ntfs_inode *VAR_18 = FUNC_2(VAR_17->host);
 ntfs_volume *VAR_19 = VAR_18->vol;
 struct super_block *VAR_20 = VAR_19->sb;
 runlist_element *VAR_21;
 unsigned long VAR_22, VAR_23 = VAR_20->s_blocksize;
 unsigned char VAR_24 = VAR_20->s_blocksize_bits;
 u8 *VAR_25, *VAR_26, *VAR_27;
 struct buffer_head **VAR_28;
 unsigned long VAR_29, VAR_30 = VAR_14->index;
 u32 VAR_31 = VAR_18->itype.compressed.block_size;
 u64 VAR_32 = VAR_31 - 1UL;
 VCN VAR_33;
 LCN VAR_34;

 VCN VAR_35 = (((s64)VAR_30 << VAR_8) & ~VAR_32) >>
   VAR_19->cluster_size_bits;




 VCN VAR_36 = ((((s64)(VAR_30 + 1UL) << VAR_8) + VAR_31 - 1)
   & ~VAR_32) >> VAR_19->cluster_size_bits;

 unsigned int VAR_37 = (VAR_36 - VAR_35) << VAR_19->cluster_size_bits
   >> VAR_18->itype.compressed.block_size_bits;





 unsigned int VAR_38 = (VAR_36 - VAR_35) <<
   VAR_19->cluster_size_bits >> VAR_8;
 unsigned int VAR_39, VAR_40, VAR_41, VAR_42, VAR_43;
 unsigned int VAR_44, VAR_45;
 int VAR_46, VAR_47, VAR_48, VAR_49, VAR_50, VAR_51 = 0;
 struct page **VAR_52;
 unsigned char VAR_53 = 0;

 FUNC_26("Entering, page->index = 0x%lx, cb_size = 0x%x, nr_pages = "
   "%i.", VAR_30, VAR_31, VAR_38);




 FUNC_0(VAR_18->type != VAR_0);
 FUNC_0(VAR_18->name_len);

 VAR_52 = FUNC_20(VAR_38 * sizeof(struct page *), VAR_4);


 VAR_49 = VAR_31 / VAR_23 * sizeof(struct buffer_head *);
 VAR_28 = FUNC_20(VAR_49, VAR_4);

 if (FUNC_43(!VAR_52 || !VAR_28)) {
  FUNC_19(VAR_28);
  FUNC_19(VAR_52);
  FUNC_45(VAR_14);
  FUNC_28(VAR_19->sb, "Failed to allocate internal buffers.");
  return -VAR_2;
 }





 VAR_29 = VAR_35 << VAR_19->cluster_size_bits >> VAR_8;
 VAR_39 = VAR_30 - VAR_29;
 VAR_52[VAR_39] = VAR_14;




 FUNC_35(&VAR_18->size_lock, VAR_22);
 VAR_15 = FUNC_18(FUNC_7(VAR_18));
 VAR_16 = VAR_18->initialized_size;
 FUNC_36(&VAR_18->size_lock, VAR_22);
 VAR_40 = ((VAR_15 + VAR_9 - 1) >> VAR_8) -
   VAR_29;

 if (VAR_39 >= VAR_40) {
  FUNC_19(VAR_28);
  FUNC_19(VAR_52);
  FUNC_48(VAR_14, 0, VAR_9);
  FUNC_26("Compressed read outside i_size - truncated?");
  FUNC_6(VAR_14);
  FUNC_45(VAR_14);
  return 0;
 }
 if (VAR_38 < VAR_40)
  VAR_40 = VAR_38;
 for (VAR_43 = 0; VAR_43 < VAR_40; VAR_43++, VAR_29++) {
  if (VAR_43 != VAR_39)
   VAR_52[VAR_43] = FUNC_16(VAR_17, VAR_29);
  VAR_14 = VAR_52[VAR_43];
  if (VAR_14) {





   if (!FUNC_3(VAR_14) && (!FUNC_5(VAR_14) ||
     FUNC_4(VAR_14))) {
    FUNC_1(VAR_14);
    FUNC_21(VAR_14);
    continue;
   }
   FUNC_45(VAR_14);
   FUNC_33(VAR_14);
   VAR_52[VAR_43] = ((void*)0);
  }
 }





 VAR_41 = 0;
 VAR_42 = 0;
 VAR_44 = VAR_18->itype.compressed.block_clusters;
do_next_cb:
 VAR_37--;
 VAR_50 = 0;


 VAR_21 = ((void*)0);
 for (VAR_33 = VAR_35, VAR_35 += VAR_44; VAR_33 < VAR_35;
   VAR_33++) {
  bool VAR_54 = 0;

  if (!VAR_21) {
lock_retry_remap:
   FUNC_13(&VAR_18->runlist.lock);
   VAR_21 = VAR_18->runlist.rl;
  }
  if (FUNC_23(VAR_21 != ((void*)0))) {

   while (VAR_21->length && VAR_21[1].vcn <= VAR_33)
    VAR_21++;
   VAR_34 = FUNC_30(VAR_21, VAR_33);
  } else
   VAR_34 = VAR_6;
  FUNC_26("Reading vcn = 0x%llx, lcn = 0x%llx.",
    (unsigned long long)VAR_33,
    (unsigned long long)VAR_34);
  if (VAR_34 < 0) {




   if (VAR_34 == VAR_5)
    break;
   if (VAR_54 || VAR_34 != VAR_6)
    goto rl_err;
   VAR_54 = 1;




   FUNC_46(&VAR_18->runlist.lock);
   if (!FUNC_29(VAR_18, VAR_33))
    goto lock_retry_remap;
   goto map_rl_err;
  }
  VAR_46 = VAR_34 << VAR_19->cluster_size_bits >> VAR_24;

  VAR_47 = VAR_46 + (VAR_19->cluster_size >> VAR_24);
  do {
   FUNC_26("block = 0x%x.", VAR_46);
   if (FUNC_43(!(VAR_28[VAR_50] = FUNC_37(VAR_20, VAR_46))))
    goto getblk_err;
   VAR_50++;
  } while (++VAR_46 < VAR_47);
 }


 if (VAR_21)
  FUNC_46(&VAR_18->runlist.lock);


 for (VAR_43 = 0; VAR_43 < VAR_50; VAR_43++) {
  struct buffer_head *VAR_55 = VAR_28[VAR_43];

  if (!FUNC_42(VAR_55))
   continue;
  if (FUNC_43(FUNC_11(VAR_55))) {
   FUNC_44(VAR_55);
   continue;
  }
  FUNC_15(VAR_55);
  VAR_55->b_end_io = VAR_11;
  FUNC_41(VAR_10, VAR_55);
 }


 for (VAR_43 = 0; VAR_43 < VAR_50; VAR_43++) {
  struct buffer_head *VAR_56 = VAR_28[VAR_43];

  if (FUNC_11(VAR_56))
   continue;
  FUNC_47(VAR_56);
  FUNC_8();
  if (FUNC_43(!FUNC_11(VAR_56))) {
   FUNC_31(VAR_19->sb, "Buffer is unlocked but not "
     "uptodate! Unplugging the disk queue "
     "and rescheduling.");
   FUNC_15(VAR_56);
   FUNC_9(VAR_17);
   FUNC_38();
   FUNC_34(VAR_56);
   if (FUNC_43(!FUNC_11(VAR_56)))
    goto read_err;
   FUNC_31(VAR_19->sb, "Buffer is now uptodate. Good.");
  }
 }





 FUNC_39(&VAR_12);
 VAR_25 = VAR_13;

 FUNC_0(!VAR_25);

 VAR_26 = VAR_25;
 VAR_27 = VAR_25 + VAR_31;


 for (VAR_43 = 0; VAR_43 < VAR_50; VAR_43++) {
  FUNC_24(VAR_26, VAR_28[VAR_43]->b_data, VAR_23);
  VAR_26 += VAR_23;
 }


 if (VAR_26 + 2 <= VAR_25 + VAR_31)
  *(u16*)VAR_26 = 0;


 VAR_26 = VAR_25;


 FUNC_26("Successfully read the compression block.");


 VAR_48 = (VAR_41 << VAR_8) + VAR_42 + VAR_31;
 VAR_45 = VAR_48 & ~VAR_7;
 VAR_48 >>= VAR_8;


 if (VAR_48 > VAR_40)
  VAR_48 = VAR_40;

 if (VAR_33 == VAR_35 - VAR_44) {

  FUNC_26("Found sparse compression block.");

  FUNC_40(&VAR_12);
  if (VAR_45)
   VAR_48--;
  for (; VAR_41 < VAR_48; VAR_41++) {
   VAR_14 = VAR_52[VAR_41];
   if (VAR_14) {





    if (FUNC_23(!VAR_42))
     FUNC_12(FUNC_32(VAR_14));
    else
     FUNC_25(FUNC_32(VAR_14) + VAR_42, 0,
       VAR_9 -
       VAR_42);
    FUNC_14(VAR_14);
    FUNC_22(VAR_14);
    FUNC_6(VAR_14);
    FUNC_45(VAR_14);
    if (VAR_41 == VAR_39)
     VAR_53 = 1;
    else
     FUNC_33(VAR_14);
    VAR_52[VAR_41] = ((void*)0);
   }
   VAR_26 += VAR_9 - VAR_42;
   VAR_42 = 0;
   if (VAR_26 >= VAR_27)
    break;
  }

  if (VAR_45 && VAR_26 < VAR_27) {
   VAR_14 = VAR_52[VAR_41];
   if (VAR_14)
    FUNC_25(FUNC_32(VAR_14) + VAR_42, 0,
      VAR_45 - VAR_42);




   VAR_42 = VAR_45;
  }
 } else if (VAR_33 == VAR_35) {

  unsigned int VAR_57 = VAR_41;
  unsigned int VAR_58 = VAR_42;
  u8 *VAR_59 = VAR_26;

  FUNC_26("Found uncompressed compression block.");
  if (VAR_45)
   VAR_48--;

  for (; VAR_41 < VAR_48; VAR_41++) {
   VAR_14 = VAR_52[VAR_41];
   if (VAR_14)
    FUNC_24(FUNC_32(VAR_14) + VAR_42, VAR_26,
      VAR_9 - VAR_42);
   VAR_26 += VAR_9 - VAR_42;
   VAR_42 = 0;
   if (VAR_26 >= VAR_27)
    break;
  }

  if (VAR_45 && VAR_26 < VAR_27) {
   VAR_14 = VAR_52[VAR_41];
   if (VAR_14)
    FUNC_24(FUNC_32(VAR_14) + VAR_42, VAR_26,
      VAR_45 - VAR_42);
   VAR_26 += VAR_45 - VAR_42;
   VAR_42 = VAR_45;
  }

  FUNC_40(&VAR_12);

  for (; VAR_57 < VAR_48; VAR_57++) {
   VAR_14 = VAR_52[VAR_57];
   if (VAR_14) {




    FUNC_17(VAR_14, VAR_15,
      VAR_16);
    FUNC_14(VAR_14);
    FUNC_22(VAR_14);
    FUNC_6(VAR_14);
    FUNC_45(VAR_14);
    if (VAR_57 == VAR_39)
     VAR_53 = 1;
    else
     FUNC_33(VAR_14);
    VAR_52[VAR_57] = ((void*)0);
   }
   VAR_59 += VAR_9 - VAR_58;
   VAR_58 = 0;
   if (VAR_59 >= VAR_27)
    break;
  }
 } else {

  unsigned int VAR_60 = VAR_41;

  FUNC_26("Found compressed compression block.");
  VAR_51 = FUNC_27(VAR_52, &VAR_41, &VAR_42,
    VAR_48, VAR_45, VAR_39, &VAR_53,
    VAR_26, VAR_31 - (VAR_26 - VAR_25), VAR_15,
    VAR_16);




  if (VAR_51) {
   FUNC_28(VAR_19->sb, "ntfs_decompress() failed in inode "
     "0x%lx with error code %i. Skipping "
     "this compression block.",
     VAR_18->mft_no, -VAR_51);

   for (; VAR_60 < VAR_41; VAR_60++) {
    VAR_14 = VAR_52[VAR_60];
    if (VAR_14) {
     FUNC_14(VAR_14);
     FUNC_22(VAR_14);
     FUNC_45(VAR_14);
     if (VAR_60 != VAR_39)
      FUNC_33(VAR_14);
     VAR_52[VAR_60] = ((void*)0);
    }
   }
  }
 }


 for (VAR_43 = 0; VAR_43 < VAR_50; VAR_43++)
  FUNC_10(VAR_28[VAR_43]);


 if (VAR_37)
  goto do_next_cb;


 FUNC_19(VAR_28);


 for (VAR_41 = 0; VAR_41 < VAR_40; VAR_41++) {
  VAR_14 = VAR_52[VAR_41];
  if (VAR_14) {
   FUNC_28(VAR_19->sb, "Still have pages left! "
     "Terminating them with extreme "
     "prejudice.  Inode 0x%lx, page index "
     "0x%lx.", VAR_18->mft_no, VAR_14->index);
   FUNC_14(VAR_14);
   FUNC_22(VAR_14);
   FUNC_45(VAR_14);
   if (VAR_41 != VAR_39)
    FUNC_33(VAR_14);
   VAR_52[VAR_41] = ((void*)0);
  }
 }


 FUNC_19(VAR_52);


 if (FUNC_23(VAR_53))
  return 0;

 FUNC_26("Failed. Returning error code %s.", VAR_51 == -VAR_3 ?
   "EOVERFLOW" : (!VAR_51 ? "EIO" : "unkown error"));
 return VAR_51 < 0 ? VAR_51 : -VAR_1;

read_err:
 FUNC_28(VAR_19->sb, "IO error while reading compressed data.");

 for (VAR_43 = 0; VAR_43 < VAR_50; VAR_43++)
  FUNC_10(VAR_28[VAR_43]);
 goto err_out;

map_rl_err:
 FUNC_28(VAR_19->sb, "ntfs_map_runlist() failed. Cannot read "
   "compression block.");
 goto err_out;

rl_err:
 FUNC_46(&VAR_18->runlist.lock);
 FUNC_28(VAR_19->sb, "ntfs_rl_vcn_to_lcn() failed. Cannot read "
   "compression block.");
 goto err_out;

getblk_err:
 FUNC_46(&VAR_18->runlist.lock);
 FUNC_28(VAR_19->sb, "getblk() failed. Cannot read compression block.");

err_out:
 FUNC_19(VAR_28);
 for (VAR_43 = VAR_41; VAR_43 < VAR_40; VAR_43++) {
  VAR_14 = VAR_52[VAR_43];
  if (VAR_14) {
   FUNC_14(VAR_14);
   FUNC_22(VAR_14);
   FUNC_45(VAR_14);
   if (VAR_43 != VAR_39)
    FUNC_33(VAR_14);
  }
 }
 FUNC_19(VAR_52);
 return -VAR_1;
}
