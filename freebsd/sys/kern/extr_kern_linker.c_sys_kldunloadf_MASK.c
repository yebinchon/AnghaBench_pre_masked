
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct kldunloadf_args {scalar_t__ flags; int fileid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct thread*,int ,scalar_t__) ;

int
FUNC_1(struct thread *VAR_3, struct kldunloadf_args *VAR_4)
{

 if (VAR_4->flags != VAR_2 &&
     VAR_4->flags != VAR_1)
  return (VAR_0);
 return (FUNC_0(VAR_3, VAR_4->fileid, VAR_4->flags));
}
