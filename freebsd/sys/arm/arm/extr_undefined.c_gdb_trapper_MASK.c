
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
typedef scalar_t__ u_int ;
struct trapframe {int tf_spsr; } ;
struct thread {int td_proc; } ;
struct TYPE_4__ {int * ksi_addr; int ksi_code; void* ksi_signo; } ;
typedef TYPE_1__ ksiginfo_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct thread* VAR_9 ;
 int FUNC_4 (int ,struct trapframe*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct thread*) ;
 struct thread VAR_10 ;
 int FUNC_7 (struct thread*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_8(u_int VAR_11, u_int VAR_12, struct trapframe *VAR_13, int VAR_14)
{
 struct thread *VAR_15;
 ksiginfo_t VAR_16;
 int VAR_17;

 VAR_15 = (VAR_9 == ((void*)0)) ? &VAR_10 : VAR_9;

 if (VAR_12 == VAR_2 || VAR_12 == VAR_1) {
  if (VAR_14 == VAR_0) {
   FUNC_5(&VAR_16);
   VAR_16.ksi_signo = VAR_5;
   VAR_16.ksi_code = VAR_6;
   VAR_16.ksi_addr = (u_int32_t *)VAR_11;
   FUNC_7(VAR_15, &VAR_16);
   return 0;
  }





 }

 if (VAR_14 == VAR_0) {

  if ((VAR_13->tf_spsr & VAR_3) == 0 &&
      VAR_12 == VAR_4) {
   FUNC_0(VAR_15->td_proc);
   FUNC_2(VAR_15->td_proc);
   VAR_17 = FUNC_6(VAR_15);
   FUNC_3(VAR_15->td_proc);
   FUNC_1(VAR_15->td_proc);
   if (VAR_17 == 0) {
    FUNC_5(&VAR_16);
    VAR_16.ksi_signo = VAR_5;
    VAR_16.ksi_code = VAR_7;
    VAR_16.ksi_addr = (u_int32_t *)VAR_11;
    FUNC_7(VAR_15, &VAR_16);
    return (0);
   }
  }
 }

 return 1;
}
