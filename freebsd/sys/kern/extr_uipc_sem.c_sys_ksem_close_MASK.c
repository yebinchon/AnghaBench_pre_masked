
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct ksem_close_args {int id; } ;
struct ksem {int ks_flags; } ;
struct file {struct ksem* f_data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct file*,struct thread*) ;
 int FUNC_2 (struct thread*,int ) ;
 int FUNC_3 (struct thread*,int ,int *,struct file**) ;

int
FUNC_4(struct thread *VAR_3, struct ksem_close_args *VAR_4)
{
 struct ksem *VAR_5;
 struct file *VAR_6;
 int VAR_7;


 FUNC_0(VAR_4->id);
 VAR_7 = FUNC_3(VAR_3, VAR_4->id, &VAR_2, &VAR_6);
 if (VAR_7)
  return (VAR_7);
 VAR_5 = VAR_6->f_data;
 if (VAR_5->ks_flags & VAR_1) {
  FUNC_1(VAR_6, VAR_3);
  return (VAR_0);
 }
 VAR_7 = FUNC_2(VAR_3, VAR_4->id);
 FUNC_1(VAR_6, VAR_3);
 return (VAR_7);
}
