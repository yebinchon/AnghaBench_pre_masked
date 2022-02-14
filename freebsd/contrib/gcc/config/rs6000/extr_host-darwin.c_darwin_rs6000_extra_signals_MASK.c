
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sigaction {int sa_flags; int sa_sigaction; int sa_mask; } ;
struct TYPE_3__ {scalar_t__ ss_flags; int ss_size; int ss_sp; } ;
typedef TYPE_1__ stack_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,struct sigaction*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5 (void)
{
  struct sigaction VAR_5;
  stack_t VAR_6;

  VAR_6.ss_sp = FUNC_4 (VAR_3);
  VAR_6.ss_size = VAR_3;
  VAR_6.ss_flags = 0;
  if (FUNC_2 (&VAR_6, ((void*)0)) < 0)
    FUNC_0 ("While setting up signal stack: %m");

  FUNC_3(&VAR_5.sa_mask);
  VAR_5.sa_flags = VAR_0 | VAR_1;
  VAR_5.sa_sigaction = VAR_4;
  if (FUNC_1 (VAR_2, &VAR_5, 0) < 0)
    FUNC_0 ("While setting up signal handler: %m");
}
