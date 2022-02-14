
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tcflag_t ;
struct termios {int c_lflag; int c_cflag; int c_oflag; int c_iflag; } ;






 int FUNC_0 () ;

__attribute__((used)) static tcflag_t *
FUNC_1(struct termios *VAR_0, int VAR_1) {
 switch (VAR_1) {
 case 130:
  return &VAR_0->c_iflag;
 case 128:
  return &VAR_0->c_oflag;
 case 131:
  return &VAR_0->c_cflag;
 case 129:
  return &VAR_0->c_lflag;
 default:
  FUNC_0();

 }
}
