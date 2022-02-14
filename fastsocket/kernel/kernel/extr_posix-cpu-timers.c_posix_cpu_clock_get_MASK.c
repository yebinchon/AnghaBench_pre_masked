
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union cpu_time_count {int dummy; } cpu_time_count ;
struct timespec {int dummy; } ;
struct task_struct {scalar_t__ signal; } ;
typedef scalar_t__ pid_t ;
typedef int clockid_t ;


 scalar_t__ FUNC_0 (int const) ;
 scalar_t__ FUNC_1 (int const) ;
 int VAR_0 ;
 int FUNC_2 (int const,struct task_struct*,union cpu_time_count*) ;
 int FUNC_3 (int const,struct task_struct*,union cpu_time_count*) ;
 struct task_struct* VAR_1 ;
 struct task_struct* FUNC_4 (scalar_t__ const) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct task_struct*,struct task_struct*) ;
 int FUNC_10 (int const,union cpu_time_count,struct timespec*) ;
 int VAR_2 ;
 scalar_t__ FUNC_11 (struct task_struct*) ;

__attribute__((used)) static int FUNC_12(const clockid_t VAR_3, struct timespec *VAR_4)
{
 const pid_t VAR_5 = FUNC_1(VAR_3);
 int VAR_6 = -VAR_0;
 union cpu_time_count VAR_7;

 if (VAR_5 == 0) {




  if (FUNC_0(VAR_3)) {



   VAR_6 = FUNC_2(VAR_3,
       VAR_1, &VAR_7);
  } else {
   FUNC_7(&VAR_2);
   VAR_6 = FUNC_3(VAR_3,
             VAR_1, &VAR_7);
   FUNC_8(&VAR_2);
  }
 } else {




  struct task_struct *VAR_8;
  FUNC_5();
  VAR_8 = FUNC_4(VAR_5);
  if (VAR_8) {
   if (FUNC_0(VAR_3)) {
    if (FUNC_9(VAR_8, VAR_1)) {
     VAR_6 = FUNC_2(VAR_3,
         VAR_8, &VAR_7);
    }
   } else {
    FUNC_7(&VAR_2);
    if (FUNC_11(VAR_8) && VAR_8->signal) {
     VAR_6 =
         FUNC_3(VAR_3,
                  VAR_8, &VAR_7);
    }
    FUNC_8(&VAR_2);
   }
  }
  FUNC_6();
 }

 if (VAR_6)
  return VAR_6;
 FUNC_10(VAR_3, VAR_7, VAR_4);
 return 0;
}
