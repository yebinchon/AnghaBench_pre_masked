
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio {scalar_t__ uio_resid; } ;
struct TYPE_2__ {scalar_t__* c_cc; } ;
struct tty {scalar_t__ t_inlow; int t_inq; TYPE_1__ t_termios; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct tty*) ;
 int FUNC_2 (struct tty*,int ) ;
 int FUNC_3 (struct tty*,struct uio*,int) ;
 int FUNC_4 (struct tty*,struct uio*,int) ;
 int FUNC_5 (struct tty*,struct uio*,int) ;
 int FUNC_6 (struct tty*,struct uio*,int,scalar_t__) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;

int
FUNC_9(struct tty *VAR_5, struct uio *VAR_6, int VAR_7)
{
 int VAR_8;

 FUNC_2(VAR_5, VAR_1);

 if (VAR_6->uio_resid == 0)
  return (0);

 if (FUNC_0(VAR_4, VAR_0))
  VAR_8 = FUNC_3(VAR_5, VAR_6, VAR_7);
 else if (VAR_5->t_termios.c_cc[VAR_3] == 0)
  VAR_8 = FUNC_5(VAR_5, VAR_6, VAR_7);
 else if (VAR_5->t_termios.c_cc[VAR_2] == 0)
  VAR_8 = FUNC_6(VAR_5, VAR_6, VAR_7,
      VAR_6->uio_resid);
 else
  VAR_8 = FUNC_4(VAR_5, VAR_6, VAR_7);

 if (FUNC_8(&VAR_5->t_inq) >= VAR_5->t_inlow ||
     FUNC_7(&VAR_5->t_inq) == 0) {

  FUNC_1(VAR_5);
 }

 return (VAR_8);
}
