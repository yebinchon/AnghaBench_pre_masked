
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sigaction {int sa_handler; int sa_flags; } ;
typedef TYPE_1__* posix_spawnattr_t ;
struct TYPE_3__ {int sa_flags; int sa_sigdefault; int sa_sigmask; int sa_schedparam; int sa_schedpolicy; int sa_pgroup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int,struct sigaction*,int *) ;
 int FUNC_1 (int ,int *,int *) ;
 int VAR_9 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int ,int *) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int *,int) ;

__attribute__((used)) static int
FUNC_10(const posix_spawnattr_t VAR_10)
{
 struct sigaction VAR_11 = { .sa_flags = 0, .sa_handler = VAR_6 };
 int VAR_12;
 if (VAR_10->sa_flags & VAR_1) {
  if (FUNC_8(0, VAR_10->sa_pgroup) != 0)
   return (VAR_9);
 }


 if (VAR_10->sa_flags & VAR_3) {
  if (FUNC_5(0, VAR_10->sa_schedpolicy,
      &VAR_10->sa_schedparam) != 0)
   return (VAR_9);
 } else if (VAR_10->sa_flags & VAR_2) {
  if (FUNC_4(0, &VAR_10->sa_schedparam) != 0)
   return (VAR_9);
 }


 if (VAR_10->sa_flags & VAR_0) {
  if (FUNC_6(FUNC_2()) != 0)
   return (VAR_9);
  if (FUNC_7(FUNC_3()) != 0)
   return (VAR_9);
 }





 if (VAR_10->sa_flags & VAR_5) {
  FUNC_1(VAR_7, &VAR_10->sa_sigmask, ((void*)0));
 }

 if (VAR_10->sa_flags & VAR_4) {
  for (VAR_12 = 1; VAR_12 <= VAR_8; VAR_12++) {
   if (FUNC_9(&VAR_10->sa_sigdefault, VAR_12))
    if (FUNC_0(VAR_12, &VAR_11, ((void*)0)) != 0)
     return (VAR_9);
  }
 }

 return (0);
}
