
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_segment_usage {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_page; } ;
typedef scalar_t__ __u64 ;
struct TYPE_2__ {int mi_sem; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct nilfs_segment_usage*) ;
 struct nilfs_segment_usage* FUNC_6 (struct inode*,scalar_t__,struct buffer_head*,void*) ;
 scalar_t__ FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*,scalar_t__,int,struct buffer_head**) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct inode *VAR_1, __u64 VAR_2,
       struct nilfs_segment_usage **VAR_3,
       struct buffer_head **VAR_4)
{
 struct buffer_head *VAR_5;
 struct nilfs_segment_usage *VAR_6;
 void *VAR_7;
 int VAR_8;


 if (VAR_2 >= FUNC_7(VAR_1))
  return -VAR_0;
 FUNC_2(&FUNC_0(VAR_1)->mi_sem);
 VAR_8 = FUNC_8(VAR_1, VAR_2, 1, &VAR_5);
 if (VAR_8 < 0)
  goto out_sem;
 VAR_7 = FUNC_3(VAR_5->b_page);
 VAR_6 = FUNC_6(VAR_1, VAR_2, VAR_5, VAR_7);
 if (FUNC_5(VAR_6)) {
  FUNC_4(VAR_5->b_page);
  FUNC_1(VAR_5);
  VAR_8 = -VAR_0;
  goto out_sem;
 }

 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_6;
 *VAR_4 = VAR_5;

 out_sem:
 FUNC_9(&FUNC_0(VAR_1)->mi_sem);
 return VAR_8;
}
