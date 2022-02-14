
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_cpinfo {scalar_t__ ci_cno; } ;
struct nilfs_checkpoint {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_page; } ;
typedef int ssize_t ;
typedef scalar_t__ __u64 ;
struct TYPE_2__ {size_t mi_entry_size; int mi_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int ,int ) ;
 int FUNC_4 (void*,int ) ;
 int FUNC_5 (struct nilfs_checkpoint*) ;
 struct nilfs_checkpoint* FUNC_6 (struct inode*,scalar_t__,struct buffer_head*,void*) ;
 int FUNC_7 (struct inode*,struct nilfs_checkpoint*,struct nilfs_cpinfo*) ;
 int FUNC_8 (struct inode*,scalar_t__,scalar_t__) ;
 int FUNC_9 (struct inode*,scalar_t__,int ,struct buffer_head**) ;
 scalar_t__ FUNC_10 (struct inode*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static ssize_t FUNC_12(struct inode *VAR_2, __u64 *VAR_3,
       void *VAR_4, unsigned VAR_5, size_t VAR_6)
{
 struct nilfs_checkpoint *VAR_7;
 struct nilfs_cpinfo *VAR_8 = VAR_4;
 struct buffer_head *VAR_9;
 size_t VAR_10 = FUNC_0(VAR_2)->mi_entry_size;
 __u64 VAR_11 = FUNC_10(VAR_2), VAR_12 = *VAR_3;
 void *VAR_13;
 int VAR_14, VAR_15;
 int VAR_16, VAR_17;

 if (VAR_12 == 0)
  return -VAR_0;
 FUNC_2(&FUNC_0(VAR_2)->mi_sem);

 for (VAR_14 = 0; VAR_12 < VAR_11 && VAR_14 < VAR_6; VAR_12 += VAR_16) {
  VAR_16 = FUNC_8(VAR_2, VAR_12, VAR_11);
  VAR_15 = FUNC_9(VAR_2, VAR_12, 0, &VAR_9);
  if (VAR_15 < 0) {
   if (VAR_15 != -VAR_0)
    goto out;
   continue;
  }

  VAR_13 = FUNC_3(VAR_9->b_page, VAR_1);
  VAR_7 = FUNC_6(VAR_2, VAR_12, VAR_9, VAR_13);
  for (VAR_17 = 0; VAR_17 < VAR_16 && VAR_14 < VAR_6; VAR_17++, VAR_7 = (void *)VAR_7 + VAR_10) {
   if (!FUNC_5(VAR_7)) {
    FUNC_7(VAR_2, VAR_7,
          VAR_8);
    VAR_8 = (void *)VAR_8 + VAR_5;
    VAR_14++;
   }
  }
  FUNC_4(VAR_13, VAR_1);
  FUNC_1(VAR_9);
 }

 VAR_15 = VAR_14;
 if (VAR_14 > 0) {
  VAR_8 = (void *)VAR_8 - VAR_5;
  *VAR_3 = VAR_8->ci_cno + 1;
 }

 out:
 FUNC_11(&FUNC_0(VAR_2)->mi_sem);
 return VAR_15;
}
