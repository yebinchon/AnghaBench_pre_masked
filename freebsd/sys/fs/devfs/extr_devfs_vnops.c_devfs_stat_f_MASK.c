
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct stat {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int (* fo_stat ) (struct file*,struct stat*,struct ucred*,struct thread*) ;} ;


 int FUNC_0 (struct file*,struct stat*,struct ucred*,struct thread*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct file *VAR_1, struct stat *VAR_2, struct ucred *VAR_3, struct thread *VAR_4)
{

 return (VAR_0.fo_stat(VAR_1, VAR_2, VAR_3, VAR_4));
}
