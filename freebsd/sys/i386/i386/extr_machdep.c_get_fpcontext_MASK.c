
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef union savefpu {int dummy; } savefpu ;
struct thread {int dummy; } ;
struct TYPE_3__ {char* mc_fpstate; size_t mc_xfpustate_len; int mc_flags; int mc_fpformat; int mc_ownedfp; } ;
typedef TYPE_1__ mcontext_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,char*,size_t) ;
 int FUNC_1 (char*,size_t) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct thread*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct thread*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_5(struct thread *VAR_3, mcontext_t *VAR_4, char *VAR_5,
    size_t VAR_6)
{
 size_t VAR_7, VAR_8;

 VAR_4->mc_ownedfp = FUNC_4(VAR_3);
 FUNC_0(FUNC_2(VAR_3), &VAR_4->mc_fpstate[0],
     sizeof(VAR_4->mc_fpstate));
 VAR_4->mc_fpformat = FUNC_3();
 if (!VAR_2 || VAR_6 == 0)
  return;
 VAR_7 = VAR_1 - sizeof(union savefpu);
 VAR_8 = VAR_6;
 if (VAR_8 > VAR_7) {
  VAR_8 = VAR_7;
  FUNC_1(VAR_5 + VAR_7, VAR_8 - VAR_7);
 }
 VAR_4->mc_flags |= VAR_0;
 VAR_4->mc_xfpustate_len = VAR_8;
 FUNC_0(FUNC_2(VAR_3) + 1, VAR_5, VAR_8);
}
