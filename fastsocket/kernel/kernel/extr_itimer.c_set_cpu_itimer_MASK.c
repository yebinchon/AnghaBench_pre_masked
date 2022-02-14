
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {TYPE_2__* sighand; TYPE_1__* signal; } ;
struct itimerval {int it_interval; int it_value; } ;
struct cpu_itimer {void* incr; void* expires; void* error; void* incr_error; } ;
typedef int s64 ;
typedef void* cputime_t ;
struct TYPE_4__ {int siglock; } ;
struct TYPE_3__ {struct cpu_itimer* it; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (void*,int ) ;
 int FUNC_1 (void*,int ) ;
 scalar_t__ FUNC_2 (void*,int ) ;
 int VAR_3 ;
 void* FUNC_3 (void*,int ) ;
 int FUNC_4 (void*,int *) ;
 int VAR_4 ;
 int FUNC_5 (struct task_struct*,unsigned int,void**,void**) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 void* FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,struct itimerval const* const,void*) ;

__attribute__((used)) static void FUNC_11(struct task_struct *VAR_5, unsigned int VAR_6,
      const struct itimerval *const VAR_7,
      struct itimerval *const VAR_8)
{
 cputime_t VAR_9, VAR_10, VAR_11, VAR_12;
 s64 VAR_13, VAR_14;
 struct cpu_itimer *VAR_15 = &VAR_5->signal->it[VAR_6];

 VAR_10 = FUNC_8(&VAR_7->it_value);
 VAR_14 = FUNC_9(&VAR_7->it_value);
 VAR_12 = FUNC_8(&VAR_7->it_interval);
 VAR_13 = FUNC_9(&VAR_7->it_interval);

 VAR_15->incr_error = FUNC_3(VAR_12, VAR_13);
 VAR_15->error = FUNC_3(VAR_10, VAR_14);

 FUNC_6(&VAR_5->sighand->siglock);

 VAR_9 = VAR_15->expires;
 VAR_11 = VAR_15->incr;
 if (!FUNC_1(VAR_9, VAR_4) ||
     !FUNC_1(VAR_10, VAR_4)) {
  if (FUNC_2(VAR_10, VAR_4))
   VAR_10 = FUNC_0(VAR_10, VAR_3);
  FUNC_5(VAR_5, VAR_6, &VAR_10, &VAR_9);
 }
 VAR_15->expires = VAR_10;
 VAR_15->incr = VAR_12;
 FUNC_10(VAR_6 == VAR_0 ?
      VAR_2 : VAR_1, VAR_7, VAR_10);

 FUNC_7(&VAR_5->sighand->siglock);

 if (VAR_8) {
  FUNC_4(VAR_9, &VAR_8->it_value);
  FUNC_4(VAR_11, &VAR_8->it_interval);
 }
}
