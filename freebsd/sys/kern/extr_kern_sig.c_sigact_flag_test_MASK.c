
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_flags; scalar_t__ sa_sigaction; } ;
typedef int __sighandler_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static bool
FUNC_0(const struct sigaction *VAR_3, int VAR_4)
{






 return ((VAR_3->sa_flags & VAR_4) != 0 && (VAR_4 != VAR_0 ||
     ((__sighandler_t *)VAR_3->sa_sigaction != VAR_2 &&
     (__sighandler_t *)VAR_3->sa_sigaction != VAR_1)));
}
