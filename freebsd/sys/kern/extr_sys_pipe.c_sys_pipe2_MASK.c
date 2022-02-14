
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct pipe2_args {int flags; int fildes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (struct thread*,int) ;
 int FUNC_2 (struct thread*,int*,int,int *,int *) ;

int
FUNC_3(struct thread *VAR_3, struct pipe2_args *VAR_4)
{
 int VAR_5, VAR_6[2];

 if (VAR_4->flags & ~(VAR_1 | VAR_2))
  return (VAR_0);
 VAR_5 = FUNC_2(VAR_3, VAR_6, VAR_4->flags, ((void*)0), ((void*)0));
 if (VAR_5)
  return (VAR_5);
 VAR_5 = FUNC_0(VAR_6, VAR_4->fildes, 2 * sizeof(int));
 if (VAR_5) {
  (void)FUNC_1(VAR_3, VAR_6[0]);
  (void)FUNC_1(VAR_3, VAR_6[1]);
 }
 return (VAR_5);
}
