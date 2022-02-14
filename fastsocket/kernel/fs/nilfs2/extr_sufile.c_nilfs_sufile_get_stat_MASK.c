
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct the_nilfs {int ns_last_segment_lock; int ns_prot_seq; int ns_nongc_ctime; int ns_ctime; } ;
struct nilfs_sustat {int ss_prot_seq; int ss_nongc_ctime; int ss_ctime; void* ss_ndirtysegs; void* ss_ncleansegs; int ss_nsegs; } ;
struct nilfs_sufile_header {int sh_ndirtysegs; int sh_ncleansegs; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_page; } ;
struct TYPE_2__ {int mi_sem; struct the_nilfs* mi_nilfs; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int ,int ) ;
 int FUNC_4 (void*,int ) ;
 void* FUNC_5 (int ) ;
 struct nilfs_sufile_header* FUNC_6 (struct inode*,struct buffer_head*,void*) ;
 int FUNC_7 (struct inode*,struct buffer_head**) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct inode *VAR_1, struct nilfs_sustat *VAR_2)
{
 struct buffer_head *VAR_3;
 struct nilfs_sufile_header *VAR_4;
 struct the_nilfs *VAR_5 = FUNC_0(VAR_1)->mi_nilfs;
 void *VAR_6;
 int VAR_7;

 FUNC_2(&FUNC_0(VAR_1)->mi_sem);

 VAR_7 = FUNC_7(VAR_1, &VAR_3);
 if (VAR_7 < 0)
  goto out_sem;

 VAR_6 = FUNC_3(VAR_3->b_page, VAR_0);
 VAR_4 = FUNC_6(VAR_1, VAR_3, VAR_6);
 VAR_2->ss_nsegs = FUNC_8(VAR_1);
 VAR_2->ss_ncleansegs = FUNC_5(VAR_4->sh_ncleansegs);
 VAR_2->ss_ndirtysegs = FUNC_5(VAR_4->sh_ndirtysegs);
 VAR_2->ss_ctime = VAR_5->ns_ctime;
 VAR_2->ss_nongc_ctime = VAR_5->ns_nongc_ctime;
 FUNC_9(&VAR_5->ns_last_segment_lock);
 VAR_2->ss_prot_seq = VAR_5->ns_prot_seq;
 FUNC_10(&VAR_5->ns_last_segment_lock);
 FUNC_4(VAR_6, VAR_0);
 FUNC_1(VAR_3);

 out_sem:
 FUNC_11(&FUNC_0(VAR_1)->mi_sem);
 return VAR_7;
}
