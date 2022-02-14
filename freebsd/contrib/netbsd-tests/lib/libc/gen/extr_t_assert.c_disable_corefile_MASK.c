
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {scalar_t__ rlim_max; scalar_t__ rlim_cur; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,struct rlimit*) ;

__attribute__((used)) static void
FUNC_2(void)
{
 struct rlimit VAR_1;

 VAR_1.rlim_cur = 0;
 VAR_1.rlim_max = 0;

 FUNC_0(FUNC_1(VAR_0, &VAR_1) == 0);
}
