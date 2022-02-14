
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct ksem {int ks_flags; } ;
struct file {scalar_t__ f_type; struct ksem* f_data; } ;
typedef int semid_t ;
typedef int cap_rights_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct file*,struct thread*) ;
 int FUNC_1 (struct thread*,int ,int *,struct file**) ;

__attribute__((used)) static int
FUNC_2(struct thread *VAR_3, semid_t VAR_4, cap_rights_t *VAR_5,
    struct file **VAR_6)
{
 struct ksem *VAR_7;
 struct file *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_8);
 if (VAR_9)
  return (VAR_1);
 if (VAR_8->f_type != VAR_0) {
  FUNC_0(VAR_8, VAR_3);
  return (VAR_1);
 }
 VAR_7 = VAR_8->f_data;
 if (VAR_7->ks_flags & VAR_2) {
  FUNC_0(VAR_8, VAR_3);
  return (VAR_1);
 }
 *VAR_6 = VAR_8;
 return (0);
}
