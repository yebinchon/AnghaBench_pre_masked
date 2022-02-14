
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uintfptr_t ;
struct trapframe {int dummy; } ;
struct thread {struct trapframe* td_intr_frame; } ;
struct TYPE_3__ {int prof_id; } ;
typedef TYPE_1__ profile_probe_t ;
typedef int hrtime_t ;


 scalar_t__ FUNC_0 (struct thread*) ;
 scalar_t__ FUNC_1 (struct trapframe*) ;
 scalar_t__ FUNC_2 (struct trapframe*) ;
 int VAR_0 ;
 struct thread* VAR_1 ;
 int FUNC_3 (int ,scalar_t__,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(profile_probe_t *VAR_2, hrtime_t VAR_3)
{
 struct thread *VAR_4;
 struct trapframe *VAR_5;
 uintfptr_t VAR_6, VAR_7;

 VAR_4 = VAR_1;
 VAR_6 = VAR_7 = 0;







 VAR_5 = VAR_4->td_intr_frame;
 if (VAR_5 != ((void*)0)) {
  if (FUNC_2(VAR_5))
   VAR_7 = FUNC_1(VAR_5);
  else
   VAR_6 = FUNC_1(VAR_5);
 } else if (FUNC_0(VAR_4))
  VAR_6 = (uintfptr_t)&VAR_0;

 FUNC_3(VAR_2->prof_id, VAR_6, VAR_7, VAR_3, 0, 0);
}
