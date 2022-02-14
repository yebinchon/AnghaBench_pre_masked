
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_1, struct file *VAR_2, unsigned int VAR_3, unsigned long VAR_4)
{
 FUNC_0("tty %p cmd 0x%02x", VAR_1, VAR_3);

 switch (VAR_3) {
 case 136:
  FUNC_0("TCGETS is not supported");
  return -VAR_0;

 case 135:
  FUNC_0("TCSETS is not supported");
  return -VAR_0;

 case 132:
  FUNC_0("TIOCMIWAIT");
  break;

 case 134:
  FUNC_0("TIOCGICOUNT");
  break;

 case 133:
  FUNC_1("TIOCGSERIAL is not supported");
  return -VAR_0;

 case 128:
  FUNC_1("TIOCSSERIAL is not supported");
  return -VAR_0;

 case 129:
  FUNC_1("TIOCSERGSTRUCT is not supported");
  return -VAR_0;

 case 130:
  FUNC_1("TIOCSERGETLSR is not supported");
  return -VAR_0;

 case 131:
  FUNC_1("TIOCSERCONFIG is not supported");
  return -VAR_0;

 default:
  return -VAR_0;

 }

 return -VAR_0;
}
