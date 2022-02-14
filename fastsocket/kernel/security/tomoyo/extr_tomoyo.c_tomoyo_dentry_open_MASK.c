
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int f_flags; int f_path; } ;
struct cred {int dummy; } ;
struct TYPE_2__ {scalar_t__ in_execve; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, const struct cred *VAR_5)
{
 int VAR_6 = VAR_4->f_flags;

 if ((VAR_6 + 1) & VAR_0)
  VAR_6++;
 VAR_6 |= VAR_4->f_flags & (VAR_1 | VAR_2);

 if (VAR_3->in_execve)
  return 0;
 return FUNC_0(FUNC_1(), &VAR_4->f_path, VAR_6);
}
