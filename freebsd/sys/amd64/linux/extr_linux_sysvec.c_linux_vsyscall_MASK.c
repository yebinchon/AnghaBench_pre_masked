
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct trapframe {int tf_rip; int tf_flags; scalar_t__ tf_rsp; int tf_rax; } ;
struct thread {struct trapframe* td_frame; } ;
typedef int retqaddr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct thread*,int) ;
 int FUNC_2 (void*,int*,int) ;
 int * VAR_4 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct thread *VAR_5)
{
 struct trapframe *VAR_6;
 uint64_t VAR_7;
 int VAR_8, VAR_9;
 int VAR_10;

 VAR_6 = VAR_5->td_frame;


 if (FUNC_0(VAR_6->tf_rip < VAR_1))
  return (VAR_0);
 if ((VAR_6->tf_rip & (VAR_2 - 1)) != 0)
  return (VAR_0);
 VAR_8 = (VAR_6->tf_rip - VAR_1) / VAR_2;
 if (VAR_8 >= FUNC_3(VAR_4))
  return (VAR_0);





 VAR_10 = FUNC_2((void *)VAR_6->tf_rsp, &VAR_7, sizeof(VAR_7));
 if (VAR_10)
  return (VAR_10);

 VAR_6->tf_rip = VAR_7;
 VAR_6->tf_rax = VAR_4[VAR_8];
 VAR_6->tf_rsp += 8;

 VAR_9 = (VAR_6->tf_flags & VAR_3);

 FUNC_1(VAR_5, VAR_9);

 return (0);
}
