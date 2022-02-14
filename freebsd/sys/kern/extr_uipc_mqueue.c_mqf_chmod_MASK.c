
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct mqfs_node {int mn_mode; int mn_gid; int mn_uid; } ;
struct file {struct mqfs_node* f_data; } ;
typedef int mode_t ;
struct TYPE_2__ {int mi_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int,int ,int ,int ,struct ucred*,int *) ;

__attribute__((used)) static int
FUNC_3(struct file *VAR_4, mode_t VAR_5, struct ucred *VAR_6,
    struct thread *VAR_7)
{
 struct mqfs_node *VAR_8;
 int VAR_9;

 VAR_9 = 0;
 VAR_8 = VAR_4->f_data;
 FUNC_0(&VAR_3.mi_lock);
 VAR_9 = FUNC_2(VAR_2, VAR_8->mn_mode, VAR_8->mn_uid, VAR_8->mn_gid, VAR_1,
     VAR_6, ((void*)0));
 if (VAR_9 != 0)
  goto out;
 VAR_8->mn_mode = VAR_5 & VAR_0;
out:
 FUNC_1(&VAR_3.mi_lock);
 return (VAR_9);
}
