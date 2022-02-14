
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_inode {int read_in_a_row; int bulk_read; int last_page_read; } ;
struct ubifs_info {scalar_t__ leb_size; } ;
struct page {int index; struct address_space* mapping; } ;
struct inode {int dummy; } ;
struct bu_info {int blk_cnt; int cnt; scalar_t__ buf_len; scalar_t__ buf; TYPE_1__* zbranch; scalar_t__ eof; } ;
struct address_space {struct inode* host; } ;
typedef int pgoff_t ;
typedef int loff_t ;
struct TYPE_2__ {scalar_t__ offs; scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct page* FUNC_1 (struct address_space*,int,int) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct ubifs_info*,struct page*,struct bu_info*,int*) ;
 int FUNC_7 (int) ;
 struct ubifs_inode* FUNC_8 (struct inode*) ;
 int FUNC_9 (struct ubifs_info*,struct bu_info*) ;
 int FUNC_10 (struct ubifs_info*,struct bu_info*) ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (struct page*) ;

__attribute__((used)) static int FUNC_13(struct ubifs_info *VAR_5, struct bu_info *VAR_6,
         struct page *VAR_7)
{
 pgoff_t VAR_8 = VAR_7->index, VAR_9;
 struct address_space *VAR_10 = VAR_7->mapping;
 struct inode *VAR_11 = VAR_10->host;
 struct ubifs_inode *VAR_12 = FUNC_8(VAR_11);
 int VAR_13, VAR_14, VAR_15, VAR_16 = 0, VAR_17 = 0;
 int VAR_18 = VAR_6->buf ? 0 : 1;
 loff_t VAR_19;

 VAR_13 = FUNC_10(VAR_5, VAR_6);
 if (VAR_13)
  goto out_warn;

 if (VAR_6->eof) {

  VAR_12->read_in_a_row = 1;
  VAR_12->bulk_read = 0;
 }

 VAR_15 = VAR_6->blk_cnt >> VAR_2;
 if (!VAR_15) {






  goto out_bu_off;
 }

 if (VAR_6->cnt) {
  if (VAR_18) {




   VAR_6->buf_len = VAR_6->zbranch[VAR_6->cnt - 1].offs +
          VAR_6->zbranch[VAR_6->cnt - 1].len -
          VAR_6->zbranch[0].offs;
   FUNC_7(VAR_6->buf_len > 0);
   FUNC_7(VAR_6->buf_len <= VAR_5->leb_size);
   VAR_6->buf = FUNC_4(VAR_6->buf_len, VAR_0 | VAR_4);
   if (!VAR_6->buf)
    goto out_bu_off;
  }

  VAR_13 = FUNC_9(VAR_5, VAR_6);
  if (VAR_13)
   goto out_warn;
 }

 VAR_13 = FUNC_6(VAR_5, VAR_7, VAR_6, &VAR_17);
 if (VAR_13)
  goto out_warn;

 FUNC_12(VAR_7);
 VAR_16 = 1;

 VAR_19 = FUNC_2(VAR_11);
 if (VAR_19 == 0)
  goto out_free;
 VAR_9 = ((VAR_19 - 1) >> VAR_1);

 for (VAR_14 = 1; VAR_14 < VAR_15; VAR_14++) {
  pgoff_t VAR_20 = VAR_8 + VAR_14;
  struct page *VAR_21;

  if (VAR_20 > VAR_9)
   break;
  VAR_21 = FUNC_1(VAR_10, VAR_20,
        VAR_0 | VAR_3);
  if (!VAR_21)
   break;
  if (!FUNC_0(VAR_21))
   VAR_13 = FUNC_6(VAR_5, VAR_21, VAR_6, &VAR_17);
  FUNC_12(VAR_21);
  FUNC_5(VAR_21);
  if (VAR_13)
   break;
 }

 VAR_12->last_page_read = VAR_8 + VAR_14 - 1;

out_free:
 if (VAR_18)
  FUNC_3(VAR_6->buf);
 return VAR_16;

out_warn:
 FUNC_11("ignoring error %d and skipping bulk-read", VAR_13);
 goto out_free;

out_bu_off:
 VAR_12->read_in_a_row = VAR_12->bulk_read = 0;
 goto out_free;
}
