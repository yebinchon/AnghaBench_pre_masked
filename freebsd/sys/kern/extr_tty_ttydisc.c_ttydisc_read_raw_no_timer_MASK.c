
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio {size_t uio_resid; } ;
struct TYPE_2__ {size_t* c_cc; } ;
struct tty {int t_flags; int t_inwait; int t_inq; TYPE_1__ t_termios; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct tty*,int *) ;
 int FUNC_2 (struct tty*,int ,int ) ;
 int FUNC_3 (int *,struct tty*,struct uio*,size_t,int ) ;

__attribute__((used)) static int
FUNC_4(struct tty *VAR_7, struct uio *VAR_8, int VAR_9)
{
 size_t VAR_10 = VAR_7->t_termios.c_cc[VAR_4];
 ssize_t VAR_11 = VAR_8->uio_resid;
 int VAR_12;

 FUNC_0(VAR_7->t_termios.c_cc[VAR_5] == 0);







 for (;;) {
  VAR_12 = FUNC_2(VAR_7, VAR_6, VAR_2);
  if (VAR_12)
   return (VAR_12);

  VAR_12 = FUNC_3(&VAR_7->t_inq, VAR_7, VAR_8,
      VAR_8->uio_resid, 0);
  if (VAR_12)
   return (VAR_12);
  if (VAR_8->uio_resid == 0 || (VAR_11 - VAR_8->uio_resid) >= VAR_10)
   return (0);


  if (VAR_7->t_flags & VAR_3)
   return (0);
  else if (VAR_9 & VAR_1)
   return (VAR_0);

  VAR_12 = FUNC_1(VAR_7, &VAR_7->t_inwait);
  if (VAR_12)
   return (VAR_12);
 }
}
