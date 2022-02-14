
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_find_inode_args {size_t fi_sysfile_type; int fi_blkno; int fi_ino; } ;
struct lock_class_key {int dummy; } ;
struct inode {int i_mutex; int i_ino; } ;
struct TYPE_2__ {int ip_alloc_sem; int ip_blkno; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 size_t VAR_3 ;
 int FUNC_1 (int *,struct lock_class_key*) ;
 int FUNC_2 (char*,struct inode*,void*) ;
 int FUNC_3 (int ) ;
 struct lock_class_key* VAR_4 ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_5, void *VAR_6)
{
 struct ocfs2_find_inode_args *VAR_7 = VAR_6;
 static struct lock_class_key VAR_8,
         VAR_9;

 FUNC_2("inode = %p, opaque = %p\n", VAR_5, VAR_6);

 VAR_5->i_ino = VAR_7->fi_ino;
 FUNC_0(VAR_5)->ip_blkno = VAR_7->fi_blkno;
 if (VAR_7->fi_sysfile_type != 0)
  FUNC_1(&VAR_5->i_mutex,
   &VAR_4[VAR_7->fi_sysfile_type]);
 if (VAR_7->fi_sysfile_type == VAR_3 ||
     VAR_7->fi_sysfile_type == VAR_0 ||
     VAR_7->fi_sysfile_type == VAR_2 ||
     VAR_7->fi_sysfile_type == VAR_1)
  FUNC_1(&FUNC_0(VAR_5)->ip_alloc_sem,
      &VAR_8);
 else
  FUNC_1(&FUNC_0(VAR_5)->ip_alloc_sem,
      &VAR_9);

 FUNC_3(0);
 return 0;
}
