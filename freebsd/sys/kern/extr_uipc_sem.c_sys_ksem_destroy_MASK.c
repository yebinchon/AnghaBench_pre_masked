
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct ksem_destroy_args {int id; } ;
struct ksem {int ks_flags; scalar_t__ ks_waiters; } ;
struct file {struct ksem* f_data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct file*,struct thread*) ;
 int FUNC_2 (struct thread*,int ) ;
 int FUNC_3 (struct thread*,int ,int *,struct file**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_5 ;

int
FUNC_6(struct thread *VAR_6, struct ksem_destroy_args *VAR_7)
{
 struct file *VAR_8;
 struct ksem *VAR_9;
 int VAR_10;


 FUNC_0(VAR_7->id);
 VAR_10 = FUNC_3(VAR_6, VAR_7->id, &VAR_4, &VAR_8);
 if (VAR_10)
  return (VAR_10);
 VAR_9 = VAR_8->f_data;
 if (!(VAR_9->ks_flags & VAR_2)) {
  FUNC_1(VAR_8, VAR_6);
  return (VAR_1);
 }
 FUNC_4(&VAR_5);
 if (VAR_9->ks_waiters != 0) {
  FUNC_5(&VAR_5);
  VAR_10 = VAR_0;
  goto err;
 }
 VAR_9->ks_flags |= VAR_3;
 FUNC_5(&VAR_5);

 VAR_10 = FUNC_2(VAR_6, VAR_7->id);
err:
 FUNC_1(VAR_8, VAR_6);
 return (VAR_10);
}
