
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct file {int dummy; } ;
typedef int off_t ;
struct TYPE_2__ {int (* fo_truncate ) (struct file*,int ,struct ucred*,struct thread*) ;} ;


 int FUNC_0 (struct file*,int ,struct ucred*,struct thread*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct file *VAR_1, off_t VAR_2, struct ucred *VAR_3, struct thread *VAR_4)
{

 return (VAR_0.fo_truncate(VAR_1, VAR_2, VAR_3, VAR_4));
}
