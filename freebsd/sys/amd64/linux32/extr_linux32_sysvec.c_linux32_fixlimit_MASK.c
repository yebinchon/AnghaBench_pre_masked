
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {void* rlim_cur; void* rlim_max; } ;





 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;

__attribute__((used)) static void
FUNC_0(struct rlimit *VAR_3, int VAR_4)
{

 switch (VAR_4) {
 case 130:
  if (VAR_0 != 0) {
   if (VAR_3->rlim_cur > VAR_0)
    VAR_3->rlim_cur = VAR_0;
   if (VAR_3->rlim_max > VAR_0)
    VAR_3->rlim_max = VAR_0;
  }
  break;
 case 129:
  if (VAR_1 != 0) {
   if (VAR_3->rlim_cur > VAR_1)
    VAR_3->rlim_cur = VAR_1;
   if (VAR_3->rlim_max > VAR_1)
    VAR_3->rlim_max = VAR_1;
  }
  break;
 case 128:
  if (VAR_2 != 0) {
   if (VAR_3->rlim_cur > VAR_2)
    VAR_3->rlim_cur = VAR_2;
   if (VAR_3->rlim_max > VAR_2)
    VAR_3->rlim_max = VAR_2;
  }
  break;
 }
}
