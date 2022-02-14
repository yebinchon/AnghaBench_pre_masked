
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct page {int * mapping; } ;
struct inode {int i_blkbits; } ;
struct file_ra_state {int prev_pos; } ;
struct file {struct file_ra_state f_ra; struct address_space* f_mapping; } ;
struct address_space {TYPE_1__* a_ops; struct inode* host; } ;
struct TYPE_8__ {int count; int error; } ;
typedef TYPE_2__ read_descriptor_t ;
typedef unsigned long (* read_actor_t ) (TYPE_2__*,struct page*,unsigned long,unsigned long) ;
typedef unsigned long pgoff_t ;
typedef int loff_t ;
struct TYPE_7__ {int (* readpage ) (struct file*,struct page*) ;int (* is_partially_uptodate ) (struct page*,TYPE_2__*,unsigned long) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*,struct address_space*,unsigned long,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct file*) ;
 struct page* FUNC_6 (struct address_space*,unsigned long) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct page*) ;
 scalar_t__ FUNC_10 (struct address_space*) ;
 int FUNC_11 (struct page*) ;
 struct page* FUNC_12 (struct address_space*) ;
 int FUNC_13 (struct address_space*,struct file_ra_state*,struct file*,struct page*,unsigned long,unsigned long) ;
 int FUNC_14 (struct page*) ;
 int FUNC_15 (struct address_space*,struct file_ra_state*,struct file*,unsigned long,unsigned long) ;
 int FUNC_16 (struct file*,struct file_ra_state*) ;
 int FUNC_17 (struct page*,TYPE_2__*,unsigned long) ;
 int FUNC_18 (struct file*,struct page*) ;
 int FUNC_19 (struct page*) ;
 scalar_t__ FUNC_20 (int) ;
 int FUNC_21 (struct page*) ;

__attribute__((used)) static void FUNC_22(struct file *VAR_8, loff_t *VAR_9,
  read_descriptor_t *VAR_10, read_actor_t VAR_11)
{
 struct address_space *VAR_12 = VAR_8->f_mapping;
 struct inode *VAR_13 = VAR_12->host;
 struct file_ra_state *VAR_14 = &VAR_8->f_ra;
 pgoff_t VAR_15;
 pgoff_t VAR_16;
 pgoff_t VAR_17;
 unsigned long VAR_18;
 unsigned int VAR_19;
 int VAR_20;

 VAR_15 = *VAR_9 >> VAR_6;
 VAR_17 = VAR_14->prev_pos >> VAR_6;
 VAR_19 = VAR_14->prev_pos & (VAR_7-1);
 VAR_16 = (*VAR_9 + VAR_10->count + VAR_7-1) >> VAR_6;
 VAR_18 = *VAR_9 & ~VAR_5;

 for (;;) {
  struct page *VAR_21;
  pgoff_t VAR_22;
  loff_t VAR_23;
  unsigned long VAR_24, VAR_25;

  FUNC_4();
find_page:
  VAR_21 = FUNC_6(VAR_12, VAR_15);
  if (!VAR_21) {
   FUNC_15(VAR_12,
     VAR_14, VAR_8,
     VAR_15, VAR_16 - VAR_15);
   VAR_21 = FUNC_6(VAR_12, VAR_15);
   if (FUNC_20(VAR_21 == ((void*)0)))
    goto no_cached_page;
  }
  if (FUNC_1(VAR_21)) {
   FUNC_13(VAR_12,
     VAR_14, VAR_8, VAR_21,
     VAR_15, VAR_16 - VAR_15);
  }
  if (!FUNC_2(VAR_21)) {
   if (VAR_13->i_blkbits == VAR_6 ||
     !VAR_12->a_ops->is_partially_uptodate)
    goto page_not_up_to_date;
   if (!FUNC_19(VAR_21))
    goto page_not_up_to_date;

   if (!VAR_21->mapping)
    goto page_not_up_to_date_locked;
   if (!VAR_12->a_ops->is_partially_uptodate(VAR_21,
        VAR_10, VAR_18))
    goto page_not_up_to_date_locked;
   FUNC_21(VAR_21);
  }
page_ok:
  VAR_23 = FUNC_8(VAR_13);
  VAR_22 = (VAR_23 - 1) >> VAR_6;
  if (FUNC_20(!VAR_23 || VAR_15 > VAR_22)) {
   FUNC_14(VAR_21);
   goto out;
  }


  VAR_24 = VAR_7;
  if (VAR_15 == VAR_22) {
   VAR_24 = ((VAR_23 - 1) & ~VAR_5) + 1;
   if (VAR_24 <= VAR_18) {
    FUNC_14(VAR_21);
    goto out;
   }
  }
  VAR_24 = VAR_24 - VAR_18;





  if (FUNC_10(VAR_12))
   FUNC_7(VAR_21);





  if (VAR_17 != VAR_15 || VAR_18 != VAR_19)
   FUNC_11(VAR_21);
  VAR_17 = VAR_15;
  VAR_25 = VAR_11(VAR_10, VAR_21, VAR_18, VAR_24);
  VAR_18 += VAR_25;
  VAR_15 += VAR_18 >> VAR_6;
  VAR_18 &= ~VAR_5;
  VAR_19 = VAR_18;

  FUNC_14(VAR_21);
  if (VAR_25 == VAR_24 && VAR_10->count)
   continue;
  goto out;

page_not_up_to_date:

  VAR_20 = FUNC_9(VAR_21);
  if (FUNC_20(VAR_20))
   goto readpage_error;

page_not_up_to_date_locked:

  if (!VAR_21->mapping) {
   FUNC_21(VAR_21);
   FUNC_14(VAR_21);
   continue;
  }


  if (FUNC_2(VAR_21)) {
   FUNC_21(VAR_21);
   goto page_ok;
  }

readpage:





  FUNC_0(VAR_21);

  VAR_20 = VAR_12->a_ops->readpage(VAR_8, VAR_21);

  if (FUNC_20(VAR_20)) {
   if (VAR_20 == VAR_0) {
    FUNC_14(VAR_21);
    goto find_page;
   }
   goto readpage_error;
  }

  if (!FUNC_2(VAR_21)) {
   VAR_20 = FUNC_9(VAR_21);
   if (FUNC_20(VAR_20))
    goto readpage_error;
   if (!FUNC_2(VAR_21)) {
    if (VAR_21->mapping == ((void*)0)) {



     FUNC_21(VAR_21);
     FUNC_14(VAR_21);
     goto find_page;
    }
    FUNC_21(VAR_21);
    FUNC_16(VAR_8, VAR_14);
    VAR_20 = -VAR_2;
    goto readpage_error;
   }
   FUNC_21(VAR_21);
  }

  goto page_ok;

readpage_error:

  VAR_10->error = VAR_20;
  FUNC_14(VAR_21);
  goto out;

no_cached_page:




  VAR_21 = FUNC_12(VAR_12);
  if (!VAR_21) {
   VAR_10->error = -VAR_3;
   goto out;
  }
  VAR_20 = FUNC_3(VAR_21, VAR_12,
      VAR_15, VAR_4);
  if (VAR_20) {
   FUNC_14(VAR_21);
   if (VAR_20 == -VAR_1)
    goto find_page;
   VAR_10->error = VAR_20;
   goto out;
  }
  goto readpage;
 }

out:
 VAR_14->prev_pos = VAR_17;
 VAR_14->prev_pos <<= VAR_6;
 VAR_14->prev_pos |= VAR_19;

 *VAR_9 = ((loff_t)VAR_15 << VAR_6) + VAR_18;
 FUNC_5(VAR_8);
}
