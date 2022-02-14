
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {scalar_t__ uio_resid; } ;
struct ucred {int dummy; } ;
struct tty {int t_mtx; } ;
struct thread {int dummy; } ;
struct pts_softc {int pts_flags; int pts_inwait; } ;
struct file {int f_flag; struct tty* f_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct tty*) ;
 struct pts_softc* FUNC_4 (struct tty*) ;
 int FUNC_5 (struct tty*) ;
 int FUNC_6 (struct tty*) ;
 size_t FUNC_7 (struct tty*,char*,size_t) ;
 int FUNC_8 (char*,size_t,struct uio*) ;

__attribute__((used)) static int
FUNC_9(struct file *VAR_4, struct uio *VAR_5, struct ucred *VAR_6,
    int VAR_7, struct thread *VAR_8)
{
 struct tty *VAR_9 = VAR_4->f_data;
 struct pts_softc *VAR_10 = FUNC_4(VAR_9);
 char VAR_11[256], *VAR_12;
 size_t VAR_13, VAR_14;
 int VAR_15 = 0;

 if (VAR_5->uio_resid == 0)
  return (0);

 for (;;) {
  VAR_12 = VAR_11;
  VAR_13 = FUNC_0(VAR_5->uio_resid, sizeof VAR_11);
  VAR_15 = FUNC_8(VAR_11, VAR_13, VAR_5);

  FUNC_3(VAR_9);
  if (VAR_15 != 0) {
   VAR_13 = 0;
   goto done;
  }





  FUNC_1(VAR_13 > 0);
  do {
   VAR_14 = FUNC_7(VAR_9, VAR_12, VAR_13);
   VAR_12 += VAR_14;
   VAR_13 -= VAR_14;
   if (VAR_13 == 0) {

    break;
   }


   if (VAR_10->pts_flags & VAR_3) {
    VAR_15 = VAR_0;
    goto done;
   }


   if (VAR_4->f_flag & VAR_2) {
    VAR_15 = VAR_1;
    goto done;
   }


   FUNC_6(VAR_9);
   VAR_15 = FUNC_2(&VAR_10->pts_inwait, VAR_9->t_mtx);
   if (VAR_15 != 0)
    goto done;
  } while (VAR_13 > 0);

  if (VAR_5->uio_resid == 0)
   break;
  FUNC_5(VAR_9);
 }

done: FUNC_6(VAR_9);
 FUNC_5(VAR_9);





 VAR_5->uio_resid += VAR_13;
 return (VAR_15);
}
