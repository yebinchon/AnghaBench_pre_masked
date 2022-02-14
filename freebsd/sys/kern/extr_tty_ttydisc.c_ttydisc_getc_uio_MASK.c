
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {scalar_t__ uio_resid; } ;
struct tty {int t_flags; int t_outq; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct tty*) ;
 int FUNC_3 (struct tty*,int ) ;
 int VAR_5 ;
 int FUNC_4 (struct tty*) ;
 size_t FUNC_5 (struct tty*,char*,int ) ;
 int FUNC_6 (struct tty*) ;
 scalar_t__ FUNC_7 (struct tty*,int ) ;
 int FUNC_8 (int *,struct tty*,struct uio*) ;
 int FUNC_9 (char*,size_t,struct uio*) ;

int
FUNC_10(struct tty *VAR_6, struct uio *VAR_7)
{
 int VAR_8 = 0;
 ssize_t VAR_9 = VAR_7->uio_resid;
 size_t VAR_10;
 char VAR_11[VAR_2];

 FUNC_3(VAR_6, VAR_0);

 if (VAR_6->t_flags & VAR_1)
  return (0);






 if (FUNC_7(VAR_6, VAR_3) ||
     FUNC_7(VAR_6, VAR_4)) {
  while (VAR_7->uio_resid > 0) {

   VAR_10 = FUNC_5(VAR_6, VAR_11,
       FUNC_0(VAR_7->uio_resid, sizeof VAR_11));
   if (VAR_10 == 0)
    break;


   FUNC_4(VAR_6);
   VAR_8 = FUNC_9(VAR_11, VAR_10, VAR_7);
   FUNC_2(VAR_6);

   if (VAR_8 != 0)
    break;
  }
 } else {
  VAR_8 = FUNC_8(&VAR_6->t_outq, VAR_6, VAR_7);

  FUNC_6(VAR_6);
  FUNC_1(&VAR_5, VAR_9 - VAR_7->uio_resid);
 }

 return (VAR_8);
}
