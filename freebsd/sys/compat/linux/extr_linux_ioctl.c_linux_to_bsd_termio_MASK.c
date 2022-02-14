
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int dummy; } ;
struct linux_termios {int * c_cc; int c_lflag; int c_cflag; int c_oflag; int c_iflag; } ;
struct linux_termio {int c_cc; int c_lflag; int c_cflag; int c_oflag; int c_iflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct linux_termios*,struct termios*) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct linux_termio *VAR_3, struct termios *VAR_4)
{
 struct linux_termios VAR_5;
 int VAR_6;

 VAR_5.c_iflag = VAR_3->c_iflag;
 VAR_5.c_oflag = VAR_3->c_oflag;
 VAR_5.c_cflag = VAR_3->c_cflag;
 VAR_5.c_lflag = VAR_3->c_lflag;
 for (VAR_6=VAR_0; VAR_6<VAR_1; VAR_6++)
  VAR_5.c_cc[VAR_6] = VAR_2;
 FUNC_1(VAR_5.c_cc, VAR_3->c_cc, VAR_0);
 FUNC_0(&VAR_5, VAR_4);
}
