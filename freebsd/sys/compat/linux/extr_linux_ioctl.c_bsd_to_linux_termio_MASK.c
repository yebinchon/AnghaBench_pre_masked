
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int dummy; } ;
struct linux_termios {int c_cc; int c_line; int c_lflag; int c_cflag; int c_oflag; int c_iflag; } ;
struct linux_termio {int c_cc; int c_line; int c_lflag; int c_cflag; int c_oflag; int c_iflag; } ;


 int VAR_0 ;
 int FUNC_0 (struct termios*,struct linux_termios*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct linux_termio*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct termios *VAR_1, struct linux_termio *VAR_2)
{
 struct linux_termios VAR_3;

 FUNC_2(VAR_2, 0, sizeof(*VAR_2));
 FUNC_0(VAR_1, &VAR_3);
 VAR_2->c_iflag = VAR_3.c_iflag;
 VAR_2->c_oflag = VAR_3.c_oflag;
 VAR_2->c_cflag = VAR_3.c_cflag;
 VAR_2->c_lflag = VAR_3.c_lflag;
 VAR_2->c_line = VAR_3.c_line;
 FUNC_1(VAR_2->c_cc, VAR_3.c_cc, VAR_0);
}
