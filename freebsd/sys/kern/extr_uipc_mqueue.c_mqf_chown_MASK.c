
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct ucred {scalar_t__ cr_uid; } ;
struct thread {int dummy; } ;
struct mqfs_node {scalar_t__ mn_uid; scalar_t__ mn_gid; } ;
struct file {struct mqfs_node* f_data; } ;
typedef scalar_t__ gid_t ;
struct TYPE_2__ {int mi_lock; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,struct ucred*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (struct ucred*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct file *VAR_2, uid_t VAR_3, gid_t VAR_4, struct ucred *VAR_5,
    struct thread *VAR_6)
{
 struct mqfs_node *VAR_7;
 int VAR_8;

 VAR_8 = 0;
 VAR_7 = VAR_2->f_data;
 FUNC_2(&VAR_1.mi_lock);
 if (VAR_3 == (uid_t)-1)
  VAR_3 = VAR_7->mn_uid;
 if (VAR_4 == (gid_t)-1)
  VAR_4 = VAR_7->mn_gid;
 if (((VAR_3 != VAR_7->mn_uid && VAR_3 != VAR_5->cr_uid) ||
     (VAR_4 != VAR_7->mn_gid && !FUNC_0(VAR_4, VAR_5))) &&
     (VAR_8 = FUNC_1(VAR_5, VAR_0)))
  goto out;
 VAR_7->mn_uid = VAR_3;
 VAR_7->mn_gid = VAR_4;
out:
 FUNC_3(&VAR_1.mi_lock);
 return (VAR_8);
}
