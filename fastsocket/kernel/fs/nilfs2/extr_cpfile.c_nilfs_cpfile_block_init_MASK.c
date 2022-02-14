
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_checkpoint {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {size_t mi_entry_size; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct nilfs_checkpoint*) ;
 int FUNC_3 (struct inode*) ;

__attribute__((used)) static void FUNC_4(struct inode *VAR_0,
        struct buffer_head *VAR_1,
        void *VAR_2)
{
 struct nilfs_checkpoint *VAR_3 = VAR_2 + FUNC_1(VAR_1);
 size_t VAR_4 = FUNC_0(VAR_0)->mi_entry_size;
 int VAR_5 = FUNC_3(VAR_0);

 while (VAR_5-- > 0) {
  FUNC_2(VAR_3);
  VAR_3 = (void *)VAR_3 + VAR_4;
 }
}
