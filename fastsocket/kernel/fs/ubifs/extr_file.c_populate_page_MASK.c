
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ubifs_info {int dummy; } ;
struct TYPE_6__ {int len; int sqnum; } ;
struct ubifs_data_node {int compr_type; int data; TYPE_2__ ch; int size; } ;
struct page {int index; int flags; TYPE_1__* mapping; } ;
struct inode {int i_ino; } ;
struct bu_info {int cnt; TYPE_3__* zbranch; struct ubifs_data_node* buf; } ;
typedef int pgoff_t ;
typedef int loff_t ;
struct TYPE_8__ {scalar_t__ creat_sqnum; } ;
struct TYPE_7__ {int offs; int key; } ;
struct TYPE_5__ {struct inode* host; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct inode*) ;
 unsigned int FUNC_8 (struct ubifs_info*,int *) ;
 void* FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (void*,int ,int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int *,int,void*,int*,int ) ;
 int FUNC_17 (char*,unsigned int,int ) ;
 TYPE_4__* FUNC_18 (struct inode*) ;

__attribute__((used)) static int FUNC_19(struct ubifs_info *VAR_8, struct page *VAR_9,
    struct bu_info *VAR_10, int *VAR_11)
{
 int VAR_12 = 0, VAR_13 = *VAR_11, VAR_14 = VAR_10->zbranch[0].offs, VAR_15 = 0, VAR_16 = 0;
 struct inode *VAR_17 = VAR_9->mapping->host;
 loff_t VAR_18 = FUNC_7(VAR_17);
 unsigned int VAR_19;
 void *VAR_20, *VAR_21;
 pgoff_t VAR_22;

 FUNC_5("ino %lu, pg %lu, i_size %lld, flags %#lx",
  VAR_17->i_ino, VAR_9->index, VAR_18, VAR_9->flags);

 VAR_20 = VAR_21 = FUNC_9(VAR_9);

 VAR_22 = (VAR_18 - 1) >> VAR_1;
 if (!VAR_18 || VAR_9->index > VAR_22) {
  VAR_15 = 1;
  FUNC_14(VAR_20, 0, VAR_2);
  goto out_hole;
 }

 VAR_19 = VAR_9->index << VAR_4;
 while (1) {
  int VAR_23, VAR_24, VAR_25, VAR_26;

  if (VAR_13 >= VAR_10->cnt) {
   VAR_15 = 1;
   FUNC_14(VAR_20, 0, VAR_6);
  } else if (FUNC_8(VAR_8, &VAR_10->zbranch[VAR_13].key) == VAR_19) {
   struct ubifs_data_node *VAR_27;

   VAR_27 = VAR_10->buf + (VAR_10->zbranch[VAR_13].offs - VAR_14);

   FUNC_15(FUNC_13(VAR_27->ch.sqnum) >
         FUNC_18(VAR_17)->creat_sqnum);

   VAR_24 = FUNC_12(VAR_27->size);
   if (VAR_24 <= 0 || VAR_24 > VAR_6)
    goto out_err;

   VAR_26 = FUNC_12(VAR_27->ch.len) - VAR_7;
   VAR_25 = VAR_6;
   VAR_23 = FUNC_16(&VAR_27->data, VAR_26, VAR_20, &VAR_25,
            FUNC_11(VAR_27->compr_type));
   if (VAR_23 || VAR_24 != VAR_25)
    goto out_err;

   if (VAR_24 < VAR_6)
    FUNC_14(VAR_20 + VAR_24, 0, VAR_6 - VAR_24);

   VAR_13 += 1;
   VAR_16 = (VAR_12 << VAR_5) + VAR_24;
  } else if (FUNC_8(VAR_8, &VAR_10->zbranch[VAR_13].key) < VAR_19) {
   VAR_13 += 1;
   continue;
  } else {
   VAR_15 = 1;
   FUNC_14(VAR_20, 0, VAR_6);
  }
  if (++VAR_12 >= VAR_3)
   break;
  VAR_20 += VAR_6;
  VAR_19 += 1;
 }

 if (VAR_22 == VAR_9->index) {
  int VAR_28 = VAR_18 & (VAR_2 - 1);

  if (VAR_28 && VAR_28 < VAR_16)
   FUNC_14(VAR_21 + VAR_28, 0, VAR_16 - VAR_28);
 }

out_hole:
 if (VAR_15) {
  FUNC_2(VAR_9);
  FUNC_5("hole");
 }

 FUNC_4(VAR_9);
 FUNC_0(VAR_9);
 FUNC_6(VAR_9);
 FUNC_10(VAR_9);
 *VAR_11 = VAR_13;
 return 0;

out_err:
 FUNC_1(VAR_9);
 FUNC_3(VAR_9);
 FUNC_6(VAR_9);
 FUNC_10(VAR_9);
 FUNC_17("bad data node (block %u, inode %lu)",
    VAR_19, VAR_17->i_ino);
 return -VAR_0;
}
