
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct termios {int c_cflag; int c_lflag; int c_oflag; int c_iflag; } ;
struct TYPE_4__ {int c_cflag; int c_lflag; int c_oflag; int c_iflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct termios*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 TYPE_1__ VAR_4 ;
 int FUNC_3 (int ,char*,int ) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*) ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_5(void)
{
 struct termios VAR_7;


 if (FUNC_4(VAR_3, &VAR_5) < 0) {
  FUNC_3(VAR_1, "tcgetattr %s: %m", VAR_6);
  FUNC_2(1);
 }
 VAR_4 = VAR_5;
 FUNC_1();







 FUNC_0(&VAR_7);
 VAR_5.c_iflag = VAR_7.c_iflag;
 VAR_5.c_oflag = VAR_7.c_oflag;
 VAR_5.c_lflag = VAR_7.c_lflag;
 VAR_5.c_cflag = VAR_7.c_cflag;
 if (VAR_2)
  VAR_5.c_cflag |= VAR_0;
 VAR_4 = VAR_5;
}
