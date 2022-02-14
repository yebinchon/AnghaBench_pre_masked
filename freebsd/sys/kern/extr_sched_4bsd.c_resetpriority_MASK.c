
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct thread {scalar_t__ td_pri_class; TYPE_1__* td_proc; } ;
struct TYPE_4__ {int ts_estcpu; } ;
struct TYPE_3__ {int p_nice; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct thread*,scalar_t__) ;
 TYPE_2__* FUNC_3 (struct thread*) ;

__attribute__((used)) static void
FUNC_4(struct thread *VAR_7)
{
 u_int VAR_8;

 if (VAR_7->td_pri_class != VAR_5)
  return;
 VAR_8 = VAR_6 +
     FUNC_3(VAR_7)->ts_estcpu / VAR_0 +
     VAR_1 * (VAR_7->td_proc->p_nice - VAR_2);
 VAR_8 = FUNC_1(FUNC_0(VAR_8, VAR_4),
     VAR_3);
 FUNC_2(VAR_7, VAR_8);
}
