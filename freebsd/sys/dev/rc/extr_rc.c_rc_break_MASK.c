
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {struct rc_chans* t_sc; } ;
struct rc_chans {int rc_pendcmd; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct tty *VAR_2, int VAR_3)
{
 struct rc_chans *VAR_4;

 VAR_4 = VAR_2->t_sc;

 if (VAR_3)
  VAR_4->rc_pendcmd = VAR_1;
 else
  VAR_4->rc_pendcmd = VAR_0;
}
