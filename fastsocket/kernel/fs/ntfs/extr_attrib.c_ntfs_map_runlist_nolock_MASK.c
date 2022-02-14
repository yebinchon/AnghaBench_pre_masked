
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_10__ ;


typedef int u8 ;
struct page {int dummy; } ;
typedef int runlist_element ;
struct TYPE_27__ {int * rl; } ;
struct TYPE_24__ {TYPE_5__* base_ntfs_ino; } ;
struct TYPE_28__ {int allocated_size; scalar_t__ type; scalar_t__ name_len; TYPE_4__ runlist; TYPE_10__* vol; int name; struct page* page; int size_lock; TYPE_1__ ext; } ;
typedef TYPE_5__ ntfs_inode ;
struct TYPE_29__ {int * mrec; TYPE_7__* attr; TYPE_5__* base_ntfs_ino; TYPE_5__* ntfs_ino; int * base_mrec; int * member_0; } ;
typedef TYPE_6__ ntfs_attr_search_ctx ;
typedef int VCN ;
struct TYPE_25__ {int highest_vcn; int lowest_vcn; } ;
struct TYPE_26__ {TYPE_2__ non_resident; } ;
struct TYPE_30__ {scalar_t__ type; scalar_t__ name_length; TYPE_3__ data; int non_resident; int name_offset; } ;
struct TYPE_23__ {int cluster_size_bits; } ;
typedef int MFT_RECORD ;
typedef TYPE_7__ ATTR_RECORD ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_5__*) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_6__*) ;
 void* FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (int *,int ,scalar_t__) ;
 TYPE_6__* FUNC_9 (TYPE_5__*,int *) ;
 int FUNC_10 (scalar_t__,int ,scalar_t__,int ,int,int *,int ,TYPE_6__*) ;
 int FUNC_11 (TYPE_6__*) ;
 int FUNC_12 (TYPE_6__*) ;
 int FUNC_13 (char*,unsigned long long) ;
 int * FUNC_14 (TYPE_10__*,TYPE_7__*,int *) ;
 int FUNC_15 (struct page*) ;
 int FUNC_16 (struct page*) ;
 int FUNC_17 (int *,unsigned long) ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 () ;
 int FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (int) ;
 int FUNC_22 (TYPE_5__*) ;
 int FUNC_23 (TYPE_5__*) ;

