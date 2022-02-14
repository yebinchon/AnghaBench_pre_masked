
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct tty {int dummy; } ;
struct thread {int dummy; } ;
struct pts_softc {int pts_flags; int pts_inpoll; int pts_outpoll; scalar_t__ pts_pkt; } ;
struct file {struct tty* f_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct thread*,int *) ;
 int FUNC_1 (struct tty*) ;
 struct pts_softc* FUNC_2 (struct tty*) ;
 int FUNC_3 (struct tty*) ;
 scalar_t__ FUNC_4 (struct tty*) ;
 scalar_t__ FUNC_5 (struct tty*) ;

__attribute__((used)) static int
FUNC_6(struct file *VAR_7, int VAR_8, struct ucred *VAR_9,
    struct thread *VAR_10)
{
 struct tty *VAR_11 = VAR_7->f_data;
 struct pts_softc *VAR_12 = FUNC_2(VAR_11);
 int VAR_13 = 0;

 FUNC_1(VAR_11);

 if (VAR_12->pts_flags & VAR_5) {

  FUNC_3(VAR_11);
  return ((VAR_8 & (VAR_1|VAR_3)) | VAR_0);
 }

 if (VAR_8 & (VAR_1|VAR_3)) {

  if (FUNC_4(VAR_11) ||
      (VAR_12->pts_flags & VAR_6 && VAR_12->pts_pkt))
   VAR_13 |= VAR_8 & (VAR_1|VAR_3);
 }
 if (VAR_8 & (VAR_2|VAR_4)) {

  if (FUNC_5(VAR_11))
   VAR_13 |= VAR_8 & (VAR_2|VAR_4);
 }







 if (VAR_13 == 0) {





  if (VAR_8 & (VAR_1|VAR_3))
   FUNC_0(VAR_10, &VAR_12->pts_outpoll);
  if (VAR_8 & (VAR_2|VAR_4))
   FUNC_0(VAR_10, &VAR_12->pts_inpoll);
 }

 FUNC_3(VAR_11);

 return (VAR_13);
}
