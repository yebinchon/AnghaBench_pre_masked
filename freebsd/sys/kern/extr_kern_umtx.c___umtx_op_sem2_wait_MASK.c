
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct thread {int dummy; } ;
struct _umtx_time {int _flags; int _timeout; } ;
struct _umtx_op_args {int * uaddr2; int obj; scalar_t__ uaddr1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct _umtx_time*,int) ;
 int FUNC_1 (struct thread*,int ,struct _umtx_time*) ;
 int FUNC_2 (int *,size_t,struct _umtx_time*) ;

__attribute__((used)) static int
FUNC_3(struct thread *VAR_2, struct _umtx_op_args *VAR_3)
{
 struct _umtx_time *VAR_4, VAR_5;
 size_t VAR_6;
 int VAR_7;


 if (VAR_3->uaddr2 == ((void*)0)) {
  VAR_6 = 0;
  VAR_4 = ((void*)0);
 } else {
  VAR_6 = (size_t)VAR_3->uaddr1;
  VAR_7 = FUNC_2(VAR_3->uaddr2, VAR_6, &VAR_5);
  if (VAR_7 != 0)
   return (VAR_7);
  VAR_4 = &VAR_5;
 }
 VAR_7 = FUNC_1(VAR_2, VAR_3->obj, VAR_4);
 if (VAR_7 == VAR_0 && VAR_3->uaddr2 != ((void*)0) &&
     (VAR_5._flags & VAR_1) == 0 &&
     VAR_6 >= sizeof(struct _umtx_time) + sizeof(struct timespec)) {
  VAR_7 = FUNC_0(&VAR_5._timeout,
      (struct _umtx_time *)VAR_3->uaddr2 + 1,
      sizeof(struct timespec));
  if (VAR_7 == 0) {
   VAR_7 = VAR_0;
  }
 }

 return (VAR_7);
}