int FUNC_24(ntfs_inode *VAR_4, VCN VAR_5, ntfs_attr_search_ctx *VAR_6)
{
 VCN VAR_7;
 unsigned long VAR_8;
 ntfs_inode *VAR_9;
 MFT_RECORD *VAR_10;
 ATTR_RECORD *VAR_11;
 runlist_element *VAR_12;
 struct page *VAR_13 = ((void*)0);
 int VAR_14 = 0;
 bool VAR_15, VAR_16;
 ntfs_attr_search_ctx VAR_17 = { ((void*)0), };

 FUNC_13("Mapping runlist part containing vcn 0x%llx.",
   (unsigned long long)VAR_5);
 if (!FUNC_2(VAR_4))
  VAR_9 = VAR_4;
 else
  VAR_9 = VAR_4->ext.base_ntfs_ino;
 if (!VAR_6) {
  VAR_15 = VAR_16 = 1;
  VAR_10 = FUNC_7(VAR_9);
  if (FUNC_1(VAR_10))
   return FUNC_4(VAR_10);
  VAR_6 = FUNC_9(VAR_9, VAR_10);
  if (FUNC_21(!VAR_6)) {
   VAR_14 = -VAR_3;
   goto err_out;
  }
 } else {
  VCN VAR_18;

  FUNC_0(FUNC_1(VAR_6->mrec));
  VAR_11 = VAR_6->attr;
  FUNC_0(!VAR_11->non_resident);
  VAR_15 = 0;
  VAR_7 = FUNC_20(VAR_11->data.non_resident.highest_vcn);
  FUNC_17(&VAR_4->size_lock, VAR_8);
  VAR_18 = VAR_4->allocated_size >>
    VAR_4->vol->cluster_size_bits;
  FUNC_18(&VAR_4->size_lock, VAR_8);
  if (!VAR_11->data.non_resident.lowest_vcn && VAR_7 <= 0)
   VAR_7 = VAR_18 - 1;







  if (VAR_5 >= VAR_18 || (VAR_11->type == VAR_4->type &&
    VAR_11->name_length == VAR_4->name_len &&
    !FUNC_8((u8*)VAR_11 + FUNC_5(VAR_11->name_offset),
    VAR_4->name, VAR_4->name_len) &&
    FUNC_20(VAR_11->data.non_resident.lowest_vcn)
    <= VAR_5 && VAR_7 >= VAR_5))
   VAR_16 = 0;
  else {

   VAR_17 = *VAR_6;
   if (VAR_17.base_ntfs_ino && VAR_17.ntfs_ino !=
     VAR_17.base_ntfs_ino) {
    VAR_13 = VAR_17.ntfs_ino->page;
    FUNC_15(VAR_13);
   }




   FUNC_12(VAR_6);
   VAR_16 = 1;
  }
 }
 if (VAR_16) {
  VAR_14 = FUNC_10(VAR_4->type, VAR_4->name, VAR_4->name_len,
    VAR_0, VAR_5, ((void*)0), 0, VAR_6);
  if (FUNC_21(VAR_14)) {
   if (VAR_14 == -VAR_2)
    VAR_14 = -VAR_1;
   goto err_out;
  }
  FUNC_0(!VAR_6->attr->non_resident);
 }
 VAR_11 = VAR_6->attr;






 VAR_7 = FUNC_20(VAR_11->data.non_resident.highest_vcn) + 1;
 if (FUNC_21(VAR_5 && VAR_5 >= VAR_7)) {
  VAR_14 = -VAR_2;
  goto err_out;
 }
 VAR_12 = FUNC_14(VAR_4->vol, VAR_11, VAR_4->runlist.rl);
 if (FUNC_1(VAR_12))
  VAR_14 = FUNC_4(VAR_12);
 else
  VAR_4->runlist.rl = VAR_12;
err_out:
 if (VAR_15) {
  if (FUNC_6(VAR_6))
   FUNC_11(VAR_6);
  FUNC_23(VAR_9);
 } else if (VAR_16) {







  if (FUNC_3(VAR_9)) {





   if (VAR_6->ntfs_ino != VAR_17.ntfs_ino) {




    if (VAR_6->base_ntfs_ino && VAR_6->ntfs_ino !=
      VAR_6->base_ntfs_ino) {
     FUNC_22(VAR_6->ntfs_ino);
     VAR_6->mrec = VAR_6->base_mrec;
     FUNC_0(!VAR_6->mrec);
    }




    if (VAR_17.base_ntfs_ino &&
      VAR_17.ntfs_ino !=
      VAR_17.base_ntfs_ino) {
retry_map:
     VAR_6->mrec = FUNC_7(
       VAR_17.ntfs_ino);
     if (FUNC_1(VAR_6->mrec)) {
      if (FUNC_4(VAR_6->mrec) ==
        -VAR_3) {
       FUNC_19();
       goto retry_map;
      } else
       VAR_17.ntfs_ino =
        VAR_17.
        base_ntfs_ino;
     }
    }
   }

   if (VAR_6->mrec != VAR_17.mrec) {
    if (!FUNC_1(VAR_6->mrec))
     VAR_17.attr = (ATTR_RECORD*)(
       (u8*)VAR_6->mrec +
       ((u8*)VAR_17.attr -
       (u8*)VAR_17.mrec));
    VAR_17.mrec = VAR_6->mrec;
   }
  }

  *VAR_6 = VAR_17;
  if (VAR_13)
   FUNC_16(VAR_13);
 }
 return VAR_14;
}
