
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {scalar_t__ uio_resid; } ;
struct ucred {int dummy; } ;
struct tty {int t_mtx; } ;
struct thread {int dummy; } ;
struct pts_softc {int pts_flags; char pts_pkt; int pts_outwait; } ;
struct file {int f_flag; struct tty* f_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct tty*) ;
 struct pts_softc* FUNC_2 (struct tty*) ;
 int FUNC_3 (struct tty*) ;
 scalar_t__ FUNC_4 (struct tty*) ;
 int FUNC_5 (struct tty*,struct uio*) ;
 int FUNC_6 (char,struct uio*) ;

__attribute__((used)) static int
FUNC_7(struct file *VAR_5, struct uio *VAR_6, struct ucred *VAR_7,
    int VAR_8, struct thread *VAR_9)
{
 struct tty *VAR_10 = VAR_5->f_data;
 struct pts_softc *VAR_11 = FUNC_2(VAR_10);
 int VAR_12 = 0;
 char VAR_13;

 if (VAR_6->uio_resid == 0)
  return (0);

 FUNC_1(VAR_10);

 for (;;) {





  if (VAR_11->pts_flags & VAR_3 && VAR_11->pts_pkt) {
   VAR_13 = VAR_11->pts_pkt;
   VAR_11->pts_pkt = 0;
   FUNC_3(VAR_10);

   VAR_12 = FUNC_6(VAR_13, VAR_6);
   return (VAR_12);
  }
  if (FUNC_4(VAR_10)) {
   if (VAR_11->pts_flags & VAR_3) {





    FUNC_3(VAR_10);
    VAR_12 = FUNC_6(VAR_4, VAR_6);
    if (VAR_12)
     return (VAR_12);
    FUNC_1(VAR_10);
   }

   VAR_12 = FUNC_5(VAR_10, VAR_6);
   break;
  }


  if (VAR_11->pts_flags & VAR_2)
   break;


  if (VAR_5->f_flag & VAR_1) {
   VAR_12 = VAR_0;
   break;
  }
  VAR_12 = FUNC_0(&VAR_11->pts_outwait, VAR_10->t_mtx);
  if (VAR_12 != 0)
   break;
 }

 FUNC_3(VAR_10);

 return (VAR_12);
}
