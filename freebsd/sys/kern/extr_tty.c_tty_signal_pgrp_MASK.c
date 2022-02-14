
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int c_lflag; } ;
struct tty {int * t_pgrp; TYPE_1__ t_termios; int t_flags; } ;
struct TYPE_6__ {int ksi_signo; int ksi_code; } ;
typedef TYPE_2__ ksiginfo_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int,int,TYPE_2__*) ;
 int FUNC_5 (struct tty*) ;
 int FUNC_6 (struct tty*,int ) ;

void
FUNC_7(struct tty *VAR_6, int VAR_7)
{
 ksiginfo_t VAR_8;

 FUNC_6(VAR_6, VAR_0);
 FUNC_0(VAR_7 >= 1 && VAR_7 < VAR_2);


 VAR_6->t_flags &= ~VAR_5;

 if (VAR_7 == VAR_3 && !(VAR_6->t_termios.c_lflag & VAR_1))
  FUNC_5(VAR_6);
 if (VAR_6->t_pgrp != ((void*)0)) {
  FUNC_3(&VAR_8);
  VAR_8.ksi_signo = VAR_7;
  VAR_8.ksi_code = VAR_4;
  FUNC_1(VAR_6->t_pgrp);
  FUNC_4(VAR_6->t_pgrp, VAR_7, 1, &VAR_8);
  FUNC_2(VAR_6->t_pgrp);
 }
}
