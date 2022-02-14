
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct tty {int dummy; } ;
struct termios {int dummy; } ;
struct com_s {int* cor; TYPE_1__* tp; } ;
struct TYPE_2__ {scalar_t__ t_hotchar; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct com_s*,int) ;
 int FUNC_1 (struct com_s*,int ,int) ;
 int FUNC_2 (struct tty*) ;

__attribute__((used)) static void
FUNC_3(struct tty *VAR_6, struct termios *VAR_7, struct com_s *VAR_8)
{

 u_char VAR_9;


 FUNC_2(VAR_6);

 VAR_9 = VAR_8->cor[2] & ~VAR_3;
 if (VAR_8->tp->t_hotchar != 0) {
  FUNC_1(VAR_8, VAR_4, VAR_8->tp->t_hotchar);
  FUNC_1(VAR_8, VAR_5, VAR_8->tp->t_hotchar);
  VAR_9 |= VAR_3;
 }
 if (VAR_9 != VAR_8->cor[2]) {
  FUNC_1(VAR_8, VAR_2, VAR_8->cor[2] = VAR_9);
  FUNC_0(VAR_8, VAR_0 | VAR_1);
 }

}
