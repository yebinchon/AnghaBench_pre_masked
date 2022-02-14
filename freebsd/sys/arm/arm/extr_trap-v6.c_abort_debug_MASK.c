
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct trapframe {int dummy; } ;
struct thread {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct thread*,int ,int ,scalar_t__) ;
 struct thread* VAR_4 ;
 int FUNC_1 (int ,int ,struct trapframe*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct thread*,struct trapframe*) ;

__attribute__((used)) static __inline void
FUNC_4(struct trapframe *VAR_5, u_int VAR_6, u_int VAR_7, bool VAR_8,
    u_int VAR_9)
{

 if (VAR_8) {
  struct thread *VAR_10;

  VAR_10 = VAR_4;
  FUNC_0(VAR_10, VAR_0, VAR_1, VAR_9);
  FUNC_3(VAR_10, VAR_5);
 } else {



  FUNC_2("No debugger in kernel.\n");

 }
}
