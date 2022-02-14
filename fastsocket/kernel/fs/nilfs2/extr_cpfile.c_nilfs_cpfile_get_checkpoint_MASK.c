
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_cpfile_header {int ch_ncheckpoints; } ;
struct nilfs_checkpoint {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_page; } ;
typedef int __u64 ;
struct TYPE_2__ {int mi_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (void*,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (struct nilfs_checkpoint*) ;
 scalar_t__ FUNC_9 (struct nilfs_checkpoint*) ;
 int FUNC_10 (struct inode*,struct buffer_head*,void*,int) ;
 struct nilfs_checkpoint* FUNC_11 (struct inode*,int,struct buffer_head*,void*) ;
 struct nilfs_cpfile_header* FUNC_12 (struct inode*,struct buffer_head*,void*) ;
 int FUNC_13 (struct inode*,int,int,struct buffer_head**) ;
 int FUNC_14 (struct inode*,struct buffer_head**) ;
 int FUNC_15 (struct inode*,int) ;
 int FUNC_16 (struct inode*) ;
 int FUNC_17 (struct buffer_head*) ;
 int FUNC_18 (struct inode*) ;
 scalar_t__ FUNC_19 (int) ;
 int FUNC_20 (int *) ;

int FUNC_21(struct inode *VAR_3,
    __u64 VAR_4,
    int VAR_5,
    struct nilfs_checkpoint **VAR_6,
    struct buffer_head **VAR_7)
{
 struct buffer_head *VAR_8, *VAR_9;
 struct nilfs_cpfile_header *VAR_10;
 struct nilfs_checkpoint *VAR_11;
 void *VAR_12;
 int VAR_13;

 if (FUNC_19(VAR_4 < 1 || VAR_4 > FUNC_16(VAR_3) ||
       (VAR_4 < FUNC_16(VAR_3) && VAR_5)))
  return -VAR_0;

 FUNC_2(&FUNC_0(VAR_3)->mi_sem);

 VAR_13 = FUNC_14(VAR_3, &VAR_8);
 if (VAR_13 < 0)
  goto out_sem;
 VAR_13 = FUNC_13(VAR_3, VAR_4, VAR_5, &VAR_9);
 if (VAR_13 < 0)
  goto out_header;
 VAR_12 = FUNC_3(VAR_9->b_page);
 VAR_11 = FUNC_11(VAR_3, VAR_4, VAR_9, VAR_12);
 if (FUNC_9(VAR_11)) {
  if (!VAR_5) {
   FUNC_5(VAR_9->b_page);
   FUNC_1(VAR_9);
   VAR_13 = -VAR_1;
   goto out_header;
  }

  FUNC_8(VAR_11);
  if (!FUNC_15(VAR_3, VAR_4))
   FUNC_10(VAR_3, VAR_9,
         VAR_12, 1);
  FUNC_17(VAR_9);

  VAR_12 = FUNC_4(VAR_8->b_page, VAR_2);
  VAR_10 = FUNC_12(VAR_3, VAR_8,
             VAR_12);
  FUNC_7(&VAR_10->ch_ncheckpoints, 1);
  FUNC_6(VAR_12, VAR_2);
  FUNC_17(VAR_8);
  FUNC_18(VAR_3);
 }

 if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_11;
 *VAR_7 = VAR_9;

 out_header:
 FUNC_1(VAR_8);

 out_sem:
 FUNC_20(&FUNC_0(VAR_3)->mi_sem);
 return VAR_13;
}
