
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_mask; scalar_t__ sa_flags; int sa_handler; } ;
struct rlimit {void* rlim_max; void* rlim_cur; } ;
typedef int msg ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,struct rlimit*) ;
 int FUNC_2 (int ,struct sigaction*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char const*,int) ;

__attribute__((used)) static void
FUNC_5(void)
{
 const char VAR_5[] = "libdtrace DEBUG: [ forcing coredump ]\n";

 struct sigaction VAR_6;
 struct rlimit VAR_7;

 (void) FUNC_4(VAR_4, VAR_5, sizeof (VAR_5) - 1);

 VAR_6.sa_handler = VAR_3;
 VAR_6.sa_flags = 0;

 (void) FUNC_3(&VAR_6.sa_mask);
 (void) FUNC_2(VAR_2, &VAR_6, ((void*)0));

 VAR_7.rlim_cur = VAR_1;
 VAR_7.rlim_max = VAR_1;

 (void) FUNC_1(VAR_0, &VAR_7);
 FUNC_0();
}
