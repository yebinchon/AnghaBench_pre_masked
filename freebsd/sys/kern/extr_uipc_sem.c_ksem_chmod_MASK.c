
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct ksem {int ks_mode; int ks_gid; int ks_uid; } ;
struct file {struct ksem* f_data; } ;
typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ucred*,struct ksem*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (int ,int,int ,int ,int ,struct ucred*,int *) ;

__attribute__((used)) static int
FUNC_4(struct file *VAR_4, mode_t VAR_5, struct ucred *VAR_6,
    struct thread *VAR_7)
{
 struct ksem *VAR_8;
 int VAR_9;

 VAR_9 = 0;
 VAR_8 = VAR_4->f_data;
 FUNC_1(&VAR_3);





 VAR_9 = FUNC_3(VAR_2, VAR_8->ks_mode, VAR_8->ks_uid, VAR_8->ks_gid, VAR_1,
     VAR_6, ((void*)0));
 if (VAR_9 != 0)
  goto out;
 VAR_8->ks_mode = VAR_5 & VAR_0;
out:
 FUNC_2(&VAR_3);
 return (VAR_9);
}
