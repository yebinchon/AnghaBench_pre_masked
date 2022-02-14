
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usrstack ;
typedef scalar_t__ u_long ;
struct rlimit {scalar_t__ rlim_cur; } ;
typedef int mib ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,struct rlimit*) ;
 int FUNC_2 (void*,scalar_t__,int ) ;
 int FUNC_3 (int*,int,scalar_t__*,size_t*,int *,int ) ;

__attribute__((used)) static void
FUNC_4(void)
{
 int VAR_3[2];
 struct rlimit VAR_4;
 u_long VAR_5;
 size_t VAR_6;

 VAR_3[0] = VAR_0;
 VAR_3[1] = VAR_1;
 VAR_6 = sizeof(VAR_5);
 if (FUNC_3(VAR_3, sizeof(VAR_3) / sizeof(VAR_3[0]), &VAR_5, &VAR_6, ((void*)0), 0)
     == -1)
  return;
 if (FUNC_1(VAR_2, &VAR_4) == -1)
  return;
 FUNC_2((void *)(uintptr_t)(VAR_5 - VAR_4.rlim_cur),
     VAR_4.rlim_cur, FUNC_0());
}
