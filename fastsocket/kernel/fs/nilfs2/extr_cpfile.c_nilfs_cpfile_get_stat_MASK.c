
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_cpstat {void* cs_nsss; void* cs_ncps; int cs_cno; } ;
struct nilfs_cpfile_header {int ch_nsnapshots; int ch_ncheckpoints; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_page; } ;
struct TYPE_2__ {int mi_sem; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int ,int ) ;
 int FUNC_4 (void*,int ) ;
 void* FUNC_5 (int ) ;
 struct nilfs_cpfile_header* FUNC_6 (struct inode*,struct buffer_head*,void*) ;
 int FUNC_7 (struct inode*,struct buffer_head**) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct inode *VAR_1, struct nilfs_cpstat *VAR_2)
{
 struct buffer_head *VAR_3;
 struct nilfs_cpfile_header *VAR_4;
 void *VAR_5;
 int VAR_6;

 FUNC_2(&FUNC_0(VAR_1)->mi_sem);

 VAR_6 = FUNC_7(VAR_1, &VAR_3);
 if (VAR_6 < 0)
  goto out_sem;
 VAR_5 = FUNC_3(VAR_3->b_page, VAR_0);
 VAR_4 = FUNC_6(VAR_1, VAR_3, VAR_5);
 VAR_2->cs_cno = FUNC_8(VAR_1);
 VAR_2->cs_ncps = FUNC_5(VAR_4->ch_ncheckpoints);
 VAR_2->cs_nsss = FUNC_5(VAR_4->ch_nsnapshots);
 FUNC_4(VAR_5, VAR_0);
 FUNC_1(VAR_3);

 out_sem:
 FUNC_9(&FUNC_0(VAR_1)->mi_sem);
 return VAR_6;
}
