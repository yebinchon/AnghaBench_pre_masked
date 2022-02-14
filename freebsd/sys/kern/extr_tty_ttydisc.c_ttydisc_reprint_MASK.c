
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* c_cc; } ;
struct tty {int t_inq; TYPE_1__ t_termios; } ;
typedef scalar_t__ cc_t ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct tty*,scalar_t__,int ) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,struct tty*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct tty *VAR_4)
{
 cc_t VAR_5;


 VAR_5 = VAR_4->t_termios.c_cc[VAR_1];
 if (VAR_5 != VAR_2)
  FUNC_0(VAR_4, VAR_5, 0);
 FUNC_0(VAR_4, VAR_0, 0);
 FUNC_2(&VAR_4->t_inq);

 FUNC_1(&VAR_4->t_inq, VAR_3, VAR_4);
}
